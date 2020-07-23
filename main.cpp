#include<windows.h>
#include <GL/glut.h>

//#include <GL/glut.h>
void myInit(void)
{
glClearColor(240.0f/255.0f, 241.0f/255.0f, 227.0f/255.0f, 1.0f);

glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0, 550.0, 0.0, 550.0);
}
void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT); // clear the screen
glLineWidth(6.0);

//coordinate anti-clockwise

//1st

glBegin(GL_TRIANGLES);
glColor3f(254.0f/255.0f, 169.0f/255.0f, 108.0f/255.0f);


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
glVertex2i(250,512);  //top
glVertex2i(280,371); //right


glEnd();
glFlush();

//4th

glBegin(GL_QUADS);
glColor3f(180.0f/255.0f, 86.0f/255.0f, 39.0f/255.0f);

glVertex2i(280,371); //bottom right
glVertex2i(250,512); //top
glVertex2i(235,430); //upper left
glVertex2i(233,378); //bottom left

glEnd();
glFlush();

//5th

glBegin(GL_QUADS);
glColor3f(254.0f/255.0f, 174.0f/255.0f, 108.0f/255.0f);

glVertex2i(188,315); //bottom left
glVertex2i(226,305); //bottom right
glVertex2i(280,371); //top right
glVertex2i(233,378); //top left


glEnd();
glFlush();

//6th

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
glVertex2i(226,210); //left

glEnd();
glFlush();

//8th

glBegin(GL_QUADS);
glColor3f(180.0f/255.0f, 86.0f/255.0f, 39.0f/255.0f);

glVertex2i(188,315); //top left
glVertex2i(226,305); //top right
glVertex2i(198,280); //bottom right
glVertex2i(173,295); //bottom left


glEnd();
glFlush();

//9th

glBegin(GL_QUADS);
glColor3f(253.0f/255.0f, 136.0f/255.0f, 57.0f/255.0f);

glVertex2i(198,280); //top right
glVertex2i(173,295); //top left
glVertex2i(127,220); //bottom left
glVertex2i(132,170); //bottom right

glEnd();
glFlush();

//10th

glBegin(GL_TRIANGLES);
glColor3f(150.0f/255.0f, 77.0f/255.0f, 34.0f/255.0f);

glVertex2i(132,170); //bottom right
glVertex2i(127,220); //bottom left
glVertex2i(107,190); //left bottom

glEnd();
glFlush();

//11th

glBegin(GL_TRIANGLES);
glColor3f(255.0f/255.0f, 192.0f/255.0f, 138.0f/255.0f);

glVertex2i(226,305); //top right
glVertex2i(198,280); //top left
glVertex2i(226,210); //bottom

glEnd();
glFlush();


//12th

glBegin(GL_QUADS);
glColor3f(255.0f/255.0f, 192.0f/255.0f, 138.0f/255.0f);

glVertex2i(226,210); //bottom right
glVertex2i(198,280); //top right
glVertex2i(132,170); // bottom left
glVertex2i(156,160); //bottom

glEnd();
glFlush();


//13th

glBegin(GL_QUADS);
glColor3f(255.0f/255.0f, 170.0f/255.0f, 56.0f/255.0f);

glVertex2i(233,378); //top
glVertex2i(235,430); //top bottom
glVertex2i(178,344); //bottom top
glVertex2i(188,315); //bottom

glEnd();
glFlush();


//14th

glBegin(GL_TRIANGLES);
glColor3f(255.0f/255.0f, 170.0f/255.0f, 56.0f/255.0f);

glVertex2i(188,315); //bottom
glVertex2i(178,344); //bottom top
glVertex2i(173,295); //bottom left

glEnd();
glFlush();


//15th

glBegin(GL_TRIANGLES);
glColor3f(180.0f/255.0f, 86.0f/255.0f, 39.0f/255.0f);

glVertex2i(235,430);//bottom right
glVertex2i(190,488); //top
glVertex2i(199,374); //bottom left


glEnd();
glFlush();


//16th

glBegin(GL_TRIANGLES);
glColor3f(250.0f/255.0f, 145.0f/255.0f, 84.0f/255.0f);

glVertex2i(241,463);//right
glVertex2i(190,488); //top
glVertex2i(235,430); //bottom


glEnd();
glFlush();




}
int main(int iArgc, char** cppArgv)
{
glutInit(&iArgc, cppArgv); // initialize the toolkit
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode
glutInitWindowSize(640,480); // set window size
glutInitWindowPosition(100, 150); // set window upper left corner position on screen
glutCreateWindow("Wolf Artwork"); // open the screen window (Title: My First Attempt)
// register the callback functions
glutDisplayFunc(myDisplay);
myInit(); // additional initializations as necessary
glutMainLoop(); // go into a endless loop
return 0;
}
