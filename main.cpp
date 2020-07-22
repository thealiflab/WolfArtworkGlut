#include<windows.h>
#include <GL/glut.h>

//#include <GL/glut.h>
void myInit(void)
{
glClearColor(240.0f/255.0f, 241.0f/255.0f, 227.0f/255.0f, 1.0f);

glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0, 512.0, 0.0, 512.0);
}
void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT); // clear the screen
glLineWidth(6.0);

//coordinate anti-clockwise

//rgb(253,173,114)
//rgb(255,136,73)


//1st

glBegin(GL_TRIANGLES);
glColor3f(253.0f/255.0f, 173.0f/255.0f, 114.0f/255.0f);


glVertex2i(460,310); //right
glVertex2i(280,371); //top (ulta system for x)
glVertex2i(290,180); //bottom

glEnd();
glFlush(); // send all output to display

//2nd

glBegin(GL_TRIANGLES);
glColor3f(255.0f/255.0f, 136.0f/255.0f, 73.0f/255.0f);

glVertex2i(460,310); //right
glVertex2i(340,390); //top
glVertex2i(280,371); // left

glEnd();
glFlush();

//3rd

glBegin(GL_TRIANGLES);
glColor3f(255.0f/255.0f, 147.0f/255.0f, 72.0f/255.0f);

glVertex2i(340,390); //left
glVertex2i(255,500); //top
glVertex2i(280,371); //right


glEnd();
glFlush();

//4th

glBegin(GL_QUADS);
glColor3f(180.0f/255.0f, 86.0f/255.0f, 39.0f/255.0f);


glVertex2i(280,371); //right bottom
glVertex2i(255,500); //top
glVertex2i(233,430); //upper left
glVertex2i(233,378); //left bottom

glEnd();
glFlush();

//5th

glBegin(GL_QUADS);
glColor3f(254.0f/255.0f, 177.0f/255.0f, 89.0f/255.0f);

glVertex2i(188,315);
glVertex2i(226,305);
glVertex2i(280,371); //top left
glVertex2i(233,378); //bottom left


glEnd();
glFlush();

//6th  (255,184,100)

glBegin(GL_TRIANGLES);
glColor3f(255.0f/255.0f, 155.0f/255.0f, 52.0f/255.0f);

glVertex2i(280,371); //top
glVertex2i(226,305); //right
glVertex2i(290,180); //bottom

glEnd();
glFlush();

//7th

glBegin(GL_TRIANGLES);
glColor3f(255.0f/255.0f, 184.0f/255.0f, 100.0f/255.0f);

glVertex2i(226,305); //top
glVertex2i(290,180); //bottom
glVertex2i(205,215); //left

glEnd();
glFlush();

//8th

glBegin(GL_QUADS);
glColor3f(180.0f/255.0f, 86.0f/255.0f, 39.0f/255.0f);

glVertex2i(188,315); //right
glVertex2i(226,305); //top left
glVertex2i(198,280); //bottom right
glVertex2i(173,295); //bottom left


glEnd();
glFlush();






}
int main(int iArgc, char** cppArgv)
{
glutInit(&iArgc, cppArgv); // initialize the toolkit
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode
glutInitWindowSize(640,480); // set window size
glutInitWindowPosition(100, 150); // set window upper left corner position on screen
glutCreateWindow("My First Attempt"); // open the screen window (Title: My First Attempt)
// register the callback functions
glutDisplayFunc(myDisplay);
myInit(); // additional initializations as necessary
glutMainLoop(); // go into a endless loop
return 0;
}
