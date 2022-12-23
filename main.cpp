#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI          3.141516


float airPlanePosition = 0.0f;
GLfloat airPlaneSpeed = 0.012f;

GLint rain = 1;
float xrain = 10.0f;
float yrain = 10.0f;
bool rain1 = false;
bool rain2 = false;

float sun_move = 0.0f;
float moon_move = 0.0f;
bool dayStart1 = false;
bool nightStart2 = false;
bool start3 = false;


GLfloat mountainColor[3] = {0.0f,0.0f,90.0f};//"1.0f, 0.3f, 0.6f";
GLfloat skyColor1[3] = {0.0752f, 0.839f, 0.940f};
GLfloat skyColor2[3] = {0.279f, 0.854f, 0.930f};
GLfloat skyColor3[3] = {0.534f, 0.901f, 0.890f};
GLfloat skyColor4[3] = {0.754f, 0.901f, 0.920f};
//GLfloat skyColor5[3] = {0.136f, 0.236f, 0.019f};
//GLfloat skyColor6[3] = {0.136f, 0.236f, 0.019f};
//GLfloat skyColor7[3] = {0.136f, 0.236f, 0.019f};

GLfloat riverColor[3] = {0.0f,0.0f,90.0f};
///---------------------------------------------------------------------Rain-Section---------////
///Rain Body Design///-5100


