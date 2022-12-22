#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

GLfloat airPlanePosition = 0.0f;
GLfloat airPlaneSpeed = 0.012f;

void airPlaneUpdate(int value) { // timer .. er kaj timer ba thread
    // ekta particular time por por function call hobe .. update nam er function call hobe ..

    // timer use kore move korte parbo .. jekono object .. ba translation korte parbo ..

    if(airPlanePosition < -1.8)//
        airPlanePosition = 1.05f;

    airPlanePosition -= airPlaneSpeed;

	glutPostRedisplay();


	glutTimerFunc(100, airPlaneUpdate, 0);
}
void init() { // initialization hoy
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // bg color set
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			airPlaneSpeed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    airPlaneSpeed = 0.0f;
    break;
case 'w':
    airPlaneSpeed += 0.1f;
    break;


glutPostRedisplay();


	}
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
   /// plane start /////////////////////////////////////////////////////////////// Md.Jahid Hassan-200/////////////////////////////////////////////


   ///Plane Main Body upper-201
   glPushMatrix();
   glTranslatef(airPlanePosition,0.0f, 0.0f);
   glBegin(GL_POLYGON);
      glColor3f(1.0f, 0.2f, 0.3f);
      glVertex2f(0.555, 0.865);
      glVertex2f(0.885, 0.865);
      glVertex2f(0.905, 0.885);
      glVertex2f(0.86, 0.91);
      glVertex2f(0.62,0.91);
   glEnd();
   ///
   ///**Plane Main Body lower-202**//
   glBegin(GL_QUADS);
      glColor3f(0, 191, 255);
      glVertex2f(0.615, 0.825);
      glVertex2f(0.855 ,0.825);
      glVertex2f(0.885, 0.865);
      glVertex2f( 0.555, 0.865);
   glEnd();
    ///
    ///**Plane Diver Window-203**///
    glBegin(GL_QUADS);
      glColor3f(240, 255, 255);
      glVertex2f(0.585, 0.875);
      glVertex2f(0.63 ,0.875);
      glVertex2f(0.63, 0.90);
      glVertex2f( 0.62, 0.90);
   glEnd();
   ///
   ///**Plane body line-204
   ///

   ///
   ///**Plane Tail-205**///
    glBegin(GL_QUADS);
      glColor3f(34,139,34);
      glVertex2f(0.78, 0.91);
      glVertex2f(0.861 ,0.91);
      glVertex2f(0.885, 0.95);
      glVertex2f(0.835, 0.95);
   glEnd();
   ///
   ///**Plane 1st wing -206**///
   glBegin(GL_QUADS);
      glColor3f(0.79f,0.79f,0.79f);
      glVertex2f(0.68, 0.81);
      glVertex2f(0.755 ,0.81);
      glVertex2f(0.70, 0.865);
      glVertex2f(0.625, 0.865);
   glEnd();
   ///
   ///
   ///**Plane 2nd wing -207**///
   glBegin(GL_QUADS);
      glColor3f(0.79f,0.79f,0.79f);
      glVertex2f(0.87, 0.825);
      glVertex2f(0.92 ,0.823);
      glVertex2f(0.88, 0.865);
      glVertex2f(0.83, 0.865);
   glEnd();
   glPopMatrix();
   ///
    /// Plane End //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   ///mountain start//////////////Mohammad Sheakh///////////////////////////
    // left mountain
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.3f, 0.6f);
        glVertex2f(-1.0, 0.24);
        glVertex2f(0.3, 0.24);
        glVertex2f(-0.44, 0.8);
    glEnd();

    // right mountain //
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.3f, 0.6f);
        glVertex2f(-0.5, 0.24);
        glVertex2f(0.24, 0.8);
        glVertex2f(1.0, 0.24);
    glEnd();
    ///mountain end////////////////MOhammad Sheakh////////////////////////


    /// Building section start by mohammad bin ab. jalil sheakh - 700
    // building - 1... //701
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-1.0f, 0.24f);
      glVertex2f(-0.8f, 0.24f);

      glVertex2f(-0.8f, 0.4f);
      glVertex2f(-1.0f, 0.4f);
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
      glColor3f(0.6f, 1.0f, 0.6f);

      glVertex2f(-0.36f, 0.46f);
      glVertex2f(-0.32f, 0.46f);

      glVertex2f(-0.32f, 0.5f);
      glVertex2f(-0.36f, 0.5f);

      // window right up
      glColor3f(0.6f, 1.0f, 0.6f);

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


      // window 1
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(0.04f, 0.64f);
      glVertex2f(0.08f, 0.64f);

      glVertex2f(0.08f, 0.68f);
      glVertex2f(0.04f, 0.68f);

      // window 2
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(0.04f, 0.54f);
      glVertex2f(0.08f, 0.54f);

      glVertex2f(0.08f, 0.58f);
      glVertex2f(0.04f, 0.58f);

      // window 3
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(0.04f, 0.44f);
      glVertex2f(0.08f, 0.44f);

      glVertex2f(0.08f, 0.48f);
      glVertex2f(0.04f, 0.48f);

      // window 4
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(0.04f, 0.34f);
      glVertex2f(0.08f, 0.34f);

      glVertex2f(0.08f, 0.38f);
      glVertex2f(0.04f, 0.38f);

   glEnd();

   // building - 7... //707
   glBegin(GL_TRIANGLES);



