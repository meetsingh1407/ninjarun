#include <stdio.h>
#include <GL/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0);
    /*
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 4.0, 0.0);
    glVertex3f(8.0, 4.0, 0.0);
    glVertex3f(8.0, 6.0, 0.0);
    glVertex3f(2.0, 6.0, 0.0);
    glEnd();
    */
    glBegin(GL_TRIANGLES);
    glVertex2f(2.0, 4.0);
    glVertex2f(4.0, 4.0);
    glVertex2f(3.0, 6.0);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    printf("hello world\n");
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

    int screen_pos_x = glutGet((GLenum)GLUT_WINDOW_X);
    int screen_pos_y = glutGet((GLenum)GLUT_WINDOW_Y);
    glutInitWindowPosition(screen_pos_x, screen_pos_y);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Meet Singh");

    glClearColor(0.0, 0.0, 0.0, 0.0);         // black background
    glMatrixMode(GL_PROJECTION);              // setup viewing projection
    glLoadIdentity();                         // start with identity matrix
    glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0); // setup a 10x10x2 viewing world

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}