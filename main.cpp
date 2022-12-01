#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) { // timer .. er kaj timer ba thread
    // ekta particular time por por function call hobe .. update nam er function call hobe ..

    // timer use kore move korte parbo .. jekono object .. ba translation korte parbo ..

    if(position > 1.0)
        position = -1.2f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() { // initialization hoy
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // bg color set
}






void display() { // ja draw korbo .. ei function er moddhe korbo
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   // Divider... //1
   glBegin(GL_LINES);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-1.0f, 0.0f);
      glVertex2f( 1.0f, 0.0f);

      glVertex2f( 0.0f,  -1.0f);
      glVertex2f( 0.0f,  1.0f);
   glEnd();


    /// Building section start by mohammad bin ab. jalil sheakh - 700
    // building - 1... //701
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.9f, 0.25f);
      glVertex2f(-0.8f, 0.25f);

      glVertex2f(-0.8f, 0.4f);
      glVertex2f(-0.9f, 0.4f);
   glEnd();

    // building - 2... //702
   glBegin(GL_QUADS);
      glColor3f(0.2f, 0.2f, 0.4f);
      glVertex2f(-0.760f, 0.55f);
      glVertex2f(-0.63f, 0.55f);

      glVertex2f(-0.63f, 0.620f);
      glVertex2f(-0.760f, 0.620f);
      ////
      glColor3f(1.0f, 0.2f, 0.4f);
      glVertex2f(-0.8f, 0.25f);
      glVertex2f(-0.6f, 0.25f);

      glVertex2f(-0.6f, 0.55f);
      glVertex2f(-0.8f, 0.55f);

   glEnd();












   glFlush();
}



int main(int argc, char** argv) { // program ekhan thekei start hoy
   glutInit(&argc, argv);
   //glutInitWindowSize(320, 320);
   glutInitWindowSize(1240, 840);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();

   glutTimerFunc(1000, update, 0); // update nam er function 1000 ml sec por por call hobe ..
   glutMainLoop();
   return 0;
}
