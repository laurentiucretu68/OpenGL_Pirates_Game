#include<windows.h>
#include <gl/freeglut.h>
#include "desene.h"

double k = 0.0;
double i = 0.0;
double alpha = 1.0;
double culoareSteagJucator1[3] = {0.471, 0.004, 0.004};
double culoareSteagJucator2[3] = { 0.024, 0.361, 0.129 };
double culoareCabana1[3] = { 1.,0.455,0.369 };
double culoareCabana2[3] = { 0.443,0.639,0.961 };
double culoareCabana3[3] = { 0.933,0.961,0.392 };



void init(void)
{
	glClearColor(0.001, 0.53, 0.98, 0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-20.0, 1500, 0.0, 900.0, -1.0, 1.0);
}

void deseneazaScena(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//---------------------------------------------barca jucator 1
	glPushMatrix();

	glTranslated(800, 80, 0);
	glTranslated(k, 100.0, 0.0);
	glTranslated(-800, -80, 0);
	glScalef(1.5f, 1.5f, 1.5f);

	deseneazaBarca(culoareSteagJucator1);

	glPopMatrix();
	

	//---------------------------------------------barca jucator 2
	glPushMatrix();

	glTranslated(600, 80, 0);
	glTranslated(k, 100.0, 0.0);
	glScalef(-1.5f, 1.5f, 1.5f);
	glTranslated(-600, -80, 0);

	deseneazaBarca(culoareSteagJucator2);

	glPopMatrix();

	//-----------------------------------environment

	glColor3f(0.878, 0.824, 0.467);
	glBegin(GL_POLYGON); //nisip
	glVertex2i(-30, 900);
	glVertex2i(-30, 750);
	glVertex2i(1500, 750);
	glVertex2i(1500, 900);
	glEnd();

	//-----------------------------------palmier
	glPushMatrix();

	glTranslated(1300, 820, 0);
	glScalef(3.f, 3.f, 3.f);
	deseneazaPalmier();
	glPopMatrix();

	//-----------------------------------cabane
	glPushMatrix();

	glTranslated(1000, 800, 0);
	glScalef(1.5, 1.5, 1.5);
	deseneazaCabana(culoareCabana1);
	glPopMatrix();

	glPushMatrix();

	glTranslated(1100, 800, 0);
	glScalef(1.5, 1.5, 1.5);
	deseneazaCabana(culoareCabana2);
	glPopMatrix();

	glPushMatrix();

	glTranslated(1200, 800, 0);
	glScalef(1.5, 1.5, 1.5);
	deseneazaCabana(culoareCabana3);
	glPopMatrix();

	glutSwapBuffers();
	glFlush();
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-20.0, 1500, 0.0, 900.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
}

void miscad(void)
{
	//miscare barci
	k = k + alpha;
	if (k > 1000.0)
		alpha = -0.25;
	else if (k < 0.0)
		alpha = 0.25;


	glutPostRedisplay();
}

void miscas(void)
{
	//miscare barci
	k = k + alpha;
	if (k < 0.0)
		alpha = 0.25;
	else if (k > 1000.0)
		alpha = -0.25;


	glutPostRedisplay();
}


void mouse(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
			alpha = -0.25; glutIdleFunc(miscas);
		break;
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN)
			alpha = 0.25; glutIdleFunc(miscad);
		break;
	default:
		break;
	}
}


void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1500, 900);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Lac cu barcute");
	init();
	glutMouseFunc(mouse);
	glutDisplayFunc(deseneazaScena);
	glutReshapeFunc(reshape);

	glutMainLoop();
}