void rainFunction(){
    glPushMatrix();

    glTranslatef( xrain,yrain,0.0f);

    glBegin(GL_LINES);

    glVertex2f(-.85,1.9);glVertex2f(-.8,1.8);
    glVertex2f(-.55,1.9);glVertex2f(-.5,1.8);
    glVertex2f(-.25,1.9);glVertex2f(-.2,1.8);
            glVertex2f(.05,1.9);glVertex2f(.1,1.8);
            glVertex2f(.35,1.9);glVertex2f(.4,1.8);
            glVertex2f(.65,1.9);glVertex2f(.7,1.8);
            glVertex2f(.95,1.9);glVertex2f(1.0,1.8);

     glVertex2f(-1.0,1.6);glVertex2f(-.95,1.5);
    glVertex2f(-.7,1.6);glVertex2f(-.65,1.5);
    glVertex2f(-.4,1.6);glVertex2f(-.35,1.5);
    glVertex2f(-.1,1.6);glVertex2f(-.05,1.5);
            glVertex2f(.2,1.6);glVertex2f(.25,1.5);
            glVertex2f(.5,1.6);glVertex2f(.55,1.5);
            glVertex2f(.8,1.6);glVertex2f(.85,1.5);


    glVertex2f(-.85,1.3);glVertex2f(-.8,1.2);
    glVertex2f(-.55,1.3);glVertex2f(-.5,1.2);
    glVertex2f(-.25,1.3);glVertex2f(-.2,1.2);
             glVertex2f(.05,1.3);glVertex2f(.1,1.2);
            glVertex2f(.35,1.3);glVertex2f(.4,1.2);
            glVertex2f(.65,1.3);glVertex2f(.7,1.2);
            glVertex2f(.95,1.3);glVertex2f(1.0,1.2);

    glVertex2f(-1.0,1.0);glVertex2f(-.95,.9);
    glVertex2f(-.7,1.0);glVertex2f(-.65,0.9);
    glVertex2f(-.4,1.0);glVertex2f(-.35,0.9);
    glVertex2f(-.1,1.0);glVertex2f(-.05,0.9);
                 glVertex2f(.2,1.0);glVertex2f(.25,.9);
                 glVertex2f(.5,1.0);glVertex2f(.55,0.9);
                 glVertex2f(.8,1.0);glVertex2f(.85,0.9);



    glVertex2f(-.85,.7);glVertex2f(-.8,.6);
    glVertex2f(-.55,.7);glVertex2f(-.5,0.6);
    glVertex2f(-.25,.7);glVertex2f(-.2,0.6);
              glVertex2f(.05,.7);glVertex2f(.1,.6);
            glVertex2f(.35,.7);glVertex2f(.4,.6);
            glVertex2f(.65,.7);glVertex2f(.7,.6);
            glVertex2f(.95,.7);glVertex2f(1.0,.6);

    glVertex2f(-1.0,.4);glVertex2f(-.95,.3);
    glVertex2f(-.7,.4);glVertex2f(-.65,0.3);
    glVertex2f(-.4,.4);glVertex2f(-.35,0.3);
    glVertex2f(-.1,.4);glVertex2f(-.05,0.3);
                 glVertex2f(.2,.4);glVertex2f(.25,.3);
                 glVertex2f(.5,.4);glVertex2f(.55,0.3);
                 glVertex2f(.8,.40);glVertex2f(.85,0.3);

    glVertex2f(-.85,.1);glVertex2f(-.8,0.0);
    glVertex2f(-.55,.1);glVertex2f(-.5,0.0);
    glVertex2f(-.25,.1);glVertex2f(-.2,0.0);
              glVertex2f(.05,.1);glVertex2f(.1,.0);
            glVertex2f(.35,.1);glVertex2f(.4,.0);
            glVertex2f(.65,.1);glVertex2f(.7,.0);
            glVertex2f(.95,.1);glVertex2f(1.0,.0);


    glVertex2f(-1.0,-.2);glVertex2f(-.95,-.3);
    glVertex2f(-.7,-.2);glVertex2f(-.65,-0.3);
    glVertex2f(-.4,-.2);glVertex2f(-.35,-0.3);
    glVertex2f(-.1,-.2);glVertex2f(-.05,-0.3);
                 glVertex2f(.2,-.2);glVertex2f(.25,-.3);
                 glVertex2f(.5,-.2);glVertex2f(.55,-.3);
                 glVertex2f(.8,-.2);glVertex2f(.85,-.3);

    glVertex2f(-.85,-.5);glVertex2f(-.8,-.6);
    glVertex2f(-.55,-.5);glVertex2f(-.5,-.6);
    glVertex2f(-.25,-.5);glVertex2f(-.2,-.6);
              glVertex2f(.05,-.5);glVertex2f(.1,-.6);
            glVertex2f(.35,-.5);glVertex2f(.4,-.6);
            glVertex2f(.65,-.5);glVertex2f(.7,-.6);
            glVertex2f(.95,-.5);glVertex2f(1.0,-.6);

    glVertex2f(-1.0,-.8);glVertex2f(-.95,-.9);
    glVertex2f(-.7,-.8);glVertex2f(-.65,-0.9);
    glVertex2f(-.4,-.8);glVertex2f(-.35,-0.9);
    glVertex2f(-.1,-.8);glVertex2f(-.05,-0.9);
                 glVertex2f(.2,-.8);glVertex2f(.25,-.9);
                 glVertex2f(.5,-.8);glVertex2f(.55,-.9);
                 glVertex2f(.8,-.8);glVertex2f(.85,-.9);

    glVertex2f(-.85,-1.1);glVertex2f(-.8,-1.2);
    glVertex2f(-.55,-1.1);glVertex2f(-.5,-1.2);
    glVertex2f(-.25,-1.1);glVertex2f(-.2,-1.2);
              glVertex2f(.05,-1.1);glVertex2f(.1,-1.2);
            glVertex2f(.35,-1.1);glVertex2f(.4,-1.2);
            glVertex2f(.65,-1.1);glVertex2f(.7,-1.2);
            glVertex2f(.95,-1.1);glVertex2f(1.0,-1.2);

    glVertex2f(-1.0,-1.4);glVertex2f(-.95,-1.5);
    glVertex2f(-.7,-1.4);glVertex2f(-.65,-1.5);
    glVertex2f(-.4,-1.4);glVertex2f(-.35,-1.5);
    glVertex2f(-.1,-1.4);glVertex2f(-.05,-1.5);
                 glVertex2f(.2,-1.4);glVertex2f(.25,-1.5);
                 glVertex2f(.5,-1.4);glVertex2f(.55,-1.5);
                 glVertex2f(.8,-1.4);glVertex2f(.85,-1.5);


        glEnd();
        glPopMatrix();
}

///----------------------------------Create Sun/Create moon----------------////

void Circle(GLfloat x, GLfloat y,GLfloat radius,int c1, int c2, int c3)
{
    int i;

    int triangleAmount = 100;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(c1,c2,c3);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++){
        glVertex2f(
                   x+(radius * cos(i * twicePi / triangleAmount)),
                   y+(radius * sin(i * twicePi / triangleAmount))
                   );
    }
    glEnd();
}

