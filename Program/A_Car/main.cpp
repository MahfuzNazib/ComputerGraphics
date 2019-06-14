#include<windows.h>
#include<gl\gl.h>
#include<gl\glu.h>
#include<gl\glut.h>
#include<math.h>
# define PI 3.14159265358979323846


void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub(223, 30, 17);
    glBegin(GL_QUADS);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.6,0.2);
    glVertex2f(-0.5,0.2);
    glVertex2f(-0.5,-0.2);

    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0.4,0.2);
    glVertex2f(0.3,0.5);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.4,0.2);

    glEnd();

    //draw the wheel

    glColor3ub(0,0,0);        // Clear the color buffer (background)
	int j;

	GLfloat a=-0.3f; GLfloat b=-0.2f; GLfloat radius2 =.15f;
	int triangleAmount = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            a + (radius2 * cos(j *  twicePi2 / triangleAmount)),
			    b + (radius2 * sin(j * twicePi2 / triangleAmount))
			);
		}
	glEnd();

	//another wheel
	glColor3ub(0,0,0);        // Clear the color buffer (background)
	int i;

	GLfloat x=0.5f; GLfloat y=-0.2f; GLfloat radius =.15f;
	int triangleAmount2 = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; j <= triangleAmount2;i++) {
			glVertex2f(
		            x + (radius2 * cos(j *  twicePi / triangleAmount2)),
			    y + (radius2 * sin(j * twicePi / triangleAmount2))
			);
		}
	glEnd();



    glFlush();

}
int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(5,5);
    glutCreateWindow("Graphical Line");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
