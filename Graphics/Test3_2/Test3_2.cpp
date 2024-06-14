#include<gl/glut.h>
#include<math.h>
void SetPixel(int x, int y)
{
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void Bres_Circle(int x0, int y0, double r)
{
	int x, y, d, d1, d2, direction;
	x = 0;
	y = r;
	d = 2 * (1 - r);
	while (y >= 0)
	{
		SetPixel(x0 + x, y0 + y);//第四分之一圆
		SetPixel(x0 - x, y0 + y);//第四分之一圆做左称
		SetPixel(x0 - x, y0 - y);//第四分之一圆中心对称
		SetPixel(x0 + x, y0 - y);//第四分之一圆下对称
		if (d < 0)
		{
			d1 = 2 * (d + y) - 1;
			if (d1 <= 0)direction = 1;
			else     direction = 2;
		}
		else if (d > 0)
		{
			d2 = 2 * (d - x) - 1;
			if (d2 <= 0)direction = 2;
			else     direction = 3;
		}
		else direction = 3;
		switch (direction)
		{
		case 1:x++; d += 2 * x - 1; break;
		case 2:x++; y--; d += 2 * (x - y + 1); break;
		case 3:y--; d += -2 * y + 1; break;
		}
	}
}

void myDisplay()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	Bres_Circle(200, 200, 100.0);

	glFlush();
}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

void main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Bresenham画圆");
	glutDisplayFunc(myDisplay);
	glutReshapeFunc(Reshape);
	glutMainLoop();
}