glColor3f(0.2f, 0.3f, 0.6f);
      glVertex2f(0.12f, 0.24f); //1
      glVertex2f(0.34f, 0.24f); //2
      glVertex2f(0.12f, 0.68f); //4
 glColor3f(1.0f, 1.0f, 0.6f);

      glVertex2f(0.34f, 0.24f); //2
      glVertex2f(0.34f, 0.68f); //3
      glVertex2f(0.12f, 0.68f); //4

    glEnd();

      glBegin(GL_QUADS);
      // window 1
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(0.16f, 0.56f);
      glVertex2f(0.288f, 0.56f);

      glVertex2f(0.288f, 0.62f);
      glVertex2f(0.16f, 0.62f);


      // window 2
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(0.16f, 0.46f);
      glVertex2f(0.288f, 0.46f);

      glVertex2f(0.288f, 0.52f);
      glVertex2f(0.16f, 0.52f);


      // window 3
      glColor3f(0.7f, 0.2f, 1.0f);

      glVertex2f(0.16f, 0.36f);
      glVertex2f(0.288f, 0.36f);

      glVertex2f(0.288f, 0.42f);
      glVertex2f(0.16f, 0.42f);

   glEnd();


// building - 8... //708
   glBegin(GL_QUADS);
      glColor3f(0.2f, 0.2f, 0.2f);

      glVertex2f(0.34f, 0.24f);
      glVertex2f(0.52f, 0.24f);

      glVertex2f(0.52f, 0.6f);
      glVertex2f(0.34f, 0.6f);

      // varanda -1
      glColor3f(0.5f, 0.5f, 0.2f);

      glVertex2f(0.44f, 0.5f);
      glVertex2f(0.56f, 0.5f);

      glVertex2f(0.52f, 0.54f);
      glVertex2f(0.4f, 0.54f);

   glEnd();

   /// Building section end by mohammad bin ab. jalil sheakh - 700


    /// Tree section start by mohammad bin ab. jalil sheakh - 700
   // Tree 9... //709
   glBegin(GL_TRIANGLES);
       glColor3f(1.0f, 1.0f, 0.6f);

      glVertex2f(0.72f, 0.24f); //1
      glVertex2f(0.73f, 0.24f); //2
      glVertex2f(0.73f, 0.6f); //3
      ///////////////////////////
      glVertex2f(0.73f, 0.6f); //left leaf
      glVertex2f(0.8f, 0.56f);
      glVertex2f(0.8f, 0.64f);
      ///
      glVertex2f(0.73f, 0.6f); //left up leaf
      glVertex2f(0.78f, 0.66f);
      glVertex2f(0.74f, 0.68f);

      ///
      glVertex2f(0.73f, 0.6f); //left up leaf
      glVertex2f(0.73f, 0.69f);
      glVertex2f(0.68f, 0.68f);

      ///
      glVertex2f(0.73f, 0.6f); //left up leaf
      glVertex2f(0.68f, 0.66f);
      glVertex2f(0.64f, 0.56f);

    glEnd();

    /// for river // 710

    glBegin(GL_QUADS);
      glColor3f(0.0f, 1.0f, 1.0f);
      glVertex2f(-1.0f, -0.66f);
      glVertex2f(1.0f, -0.66f);

      glVertex2f(1.0f, -0.2f);
      glVertex2f(-1.0f, -0.2f);
   glEnd();



    ///------------------------------------------------------------------------------------ Tree section end by mohammad bin ab. jalil sheakh - 700
