#include<GL/glut.h>
#include<math.h>
void lineBres(int x1, int y1, int x2, int y2)
{
	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);
	int p = 2 * dy - dx;
	int twody = 2 * dy, twodxdy = 2 * (dy - dx);
	int x, y;
	int xEnd;
	if (x1 > x2) { x = x2; y = y2; xEnd = x1; }
	else { x = x1; y = y1; xEnd = x2; }
	glVertex2i(x, y);
	while (x < xEnd) {
		x++;
		if (p < 0) p += twody;
		else {
			y++;
			p += twodxdy;
		}
		glVertex2i(x, y);
	}
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0f, 1.0f);
	glBegin(GL_POINTS);
	lineBres(20, 20, 200, 300);
	glEnd();
	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Bresenham算法画直线");
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
