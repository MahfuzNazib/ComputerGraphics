#include<windows.h>
#include<gl\gl.h>
#include<gl\glu.h>
#include<gl\glut.h>

void triangle(void)
{
    glColor3f(1,1,1)
;    glBegin(GL_TRIANGLES);
    glVertex2f(0.5,0.8);
    glVertex2f(0.1,0.1);
    glVertex2f(0.9,0.1);


    glEnd();
    glFlush();

}

//display Function
void display(void)
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2f(0.2,0.1);
    glVertex2f(0.6,0.1);

    glVertex2f(-0.7,0.1);
    glVertex2f(-0.4,0.1);

    triangle();


    glEnd();
    glFlush();
}




//My Main Function
int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    //glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,450);
    glutInitWindowPosition(5,5);
    glutCreateWindow("Graphical Line");
    glutDisplayFunc(display);
    //glutDisplayFunc(triangle);
    glutMainLoop();

    return 0;
}