void airPlaneUpdate(int value) { // timer .. er kaj timer ba thread
    // ekta particular time por por function call hobe .. update nam er function call hobe ..

    // timer use kore move korte parbo .. jekono object .. ba translation korte parbo ..

    if(airPlanePosition < -1.8)//
        airPlanePosition = 1.05f;

    airPlanePosition -= airPlaneSpeed;

	glutPostRedisplay();


	glutTimerFunc(100, airPlaneUpdate, 0);
}











void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			airPlaneSpeed += 0.1f;
			//printf("clicked at (%d, %d)\n", x, y);
			printf("clicked at (%f, %f)\n", mountainColor[0], mountainColor[1]);
		}

	}
    if (button == GLUT_RIGHT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			airPlaneSpeed -= 0.1f;
			//printf("clicked at (%d, %d)\n", x, y);
		}

	}



	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    airPlaneSpeed -= 0.1f;
    break;
case 'w':
    airPlaneSpeed += 0.1f;
    break;
case 'n':
    nightStart2 = true;
    break;
case 'd':
    dayStart1 = true;
    break;

case 'r':
     rain = 2;
    break;
case 's':
     rain = 1;
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
 /// ////---------------------------sky-------------------------------Md. Jahid Hassan/////----//////
 /// /// //// ----------------------sky 7 layer block define here-----------------------//////////


 /// sky Layer 1///
 glBegin(GL_QUADS);
      glColor3fv(skyColor1);
      glVertex2f(-1.0f, 0.8f);
      glVertex2f(1.0f, 0.8f);
      glVertex2f(1.0f, 1.0f);
      glVertex2f(-1.0f,1.0f);
 glEnd();

 /// sky Layer 2///
 glBegin(GL_QUADS);
      glColor3fv(skyColor2);
      glVertex2f(-1.0f, 0.6f);
      glVertex2f(1.0f, 0.6f);
      glVertex2f(1.0f, 0.8f);
      glVertex2f(-1.0f,0.8f);
 glEnd();

 /// sky Layer 3///
 glBegin(GL_QUADS);
      glColor3fv(skyColor3);
      glVertex2f(-1.0f, 0.4f);
      glVertex2f(1.0f, 0.4f);
      glVertex2f(1.0f, 0.6f);
      glVertex2f(-1.0f, 0.6f);
 glEnd();

 /// sky Layer 4///
 glBegin(GL_QUADS);
      glColor3fv(skyColor4);
      glVertex2f(-1.0f, 0.24f);
      glVertex2f(1.0f, 0.24f);
      glVertex2f(1.0f, 0.4f);
      glVertex2f(-1.0f,0.4f);
 glEnd();
/*
 /// sky Layer 5///
 glBegin(GL_QUADS);
      glColor3fv(skyColor5);
      glVertex2f(-1.0f, 0.5f);
      glVertex2f(1.0f, 0.5f);
      glVertex2f(1.0f, 0.6f);
      glVertex2f(-1.0f,0.6f);
 glEnd();

 /// sky Layer 6///
 glBegin(GL_QUADS);
      glColor3fv(skyColor6);
      glVertex2f(-1.0f, 0.4f);
      glVertex2f(1.0f, 0.4f);
      glVertex2f(1.0f, 0.5f);
      glVertex2f(-1.0f,0.5f);
 glEnd();

 /// sky Layer 7///
 glBegin(GL_QUADS);
      glColor3fv(skyColor7);
      glVertex2f(-1.0f, 0.24f);
      glVertex2f(1.0f, 0.24f);
      glVertex2f(1.0f, 0.4f);
      glVertex2f(-1.0f,0.4f);
 glEnd();
*/

   /// /////////////////////////////////////////////////////////////////////////
   /// -------------------------------------------------------------------------
      ///---------------------------------------------------Day/Night---Start------////
glPushMatrix();
glTranslatef(0.0, sun_move, 0.0);
Circle(-0.35,0.75,0.08,247,247,73);
glPopMatrix();
///-----------------------------------------Sun/Moon-----Move condition----////
///-----------------------------------------Light change function----------////

if(start3==true)
{
    //Moon();
glPushMatrix();
    Circle(0.55,0.75,0.08,217,217,214);
    glPopMatrix();

}

