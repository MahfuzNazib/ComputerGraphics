#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.14159265358979323846

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //Circle
    glColor3ub(130, 134, 144);
	int j;

	GLfloat a=0; GLfloat b=0; GLfloat radius =.5f;
	int triangleAmount = 60;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b);
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            a + (radius * cos(j *  twicePi / triangleAmount)),
			    b + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

	glColor3ub(213, 220, 241);
	glBegin(GL_LINES);
	glVertex2f(0,.3);
	glVertex2f(0,-.3);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(.2,.3);
	glVertex2f(.3,-.1);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(.3,-.05);
	glVertex2f(.2,-.3);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-.2,.3);
	glVertex2f(-.3,-.1);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-.3,-.05);
	glVertex2f(-.2,-.3);
	glEnd();

	glColor3ub(0, 82, 27);
	glBegin(GL_QUADS);
	glVertex2f(.4,-.8);
	glVertex2f(.5,-.4);
	glVertex2f(-.5,-.4);
	glVertex2f(-.6,-.8);
	glEnd();

	//window

	glColor3ub(54, 62, 81);
	glBegin(GL_QUADS);
	glVertex2f(.45,.2);
	glVertex2f(.4,.3);
	glVertex2f(-.4,.3);
	glVertex2f(-.45,.2);
	glEnd();


	glColor3ub(54, 62, 81);
	glBegin(GL_QUADS);
	glVertex2f(.49,.05);
	glVertex2f(.47,.15);
	glVertex2f(-.47,.15);
	glVertex2f(-.49,.05);
	glEnd();


	glColor3ub(54, 62, 81);
	glBegin(GL_QUADS);
	glVertex2f(.49,-.1);
	glVertex2f(.5,0);
	glVertex2f(-.5,0);
	glVertex2f(-.49,-.1);
	glEnd();


	glColor3ub(54, 62, 81);
	glBegin(GL_QUADS);
	glVertex2f(.42,-.26);
	glVertex2f(.47,-.16);
	glVertex2f(-.47,-.16);
	glVertex2f(-.42,-.26);
	glEnd();


	glColor3ub(54, 62, 81);
	glBegin(GL_QUADS);
	glVertex2f(.38,-.3);
	glVertex2f(.31,-.4);
	glVertex2f(-.31,-.4);
	glVertex2f(-.38,-.3);
	glEnd();

    /////////////
    glColor3ub(130, 134, 144);
	glBegin(GL_QUADS);
	glVertex2f(.31,-.6);
	glVertex2f(.31,-.4);
	glVertex2f(-.31,-.4);
	glVertex2f(-.31,-.6);
	glEnd();

    //AIUB TEXT
    glColor3ub(94, 2, 191);

    //DESIGN A
    glBegin(GL_LINES);
    glVertex2f(-.4,.9);
    glVertex2f(-.5,.6);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-.4,.9);
    glVertex2f(-.3,.6);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-.45,.7);
    glVertex2f(-.35,.7);
    glEnd();

    //desing I

    glBegin(GL_LINES);
    glVertex2f(-.15,.9);
    glVertex2f(-.15,.6);
    glEnd();

    //Desing U

    glBegin(GL_LINES);
    glVertex2f(0,.9);
    glVertex2f(0,.6);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0,.6);
    glVertex2f(.2,.6);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.2,.9);
    glVertex2f(.2,.6);
    glEnd();

    //Desing B

    glBegin(GL_LINES);
    glVertex2f(.3,.9);
    glVertex2f(.3,.6);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.3,.9);
    glVertex2f(.4,.8);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.4,.8);
    glVertex2f(.3,.75);
    glEnd();


    glBegin(GL_LINES);
    glVertex2f(.3,.75);
    glVertex2f(.4,.7);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.4,.7);
    glVertex2f(.3,.6);
    glEnd();



	glFlush();
}


int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("AIUB_Library_Front_View");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