///-//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Dosina Dolon
///---------Boat Start---------///
///---------DOSINA DOLON DOLA---------///


            /// Boat section start by DOSINA DOLON DOLA - 500 ///

///----------------------------------------------------------------------------///


    ///-------- Quad Blocks Section --------///


    /// Block - 1 ... //501
   glBegin(GL_QUADS);
      glColor3ub(78, 75, 75);
      glVertex2f(0.36f, -0.57f);
      glVertex2f(0.77f, -0.57f);

      glVertex2f(0.77f, -0.55f);
      glVertex2f(0.36f, -0.55f);
   glEnd();
    //... Block - 1 ...//End--------------


    /// Block - 2 ... //502
   glBegin(GL_QUADS);
      glColor3ub(138, 3, 42);
      glVertex2f(0.36f, -0.55f);
      glVertex2f(0.77f, -0.55f);

      glVertex2f(0.77f, -0.53f);
      glVertex2f(0.36f, -0.53f);
   glEnd();
    //... Block - 2 ...//End--------------


    /// Block - 3 //503
   glBegin(GL_QUADS);
      glColor3ub(250, 250, 150);
      glVertex2f(0.45f, -0.53f);
      glVertex2f(0.72f, -0.53f);

      glVertex2f(0.72f, -0.45f);
      glVertex2f(0.45f, -0.45f);
   glEnd();
    //... Block - 3 ...//End--------------


