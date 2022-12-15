#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


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
      glVertex2f(-1.0f, -0.7f);
      glVertex2f(1.0f, -0.7f);

      glVertex2f(1.0f, -0.2f);
      glVertex2f(-1.0f, -0.2f);
   glEnd();



    ///------------------------------------------------------------------------------------ Tree section end by mohammad bin ab. jalil sheakh - 700
///-//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///--------------------------------------------------------------------- /// Boat section start by DOSINA DOLON DOLA - 500 ///
                                                                     

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
      glVertex2f(0.45f, -0.4f);
   glEnd();
    //... Block - 3* ...//End--------------


    /// Block - 4 ... //504
   glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
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
      glColor3ub(150, 250, 250);
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
      glColor3ub(150, 250, 250);
      glVertex2f(0.38f, -0.52f);
      glVertex2f(0.41f, -0.52f);

      glVertex2f(0.41f, -0.51f);
      glVertex2f(0.38f, -0.51f);
   glEnd();
    //... Block - 19 ...//End--------------


    /// Block - 20 ... //520
   glBegin(GL_QUADS);
      glColor3ub(150, 250, 250);
      glVertex2f(0.43f, -0.52f);
      glVertex2f(0.45f, -0.52f);

      glVertex2f(0.45f, -0.51f);
      glVertex2f(0.43f, -0.51f);
   glEnd();
    //... Block - 20 ...//End--------------


    /// Block - 21 ... //521
   glBegin(GL_QUADS);
      glColor3ub(60, 70, 180);
      glVertex2f(0.36f, -0.42f);
      glVertex2f(0.38f, -0.42f);

      glVertex2f(0.38f, -0.4f);
      glVertex2f(0.36f, -0.4f);
   glEnd();
    //... Block - 21 ...//End--------------


    /// Block - 22 ... //522
   glBegin(GL_QUADS);
      glColor3ub(60, 70, 180);
      glVertex2f(0.34f, -0.43f);
      glVertex2f(0.36f, -0.43f);

      glVertex2f(0.36f, -0.41f);
      glVertex2f(0.34f, -0.41f);
   glEnd();
    //... Block - 22 ...//End--------------


    /// Block - 23 ... //523
   glBegin(GL_QUADS);
      glColor3ub(250, 250, 150);
      glVertex2f(0.67f, -0.32f);
      glVertex2f(0.69f, -0.32f);

      glVertex2f(0.69f, -0.31f);
      glVertex2f(0.67f, -0.31f);
   glEnd();
    //... Block - 23 ...//End--------------


    /// Block - 24 ... //524
   glBegin(GL_QUADS);
      glColor3ub(250, 250, 150);
      glVertex2f(0.70f, -0.33f);
      glVertex2f(0.71f, -0.33f);

      glVertex2f(0.71f, -0.32f);
      glVertex2f(0.70f, -0.32f);
   glEnd();
    //... Block - 24 ...//End--------------


///----------------------------------------------------------------------------///


    ///-------- Lines Section --------///

/*
    glBegin(GL_LINE);
        glColor3ub(1.0f, 0.0f, 0.0f);
        glVertex2f(0.36f, -0.57f);
*/

///----------------------------------------------------------------------------///


    ///-------- Circles Section --------///

/// RGB color Codes for Circles
/// glColor3ub(200, 40, 90);

/// 200, 40, 90
///--------------------------------------------------------------------- /// Boat section Done by DOSINA DOLON DOLA - 500 ///





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





