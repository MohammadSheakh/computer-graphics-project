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
      glVertex2f(-0.9f, 0.24f);
      glVertex2f(-0.8f, 0.24f);

      glVertex2f(-0.8f, 0.4f);
      glVertex2f(-0.9f, 0.4f);
   glEnd();

    // building - 2... //702
   glBegin(GL_QUADS);
   // upper portion
      glColor3f(0.2f, 0.2f, 0.4f);
      glVertex2f(-0.760f, 0.54f);
      glVertex2f(-0.63f, 0.54f);

      glVertex2f(-0.63f, 0.620f);
      glVertex2f(-0.760f, 0.620f);
      //// main building block
      glColor3f(1.0f, 0.8f, 0.4f);

      glVertex2f(-0.8f, 0.24f);
      glVertex2f(-0.6f, 0.24f);

      glVertex2f(-0.6f, 0.55f);
      glVertex2f(-0.8f, 0.55f);
      //-----------------------
      // window left up
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.76f, 0.46f);
      glVertex2f(-0.72f, 0.46f);

      glVertex2f(-0.72f, 0.5f);
      glVertex2f(-0.76f, 0.5f);

      // window right up
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.68f, 0.46f);
      glVertex2f(-0.64f, 0.46f);

      glVertex2f(-0.64f, 0.5f);
      glVertex2f(-0.68f, 0.5f);
//-----------------------
      // window right down
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.68f, 0.38f);
      glVertex2f(-0.64f, 0.38f);

      glVertex2f(-0.64f, 0.42f);
      glVertex2f(-0.68f, 0.42f);

      // window left down
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.76f, 0.38f);
      glVertex2f(-0.72f, 0.38f);

      glVertex2f(-0.72f, 0.42f);
      glVertex2f(-0.76f, 0.42f);
      //-----------------------

