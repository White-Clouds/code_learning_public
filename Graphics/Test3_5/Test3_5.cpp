#include <gl/glut.h> 

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 30.0, 0.0, 30.0);
}

void putpixel(int x, int y)
{
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2);
	glBegin(GL_POINTS);
	glVertex2f(15 + x, 15 + y);
	glEnd();
	glFlush();
}

void CirclePoint(int x, int y)
{
	putpixel(x, y);
	putpixel(y, x);
	putpixel(-y, x);
	putpixel(-x, y);
	putpixel(-x, -y);
	putpixel(-y, -x);
	putpixel(y, -x);
	putpixel(x, -y);
}

void MidBresenhamCircle(int r)
{
	int x, y, d;
	x = 0;
	y = r;
	d = 1 - r;
	while (x <= y)
	{
		CirclePoint(x, y);
		if (d < 0)
			d += 2 * x + 3;
		else
		{
			d += 2 * (x - y) + 5;
			y--;
		}
		x++;
	}
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	MidBresenhamCircle(8);
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("中点Bresenham画圆");
	glutDisplayFunc(display);
	init();
	glutMainLoop();

	return 0;
}
