#include <gl/glut.h>
void mydisplay(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.8f, -0.5f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.8f, -0.5f);
	glEnd();
	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("画三角形实验");
	glutDisplayFunc(&mydisplay);
	glutMainLoop();
	return 0;
}
