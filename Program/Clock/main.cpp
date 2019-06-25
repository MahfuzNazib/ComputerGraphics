#include <windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI 3.14159265358979323846

GLfloat i = 0.0f;



void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
   // glLoadIdentity();//Reset the current matrix

   //Circle
    int w2;
    glColor3ub(32, 48, 122);
	GLfloat x2=0.0f; GLfloat y2=0.0f; GLfloat radius2 =.7f;
	int triangleAmount2 = 60;
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2);
		for(w2 = 0; w2 <= triangleAmount2;w2++) {
			glVertex2f(
		            x2 + (radius2 * cos(w2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(w2 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();
	glLoadIdentity();

     //i=how many degree you want to rotate around an axis

    glTranslatef(0.f,0.0f,0.f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.6f, 0.6f);


    glEnd();
    glPopMatrix();


    i+=0.1f;

    //glLoadIdentity();





    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//

    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;
}
