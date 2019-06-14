#include<windows.h>
#include<gl/glut.h>
#include<GL/glut.h>


void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(234, 11, 25);

    //RainBow

    glBegin(GL_QUADS);
    glVertex2f(1,0.6);
    glVertex2f(1,0.8);
    glVertex2f(-1,0.8);
    glVertex2f(-1,0.6);

    glEnd();
    glColor3ub(222, 180, 24  );

    glBegin(GL_QUADS);
    glVertex2f(1,0.4);
    glVertex2f(1,0.6);
    glVertex2f(-1,0.6);
    glVertex2f(-1,0.4);

    glEnd();


    glColor3ub(245, 252, 5);

    glBegin(GL_QUADS);
    glVertex2f(1,0.2);
    glVertex2f(1,0.4);
    glVertex2f(-1,0.4);
    glVertex2f(-1,0.2);

    glEnd();


    glColor3ub(27, 87, 3);

    glBegin(GL_QUADS);
    glVertex2f(1,0);
    glVertex2f(1,0.2);
    glVertex2f(-1,0.2);
    glVertex2f(-1,0);

    glEnd();


    glColor3ub(18, 18, 197);

    glBegin(GL_QUADS);
    glVertex2f(1,-0.2);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glVertex2f(-1,-0.2);

    glEnd();

    glColor3ub(120, 7, 154);

    glBegin(GL_QUADS);
    glVertex2f(1,-0.4);
    glVertex2f(1,-0.2);
    glVertex2f(-1,-0.2);
    glVertex2f(-1,-0.4);

    glEnd();


    glFlush();


}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("RainBow Flag");
    glutInitWindowSize(320,320);
    glutInitWindowPosition(5,5);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}