// window left bottom
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.76f, 0.30f);
      glVertex2f(-0.72f, 0.30f);

      glVertex2f(-0.72f, 0.34f);
      glVertex2f(-0.76f, 0.34f);


      // window right bottom
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.68f, 0.30f);
      glVertex2f(-0.64f, 0.30f);

      glVertex2f(-0.64f, 0.34f);
      glVertex2f(-0.68f, 0.34f);
   glEnd();





   // building - 3... //703 //--------------
   glBegin(GL_QUADS);
      glColor3f(0.2f, 0.2f, 0.2f);

      glVertex2f(-0.6f, 0.24f);
      glVertex2f(-0.4f, 0.24f);

      glVertex2f(-0.4f, 0.480f);
      glVertex2f(-0.6f, 0.480f);

          // window right down
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.48f, 0.38f);
      glVertex2f(-0.44f, 0.38f);

      glVertex2f(-0.44f, 0.42f);
      glVertex2f(-0.48f, 0.42f);

      // window left down
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.56f, 0.38f);
      glVertex2f(-0.52f, 0.38f);

      glVertex2f(-0.52f, 0.42f);
      glVertex2f(-0.56f, 0.42f);
      //-----------------------
        // window left bottom
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.56f, 0.30f);
      glVertex2f(-0.52f, 0.30f);

      glVertex2f(-0.52f, 0.34f);
      glVertex2f(-0.56f, 0.34f);


      // window right bottom
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.48f, 0.30f);
      glVertex2f(-0.44f, 0.30f);

      glVertex2f(-0.44f, 0.34f);
      glVertex2f(-0.48f, 0.34f);
   glEnd();

   // building - 4... //704--------------------
   glBegin(GL_QUADS);
      glColor3f(0.3f, 0.8f, 0.8f);

      glVertex2f(-0.4f, 0.24f);
      glVertex2f(-0.2f, 0.24f);

      glVertex2f(-0.2f, 0.6f);
      glVertex2f(-0.4f, 0.6f);

      // window left up
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.36f, 0.46f);
      glVertex2f(-0.32f, 0.46f);

      glVertex2f(-0.32f, 0.5f);
      glVertex2f(-0.36f, 0.5f);

      // window right up
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.28f, 0.46f);
      glVertex2f(-0.24f, 0.46f);

      glVertex2f(-0.24f, 0.5f);
      glVertex2f(-0.28f, 0.5f);

          // window right down
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(-0.28f, 0.38f);
      glVertex2f(-0.24f, 0.38f);

      glVertex2f(-0.24f, 0.42f);
      glVertex2f(-0.28f, 0.42f);

      // window left down
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(-0.36f, 0.38f);
      glVertex2f(-0.32f, 0.38f);

      glVertex2f(-0.32f, 0.42f);
      glVertex2f(-0.36f, 0.42f);
      //-----------------------
        // window left bottom
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(-0.36f, 0.30f);
      glVertex2f(-0.32f, 0.30f);

      glVertex2f(-0.32f, 0.34f);
      glVertex2f(-0.36f, 0.34f);


      // window right bottom
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(-0.28f, 0.30f);
      glVertex2f(-0.24f, 0.30f);

      glVertex2f(-0.24f, 0.34f);
      glVertex2f(-0.28f, 0.34f);

   glEnd();

   // building - 5... //705 ---------------
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.7f, 0.2f);

      glVertex2f(-0.2f, 0.24f);
      glVertex2f(0.0f, 0.24f);

      glVertex2f(0.0f, 0.55f);
      glVertex2f(-0.2f, 0.55f);

      // window left up
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.16f, 0.46f);
      glVertex2f(-0.12f, 0.46f);

      glVertex2f(-0.12f, 0.5f);
      glVertex2f(-0.16f, 0.5f);

      // window right up
      glColor3f(0.0f, 0.8f, 0.4f);

      glVertex2f(-0.08f, 0.46f);
      glVertex2f(-0.04f, 0.46f);

      glVertex2f(-0.04f, 0.5f);
      glVertex2f(-0.08f, 0.5f);

                // window right down
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(-0.08f, 0.38f);
      glVertex2f(-0.04f, 0.38f);

      glVertex2f(-0.04f, 0.42f);
      glVertex2f(-0.08f, 0.42f);

      // window left down
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(-0.16f, 0.38f);
      glVertex2f(-0.12f, 0.38f);

      glVertex2f(-0.12f, 0.42f);
      glVertex2f(-0.16f, 0.42f);
      //-----------------------
        // window left bottom
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(-0.16f, 0.30f);
      glVertex2f(-0.12f, 0.30f);

      glVertex2f(-0.12f, 0.34f);
      glVertex2f(-0.16f, 0.34f);


      // window right bottom
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(-0.08f, 0.30f);
      glVertex2f(-0.04f, 0.30f);

      glVertex2f(-0.04f, 0.34f);
      glVertex2f(-0.08f, 0.34f);

   glEnd();

   // building - 6... //706
   glBegin(GL_QUADS);
      glColor3f(0.4f, 0.8f, 0.1f);

      glVertex2f(0.0f, 0.24f);
      glVertex2f(0.12f, 0.24f);

      glVertex2f(0.12f, 0.72f);
      glVertex2f(0.0f, 0.72f);

   glEnd();

   // building - 7... //707
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.3f, 0.6f);

      glVertex2f(0.12f, 0.24f);
      glVertex2f(0.34f, 0.24f);

      glVertex2f(0.34f, 0.68f);
      glVertex2f(0.12f, 0.68f);

   glEnd();
    glBegin(GL_LINES);
      glColor3f(0.2f, 0.2f, 0.2f);


      glVertex2f(0.34f, 0.24f);


      glVertex2f(0.12f, 0.68f);

   glEnd();
// building - 8... //708
   glBegin(GL_QUADS);
      glColor3f(0.2f, 0.2f, 0.2f);

      glVertex2f(0.34f, 0.24f);
      glVertex2f(0.52f, 0.24f);

      glVertex2f(0.52f, 0.6f);
      glVertex2f(0.34f, 0.6f);

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
