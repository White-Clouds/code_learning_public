#include<gl/glut.h>

int iPointNum = 0;
int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
int winWidth = 500, winHeight = 500;

void Initial(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void ChangeSize(int w, int h)
{
	winWidth = w;
	winHeight = h;
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, winWidth, 0.0, winHeight);
}

void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	if (iPointNum >= 1)
	{
		glBegin(GL_LINES);
		glVertex2i(x1, y1);
		glVertex2i(x2, y2);
		glEnd();
	}
	glutSwapBuffers();
}

void MousePlot(GLint button, GLint action, GLint xMouse, GLint yMouse)
{
	if (button == GLUT_LEFT_BUTTON && action == GLUT_DOWN)
	{
		if (iPointNum == 0 || iPointNum == 2)
		{
			iPointNum = 1;
			x1 = xMouse;
			y1 = winHeight - yMouse;
		}
		else {
			iPointNum = 2;
			x2 = xMouse;
			y2 = winHeight - yMouse;
			glutPostRedisplay();
		}
		if (button == GLUT_RIGHT_BUTTON && action == GLUT_DOWN) {
			iPointNum = 0;
			glutPostRedisplay();
		}
	}
}

void PassiveMouseMove(GLint xMouse, GLint yMouse)
{
	if (iPointNum == 1)
	{
		x2 = xMouse;
		y2 = winHeight - yMouse;
		glutPostRedisplay();
	}
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("交互实验");
	glutDisplayFunc(Display);
	glutReshapeFunc(ChangeSize);
	glutMouseFunc(MousePlot);
	glutPassiveMotionFunc(PassiveMouseMove);
	Initial();
	glutMainLoop();
	return 0;
}