/// Block - 3* //503
   glBegin(GL_QUADS);
      glColor3ub(200, 40, 90);
      glVertex2f(0.45f, -0.5f);
      glVertex2f(0.72f, -0.5f);

      glVertex2f(0.72f, -0.49f);
      glVertex2f(0.45f, -0.49f);
   glEnd();
    //... Block - 3* ...//End--------------


    /// Block - 4 ... //504
   glBegin(GL_QUADS);
      glColor3ub(60, 70, 180);
      glVertex2f(0.51f, -0.53f);
      glVertex2f(0.54f, -0.53f);

      glVertex2f(0.54f, -0.47f);
      glVertex2f(0.51f, -0.47f);
   glEnd();
    //... Block - 4 ...//End--------------


   /// Block - 5 ... //505
   glBegin(GL_QUADS);
      glColor3ub(138, 3, 42);
      glVertex2f(0.58f, -0.53f);
      glVertex2f(0.77f, -0.53f);

      glVertex2f(0.82f, -0.49f);
      glVertex2f(0.63f, -0.49f);
   glEnd();
    //... Block - 5 ...//End--------------


    /// Block - 6 ... //506
   glBegin(GL_QUADS);
      glColor3ub(181, 57, 57);
      glVertex2f(0.43f, -0.45f);
      glVertex2f(0.74f, -0.45f);

      glVertex2f(0.74f, -0.43f);
      glVertex2f(0.43f, -0.43f);
   glEnd();
    //... Block - 6 ...//End--------------


    /// Block - 7 ... //507
   glBegin(GL_QUADS);
      glColor3ub(250, 250, 150);
      glVertex2f(0.52f, -0.43f);
      glVertex2f(0.56f, -0.43f);

      glVertex2f(0.56f, -0.38f);
      glVertex2f(0.52f, -0.38f);
   glEnd();
   //... Block - 7 ...//End--------------


    /// Block - 8 ... //508
   glBegin(GL_QUADS);
      glColor3ub(250, 250, 150);
      glVertex2f(0.56f, -0.43f);
      glVertex2f(0.71f, -0.43f);

      glVertex2f(0.71f, -0.36f);
      glVertex2f(0.56f, -0.36f);
   glEnd();
    //... Block - 8 ...//End--------------


    /// Block - 9 ... //509
   glBegin(GL_QUADS);
      glColor3ub(60, 70, 180);
      glVertex2f(0.64f, -0.43f);
      glVertex2f(0.67f, -0.43f);

      glVertex2f(0.67f, -0.37f);
      glVertex2f(0.64f, -0.37f);
   glEnd();
    //... Block - 9 ...//End--------------


    /// Block - 10 ... //510
   glBegin(GL_QUADS);
      glColor3ub(200, 40, 90);
      glVertex2f(0.65f, -0.40f);
      glVertex2f(0.66f, -0.40f);

      glVertex2f(0.66f, -0.38f);
      glVertex2f(0.65f, -0.38f);
   glEnd();
    //... Block - 10 ...//End--------------


    /// Block - 11 ... //511
   glBegin(GL_QUADS);
      glColor3ub(200, 40, 90);
      glVertex2f(0.59f, -0.40f);
      glVertex2f(0.63f, -0.40f);

      glVertex2f(0.63f, -0.37f);
      glVertex2f(0.59f, -0.37f);
   glEnd();
    //... Block - 11 ...//End--------------


    /// Block - 12 ... //512
   glBegin(GL_QUADS);
      glColor3ub(200, 40, 90);
      glVertex2f(0.68f, -0.40f);
      glVertex2f(0.70f, -0.40f);

      glVertex2f(0.70f, -0.37f);
      glVertex2f(0.68f, -0.37f);
   glEnd();
    //... Block - 12 ...//End--------------


    /// Block - 13 ... //513
   glBegin(GL_QUADS);
      glColor3ub(181, 57, 57);
      glVertex2f(0.55f, -0.36f);
      glVertex2f(0.72f, -0.36f);

      glVertex2f(0.72f, -0.35f);
      glVertex2f(0.55f, -0.35f);
   glEnd();
    //... Block - 13 ...//End--------------


    /// Block - 14 ... //514
   glBegin(GL_QUADS);
      glColor3ub(138, 3, 42);
      glVertex2f(0.55f, -0.35f);
      glVertex2f(0.73f, -0.35f);

      glVertex2f(0.74f, -0.34f);
      glVertex2f(0.55f, -0.34f);
   glEnd();
    //... Block - 14 ...//End--------------


    /// Block - 15 ... //515
   glBegin(GL_QUADS);
      glColor3ub(181, 57, 57);
      glVertex2f(0.50f, -0.38f);
      glVertex2f(0.58f, -0.38f);

      glVertex2f(0.58f, -0.37f);
      glVertex2f(0.50f, -0.37f);
   glEnd();
    //... Block - 15 ...//End--------------


    /// Block - 16 ... //516
   glBegin(GL_QUADS);
      glColor3ub(60, 160, 160);
      glVertex2f(0.38f, -0.53f);
      glVertex2f(0.41f, -0.53f);

      glVertex2f(0.41f, -0.52f);
      glVertex2f(0.38f, -0.52f);
   glEnd();
    //... Block - 16 ...//End--------------


    /// Block - 17 ... //517
   glBegin(GL_QUADS);
      glColor3ub(60, 160, 160);
      glVertex2f(0.41f, -0.53f);
      glVertex2f(0.43f, -0.53f);

      glVertex2f(0.43f, -0.52f);
      glVertex2f(0.41f, -0.52f);
   glEnd();
    //... Block - 17 ...//End--------------


    /// Block - 18 ... //518
   glBegin(GL_QUADS);
      glColor3ub(60, 160, 160);
      glVertex2f(0.43f, -0.53f);
      glVertex2f(0.45f, -0.53f);

      glVertex2f(0.45f, -0.52f);
      glVertex2f(0.43f, -0.52f);
   glEnd();
    //... Block - 18 ...//End--------------


    /// Block - 19 ... //519
   glBegin(GL_QUADS);
      glColor3ub(60, 160, 160);
      glVertex2f(0.38f, -0.52f);
      glVertex2f(0.41f, -0.52f);

      glVertex2f(0.41f, -0.51f);
      glVertex2f(0.38f, -0.51f);
   glEnd();
    //... Block - 19 ...//End--------------


    /// Block - 20 ... //520
   glBegin(GL_QUADS);
      glColor3ub(60, 160, 160);
      glVertex2f(0.43f, -0.52f);
      glVertex2f(0.45f, -0.52f);

      glVertex2f(0.45f, -0.51f);
      glVertex2f(0.43f, -0.51f);
   glEnd();
    //... Block - 20 ...//End--------------


    /// Block - 21 ... //521 //Flag - 1
   glBegin(GL_QUADS);
      glColor3ub(60, 70, 180);
      glVertex2f(0.36f, -0.42f);
      glVertex2f(0.38f, -0.42f);

      glVertex2f(0.38f, -0.4f);
      glVertex2f(0.36f, -0.4f);
   glEnd();
    //... Block - 21 ...//End--------------


    /// Block - 22 ... //522 //Flag - 2
   glBegin(GL_QUADS);
      glColor3ub(60, 70, 180);
      glVertex2f(0.34f, -0.43f);
      glVertex2f(0.36f, -0.43f);

      glVertex2f(0.36f, -0.41f);
      glVertex2f(0.34f, -0.41f);
   glEnd();
    //... Block - 22 ...//End--------------


    /// Block - 23 ... //523 //Light - Back
   glBegin(GL_QUADS);
      glColor3ub(255, 90, 50);
      glVertex2f(0.67f, -0.32f);
      glVertex2f(0.69f, -0.32f);

      glVertex2f(0.69f, -0.31f);
      glVertex2f(0.67f, -0.31f);
   glEnd();
    //... Block - 23 ...//End--------------


    /// Block - 24 ... //524 //Light - Front
   glBegin(GL_QUADS);
      glColor3ub(255, 90, 50);
      glVertex2f(0.70f, -0.33f);
      glVertex2f(0.71f, -0.33f);

      glVertex2f(0.71f, -0.32f);
      glVertex2f(0.70f, -0.32f);
   glEnd();
    //... Block - 24 ...//End--------------