if(nightStart2 == true)
{
    sun_move -= 0.05; /// -= 0.005
    if(sun_move < -0.32) // -0.62
    {
        //glDisable(GL_LIGHT0);
        nightStart2 = false;
        start3= true;
     /// //// Set mountain color for night- test yellow color/// ///
     mountainColor[0] = 1.0f;
     mountainColor[1] = 1.0f;
     mountainColor[2] = 0.0f;
     /// //// Set Sky color for night-test  color/////
     ///  sky block 1///////                       ////
     skyColor1[0] = 0.166;
     skyColor1[1] = 0.203;
     skyColor1[2] = 0.920;
     /// sky block 2///////                     /////
     skyColor2[0] = 0.191;
     skyColor2[1] = 0.227;
     skyColor2[2] = 0.910;
     /// sky block 3///////                     /////
     skyColor3[0] = 0.340;
     skyColor3[1] = 0.369;
     skyColor3[2] = 0.920;
     /// sky block 4///////                     /////
     skyColor4[0] = 0.448;
     skyColor4[1] = 0.455;
     skyColor4[2] = 0.590;

    }

}

if(dayStart1 == true)
{
    start3=false;
    //glEnable(GL_LIGHT0);
    sun_move += 0.05;
    if(sun_move > -0.03) // 0.3
    {
        //glEnable(GL_LIGHT0);
        /// //// Set mountain color for Day- test yellow color/// ///
     nightStart2 = true;
     start3 = false;

     mountainColor[0] = 0.0f;
     mountainColor[1] = 0.0f;
     mountainColor[2] = 90.0f;
     /// //// Set Sky color for Day-test  color/////
     ///  sky block 1///////                       ////
     skyColor1[0] = 0.0752;
     skyColor1[1] = 0.839;
     skyColor1[2] = 0.940;
     /// sky block 2///////                     /////
     skyColor2[0] = 0.279;
     skyColor2[1] = 0.854;
     skyColor2[2] = 0.930;
     /// sky block 3///////                     /////
     skyColor3[0] = 0.534;
     skyColor3[1] = 0.848;
     skyColor3[2] = 0.890;
     /// sky block 4///////                     /////
     skyColor4[0] = 0.754;
     skyColor4[1] = 0.901;
     skyColor4[2] = 0.920;
    }
    if(sun_move > 0)
    {
        dayStart1 = false;
    }
}

    ///
   /// ///////////////////////////////////////
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
      glColor3f(0.980f, 0.971f, 0.970f);
      glVertex2f(0.615, 0.825);
      glVertex2f(0.855 ,0.825);
      glVertex2f(0.885, 0.865);
      glVertex2f( 0.555, 0.865);
   glEnd();
    ///
    ///**Plane Diver Window-203**///
    glBegin(GL_QUADS);
      glColor3f(0.890f, 0.503f, 0.489f);
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
      glColor3f(0.890f, 0.503f, 0.489f);
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
    glColor3fv(mountainColor);
    //glColor3f(mountainColor);   /// PC- 1.0f, 0.3f, 0.6f
        glVertex2f(-1.0, 0.24);
        glVertex2f(0.3, 0.24);
        glVertex2f(-0.44, 0.8);
    glEnd();

    // right mountain //
    glBegin(GL_TRIANGLES);
    glColor3fv(mountainColor);
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
    /// Train Line Done ------------------------------****************


    /// Train Body Start Here --------------------------------------
