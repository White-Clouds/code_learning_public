#include <GL/glut.h> 
#include<math.h>
#include<iostream>
using namespace std;
float x11, y11, x22, y22;
void MidLine(void)
{
	float x1 =
		x11, y1 = y11, x2 = x22, y2 = y22;
	double x, y,
		d0, d1, d2, a, b;
	glClear(GL_COLOR_BUFFER_BIT);
	y = y1;
	a = y11 - y2;
	b = x22 - x11;
	d0 = 2 * a + b;
	d1 = 2 * a;
	d2 = 2 * (a + b);
	for (x = x11; x <= x22; x++)
	{
		glBegin(GL_POINTS);
		glColor3f(2, 1, 1);
		glVertex2f(x / 1000, y / 1000);
		glEnd();
		if (d0 < 0)
		{
			y++;
			d0 += d2;
		}
		else {
			d0 += d1;
		}
	}
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(400, 400);
	glutCreateWindow("3D Tech-GLUT Tutorial");
	cout << "输入起始点坐标，终点坐标" << endl;
	cin >> x11 >> y11 >> x22 >> y22;
	glutDisplayFunc(MidLine);
	glutMainLoop();
}