///-----------------Stand Blocks-----------------///

    /// Block - 25 ... //525 //Flag Stand
   glBegin(GL_QUADS);
      glColor3ub(78, 75, 75);
      glVertex2f(0.38f, -0.53f);
      glVertex2f(0.39f, -0.53f);

      glVertex2f(0.39f, -0.38f);
      glVertex2f(0.38f, -0.38f);
   glEnd();
    //... Block - 25 ...//End--------------


    /// Block - 26 ... //526 //Light Stand - Back
   glBegin(GL_QUADS);
      glColor3ub(78, 75, 75);
      glVertex2f(0.66f, -0.34f);
      glVertex2f(0.67f, -0.34f);

      glVertex2f(0.68f, -0.32f);
      glVertex2f(0.67f, -0.32f);
   glEnd();
    //... Block - 26 ...//End--------------


    /// Block - 27 ... //527 //Light Stand - Front
   glBegin(GL_QUADS);
      glColor3ub(78, 75, 75);
      glVertex2f(0.70f, -0.34f);
      glVertex2f(0.70f, -0.34f);

      glVertex2f(0.70f, -0.33f);
      glVertex2f(0.70f, -0.33f);
   glEnd();
    //... Block - 26 ...//End--------------


///----------------------------------------------------------------------------///


    ///-------- Lines Section --------///

/*
    glBegin(GL_LINE);
        glColor3ub(0, 0, 0);		//...Black Color
        glVertex2i(0.36f, -0.57f);
*/


/// ... Sample Code ... ///

/*
	void myDisplay(void)
	{
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3ub (128, 128, 128);
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glVertex2i(100, 50);
	glVertex2i(110, 130);
	glVertex2i(250, 130);
	glEnd();
	glFlush ();
	}
*/


///----------------------------------------------------------------------------///


    ///-------- Circles Section --------///

/// RGB color Codes for Circles
/// glColor3ub(255, 90, 50);		//...Orange Color






            /// Boat section END by DOSINA DOLON DOLA - 500 ///

///----------------------------------------------------------------------------///


/// ----------------------- Train Section Started by Mohammad Bin Ab. Jalil Sheakh






