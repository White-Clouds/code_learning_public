#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>

int clipTest(float p, float q, float* u1, float* u2) {
    float r;
    int result = 1;
    if (p < 0.0) {
        r = q / p;
        if (r > *u2)
            result = 0;
        else if (r > *u1)
            *u1 = r;
    }
    else if (p > 0.0) {
        r = q / p;
        if (r < *u1)
            result = 0;
        else if (r < *u2)
            *u2 = r;
    }
    else if (q < 0.0)
        result = 0;
    return result;
}

float x1, y1, x2, y2;

struct Rectangle {
    float XL, XR, YB, YT;
};

struct Rectangle rect;

void LineGL(float x0, float y0, float x1, float y1) {
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(x0, y0);
    glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(x1, y1);
    glEnd();
}

int L_B_LineClip(struct Rectangle rect, float& x1, float& y1, float& x2, float& y2) {
    float u1 = 0.0, u2 = 1.0;
    float dx = x2 - x1, dy = y2 - y1;

    if (clipTest(-dx, x1 - rect.XL, &u1, &u2)) {
        if (clipTest(dx, rect.XR - x1, &u1, &u2)) {
            if (clipTest(-dy, y1 - rect.YB, &u1, &u2)) {
                if (clipTest(dy, rect.YT - y1, &u1, &u2)) {
                    if (u2 < 1.0) {
                        x2 = x1 + u2 * dx;
                        y2 = y1 + u2 * dy;
                    }
                    if (u1 > 0.0) {
                        x1 = x1 + u1 * dx;
                        y1 = y1 + u1 * dy;
                    }
                    return 1;
                }
            }
        }
    }
    return 0;
}

void myDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(rect.XL, rect.YB, rect.XR, rect.YT);
    LineGL(x1, y1, x2, y2);
    glFlush();
}

void Init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    rect.XL = 100;
    rect.XR = 300;
    rect.YB = 100;
    rect.YT = 300;
    x1 = 450;
    y1 = 0;
    x2 = 0;
    y2 = 450;
    printf("Press key 'c' to Clip!\nPress key 'r' to Restore!\n");
}

void Reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'c':
        if (L_B_LineClip(rect, x1, y1, x2, y2)) {
            printf("Line clipped to: (%f, %f) to (%f, %f)\n", x1, y1, x2, y2);
        }
        else {
            printf("Line outside the clipping window.\n");
        }
        glutPostRedisplay();
        break;
    case 'r':
        Init();
        glutPostRedisplay();
        break;
    case 'x':
        exit(0);
        break;
    default:
        break;
    }
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Line Clipping with Liang-Barsky Algorithm");
    Init();
    glutDisplayFunc(myDisplay);
    glutReshapeFunc(Reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