glPushMatrix(); // Full train Start

    // Engine Three Tire Code here ....
    // Left Most Tire ...
       glPushMatrix();
   glTranslatef(-0.772f,-0.920f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0308*sin(i);
y=0.0308*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

//Middle Tire ...
       glPushMatrix();
   glTranslatef(-0.694f,-0.92131f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0308*sin(i);
y=0.0308*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

//Right Tire ...
       glPushMatrix();
   glTranslatef(-0.530f,-0.919f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0308*sin(i);
y=0.0308*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

    /// Engine Starts --------------------------------------------------
        glBegin(GL_POLYGON);
        glColor3ub(18, 255, 200);
        // Chimni
      glVertex2f(-0.78f, -0.82f); //1
      glVertex2f(-0.72f, -0.82f); //2
      glVertex2f(-0.72f, -0.76f); // 3
      glVertex2f(-0.7f, -0.76f); //4
      glVertex2f(-0.7f, -0.74f); // 5

      glVertex2f(-0.8f, -0.74f); //6
      glVertex2f(-0.8f, -0.76); // 7
      glVertex2f(-0.78f, -0.76); //8
      glVertex2f(-0.78f, -0.82f); //9
      glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
      // Engine First Part

        glVertex2f(-0.814f, -0.931f);
        glVertex2f(-0.637f, -0.931f);

        glVertex2f(-0.638f, -0.817f);
        glVertex2f(-0.814f, -0.820f);


      // Engine Second Part
      glColor3ub(255, 0, 0);
      glVertex2f(-0.637f, -0.931f);
      glVertex2f(-0.462f, -0.930f);

      glVertex2f(-0.460f, -0.709f);
      glVertex2f(-0.639f, -0.711f);

      // Engine Second Part Window
      glColor3ub(255, 255, 200);
      glVertex2f(-0.607f, -0.817f);
      glVertex2f(-0.490f, -0.819f);

        glVertex2f(-0.490f, -0.731f);
        glVertex2f(-0.607f, -0.731f);

    glEnd();
    /// Engine Ends ------------------------

    /// 1st Train Body Starts -------------------------------------------

    //left Tire ...
       glPushMatrix();
   glTranslatef(-0.3499f,-0.92131f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0308*sin(i);
y=0.0308*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

//Right Tire ...
       glPushMatrix();
   glTranslatef(-0.2139f,-0.919f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0308*sin(i);
y=0.0308*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
      // 1st body Part
      glColor3ub(255, 0, 0);
      glVertex2f(-0.399f, -0.931f);
      glVertex2f(-0.170f, -0.930f);

      glVertex2f(-0.170f, -0.709f);
      glVertex2f(-0.399f, -0.711f);

      // 1st body Part Window
      glColor3ub(255, 255, 200);
      glVertex2f(-0.370f, -0.817f);
      glVertex2f(-0.199f, -0.819f);

        glVertex2f(-0.199f, -0.731f);
        glVertex2f(-0.370f, -0.731f);

    glEnd();

    /// 1st train Body Ends ------------------------

    /// 2nd Train Body Starts -------------------------------------------

        //left Tire ...
       glPushMatrix();
   glTranslatef(-0.0576f,-0.92131f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0308*sin(i);
y=0.0308*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();

//Right Tire ...
       glPushMatrix();
   glTranslatef(0.08014f,-0.919f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.0308*sin(i);
y=0.0308*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
      // 1st body Part
      glColor3ub(255, 0, 0);
      glVertex2f(-0.108f, -0.931f);
      glVertex2f(0.120f, -0.930f);

      glVertex2f(0.120f, -0.709f);
      glVertex2f(-0.108f, -0.711f);

      // 1st body Part Window
      glColor3ub(255, 255, 200);
      glVertex2f(-0.080f, -0.817f);
      glVertex2f(0.090f, -0.819f);

        glVertex2f(0.090f, -0.731f);
        glVertex2f(-0.080f, -0.731f);

    glEnd();
    /// 2nd Train Body Ends ------------------------
glPopMatrix(); // Full train done


/// ------------------------------------- Train Section End -------------

glMatrixMode(GL_MODELVIEW);
///---------------------------------------------Rain Function
   rainFunction();






   glFlush();
}
///----------------------------------Rain update function-------------//////
void updateRain(int value)
{

    if(rain == 2){
        if(xrain > 0.1f){
            xrain = -0.2f;
            yrain = -0.5f;
        }
        xrain = xrain + 0.03f;
        yrain = yrain - 0.03f;
    }

    else{

        xrain = 10.0f;
        yrain = 10.0f;

    }
    glutPostRedisplay();

    glutTimerFunc(25, updateRain,0);
}

void MyInit()
{
glEnable(GL_DEPTH_TEST);
gluOrtho2D(0,1600,0,800);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_COLOR_MATERIAL);

}

void init() { // initialization hoy
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // bg color set
   //glEnable(GL_DEPTH_TEST);
   gluOrtho2D(0,1600,0,800);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_COLOR_MATERIAL);
}


int main(int argc, char** argv) { // program ekhan thekei start hoy
   glutInit(&argc, argv);
   //glutInitWindowSize(320, 320);
   glutInitWindowSize(1240, 840);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   //MyInit();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, airPlaneUpdate, 0); // update nam er function 1000 ml sec por por call hobe ..
   glutTimerFunc(25, updateRain, 0);
   glutMainLoop();
   return 0;
}