/// ----------- Tree Section of train Start By Mohammad...
float x,y,i; /// ////////////////////////////////////////// For Tree circle variable
   /// left tree ----------1
   glPushMatrix();
   glTranslatef(-0.97f,-0.80f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.036*sin(i);
y=0.036*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------2
   glPushMatrix();
   glTranslatef(-0.94f,-0.8f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.046*sin(i);
y=0.046*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------3
   glPushMatrix();
   glTranslatef(-0.88f,-0.79f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.021*sin(i);
y=0.021*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------4
   glPushMatrix();
   glTranslatef(-0.81f,-0.80f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0223*sin(i);
y=0.0223*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------5
   glPushMatrix();
   glTranslatef(-0.75f,-0.81f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.041*sin(i);
y=0.041*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


/// left tree ----------6
   glPushMatrix();
   glTranslatef(-0.67f,-0.801f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.066*sin(i);
y=0.066*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


/// left tree ----------7
   glPushMatrix();
   glTranslatef(-0.57f,-0.867f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0102*sin(i);
y=0.0102*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


/// left tree ----------8
   glPushMatrix();
   glTranslatef(-0.44f,-0.835f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.091*sin(i);
y=0.091*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


/// left tree ----------9
   glPushMatrix();
   glTranslatef(-0.34f,-0.8099f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.049*sin(i);
y=0.049*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------10
   glPushMatrix();
   glTranslatef(-0.27f,-0.81f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.044*sin(i);
y=0.044*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


/// left tree ----------11
   glPushMatrix();
   glTranslatef(-0.199f,-0.830f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0464*sin(i);
y=0.0464*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------12
   glPushMatrix();
   glTranslatef(-0.199f,-0.830f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0464*sin(i);
y=0.0464*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------13
   glPushMatrix();
   glTranslatef(-0.112f,-0.815f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0685*sin(i);
y=0.0685*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


/// left tree ----------14
   glPushMatrix();
   glTranslatef(-0.0355f,-0.824f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0486*sin(i);
y=0.0486*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------15
   glPushMatrix();
   glTranslatef(0.0532f,-0.8111f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.05507*sin(i);
y=0.05507*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------16
   glPushMatrix();
   glTranslatef(0.135f,-0.8231f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0378*sin(i);
y=0.0378*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------17
   glPushMatrix();
   glTranslatef(0.214f,-0.8088f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0587*sin(i);
y=0.0587*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------18
   glPushMatrix();
   glTranslatef(0.29582f,-0.8111f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0583*sin(i);
y=0.0583*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------19
   glPushMatrix();
   glTranslatef(0.3893f,-0.82144f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.085*sin(i);
y=0.0855*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------20
   glPushMatrix();
   glTranslatef(0.46505f,-0.80907f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0416*sin(i);
y=0.0416*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------21
   glPushMatrix();
   glTranslatef(0.5469f,-0.8507f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.071720*sin(i);
y=0.071720*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------22
   glPushMatrix();
   glTranslatef(0.6572f,-0.811182f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.08085*sin(i);
y=0.08085*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


/// left tree ----------23
   glPushMatrix();
   glTranslatef(0.769f,-0.810624f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0504*sin(i);
y=0.0504*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------24
   glPushMatrix();
   glTranslatef(0.854f,-0.8111f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.07750*sin(i);
y=0.07750*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

/// left tree ----------25
   glPushMatrix();
   glTranslatef(0.968f,-0.819f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,230,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.05023*sin(i);
y=0.05023*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();



/// ----------- Tree Section of train End By Mohammad...
// Box for hide tree extra design
    glBegin(GL_QUADS);
    glColor3ub(18, 15, 15);
      glVertex2f(-1.0f, -1.0f);
      glVertex2f(1.0f, -1.0f);

      glVertex2f(1.0f, -0.80f);  /// ei value change korte hobe
      glVertex2f(-1.0f, -0.80f);  // age 85 chilo
    glEnd();


    // lower rail line
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-1.0f, -0.96f);
      glVertex2f(1.0f, -0.96f);

      glVertex2f(1.0f, -0.93f);
      glVertex2f(-1.0f, -0.93f);

    glEnd();

    // upper rail line
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-1.0f, -0.87f);
      glVertex2f(1.0f, -0.87f);

      glVertex2f(1.0f, -0.85f); // upper line ......... er upor tree hobe
      glVertex2f(-1.0f, -0.85f);

    glEnd();




    ///------------ rail line design left 1
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.92f, -0.98f);
      glVertex2f(-0.88f, -0.98f);

      glVertex2f(-0.88f, -0.82f); // upper line ......... er upor tree hobe
      glVertex2f(-0.92f, -0.82f);
    glEnd();

    ///------------ rail line design left 2
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.82f, -0.98f);
      glVertex2f(-0.79f, -0.98f);

      glVertex2f(-0.79f, -0.82f);
      glVertex2f(-0.82f, -0.82f);
    glEnd();

    ///------------ rail line design left 3
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.72f, -0.98f);
      glVertex2f(-0.69f, -0.98f);

      glVertex2f(-0.69f, -0.82f);
      glVertex2f(-0.72f, -0.82f);
    glEnd();

    ///------------ rail line design left 4
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.62f, -0.98f);
      glVertex2f(-0.59f, -0.98f);

      glVertex2f(-0.59f, -0.82f);
      glVertex2f(-0.62f, -0.82f);
    glEnd();

    ///------------ rail line design left 5
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.52f, -0.98f);
      glVertex2f(-0.49f, -0.98f);

      glVertex2f(-0.49f, -0.82f);
      glVertex2f(-0.52f, -0.82f);
    glEnd();

    ///------------ rail line design left 5
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.42f, -0.98f);
      glVertex2f(-0.39f, -0.98f);

      glVertex2f(-0.39f, -0.82f);
      glVertex2f(-0.42f, -0.82f);
    glEnd();

    ///------------ rail line design left 6
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.32f, -0.98f);
      glVertex2f(-0.29f, -0.98f);

      glVertex2f(-0.29f, -0.82f);
      glVertex2f(-0.32f, -0.82f);
    glEnd();

    ///------------ rail line design left 6
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.22f, -0.98f);
      glVertex2f(-0.19f, -0.98f);

      glVertex2f(-0.19f, -0.82f);
      glVertex2f(-0.22f, -0.82f);
    glEnd();

    ///------------ rail line design left 7
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.12f, -0.98f);
      glVertex2f(-0.09f, -0.98f);

      glVertex2f(-0.09f, -0.82f);
      glVertex2f(-0.12f, -0.82f);
    glEnd();

    ///------------ rail line design middle 8
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(-0.02f, -0.98f);
      glVertex2f(0.0f, -0.98f);

      glVertex2f(0.0f, -0.82f);
      glVertex2f(-0.02f, -0.82f);
    glEnd();

    ///------------ rail line design right 9
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.12f, -0.98f);
      glVertex2f(0.09f, -0.98f);

      glVertex2f(0.09f, -0.82f);
      glVertex2f(0.12f, -0.82f);
    glEnd();


    ///------------ rail line design right 10
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.22f, -0.98f);
      glVertex2f(0.19f, -0.98f);

      glVertex2f(0.19f, -0.82f);
      glVertex2f(0.22f, -0.82f);
    glEnd();

    ///------------ rail line design right 11
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.32f, -0.98f);
      glVertex2f(0.29f, -0.98f);

      glVertex2f(0.29f, -0.82f);
      glVertex2f(0.32f, -0.82f);
    glEnd();

    ///------------ rail line design right 12
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.42f, -0.98f);
      glVertex2f(0.39f, -0.98f);

      glVertex2f(0.39f, -0.82f);
      glVertex2f(0.42f, -0.82f);
    glEnd();

    ///------------ rail line design right 13
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.52f, -0.98f);
      glVertex2f(0.49f, -0.98f);

      glVertex2f(0.49f, -0.82f);
      glVertex2f(0.52f, -0.82f);
    glEnd();

    ///------------ rail line design right 14
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.62f, -0.98f);
      glVertex2f(0.59f, -0.98f);

      glVertex2f(0.59f, -0.82f);
      glVertex2f(0.62f, -0.82f);
    glEnd();

    ///------------ rail line design right 15
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.72f, -0.98f);
      glVertex2f(0.69f, -0.98f);

      glVertex2f(0.69f, -0.82f);
      glVertex2f(0.72f, -0.82f);
    glEnd();

    ///------------ rail line design right 16
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.82f, -0.98f);
      glVertex2f(0.79f, -0.98f);

      glVertex2f(0.79f, -0.82f);
      glVertex2f(0.82f, -0.82f);
    glEnd();

    ///------------ rail line design right 17
    glBegin(GL_QUADS);
    glColor3ub(78, 75, 75);
      glVertex2f(0.92f, -0.98f);
      glVertex2f(0.89f, -0.98f);

      glVertex2f(0.89f, -0.82f);
      glVertex2f(0.92f, -0.82f);
    glEnd();


/// ------------------------------------- Train Section End -------------


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
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, airPlaneUpdate, 0); // update nam er function 1000 ml sec por por call hobe ..
   glutMainLoop();
   return 0;
}




