#include <gl/freeglut.h>
#include "./desene.h"

void deseneazaBarca(double culoareSteag[3]) {
	//------------------------------------corp baza corabie
	glColor3f(0.639, 0.467, 0.255);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(490, 110);
	glVertex2f(490, 113);
	glVertex2f(486, 110);
	glVertex2f(482, 113);
	glVertex2f(486, 107);
	glVertex2f(478, 110);
	glVertex2f(482, 107);
	glVertex2f(478, 107);
	glVertex2f(482, 101);
	glVertex2f(474, 107);
	glVertex2f(478, 101);
	glVertex2f(474, 104);
	glVertex2f(478, 89);
	glVertex2f(470, 104);
	glVertex2f(474, 89);
	glVertex2f(470, 104);
	glVertex2f(474, 80);
	glVertex2f(470, 101);
	glVertex2f(470, 80);
	glVertex2f(462, 101);
	glVertex2f(470, 71);
	glVertex2f(462, 98);
	glVertex2f(466, 71);
	glVertex2f(446, 98);
	glVertex2f(466, 65);
	glVertex2f(446, 95);
	glVertex2f(418, 65);
	glVertex2f(394, 95);
	glVertex2f(406, 65);
	glVertex2f(394, 92);
	glVertex2f(366, 65);
	glVertex2f(346, 92);
	glVertex2f(330, 65);
	glVertex2f(342, 92);
	glVertex2f(330, 68);
	glVertex2f(338, 92);
	glVertex2f(326, 68);
	glVertex2f(334, 92);
	glVertex2f(326, 74);
	glVertex2f(332, 92);
	glVertex2f(322, 74);
	glVertex2f(330, 92);
	glVertex2f(322, 83);
	glVertex2f(326, 92);
	glVertex2f(318, 83);
	glVertex2f(322, 92);
	glVertex2f(318, 86);
	glVertex2f(318, 92);
	glVertex2f(314, 86);
	glVertex2f(318, 95);
	glVertex2f(314, 92);
	glVertex2f(314, 95);
	glVertex2f(312, 92);
	glVertex2f(314, 98);
	glVertex2f(310, 92);
	glVertex2f(310, 98);
	glEnd();

	// --------------------------------vele
	// parte1 vele mari
	glColor3f(0.439, 0.439, 0.439);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(430, 98);
	glVertex2f(430, 119);
	glVertex2f(410, 98);
	glVertex2f(426, 119);
	glVertex2f(410, 101);
	glVertex2f(426, 131);
	glVertex2f(406, 101);
	glVertex2f(422, 131);
	glVertex2f(394, 101);
	glVertex2f(422, 137);
	glVertex2f(386, 101);
	glVertex2f(382, 137);
	glVertex2f(386, 98);
	glVertex2f(381, 137);
	glVertex2f(378, 98);
	glVertex2f(377, 137);
	glVertex2f(378, 95);
	glVertex2f(376, 137);
	glVertex2f(374, 95);
	glVertex2f(375, 137);
	glVertex2f(374, 98);
	glVertex2f(366, 137);
	glVertex2f(370, 98);
	glVertex2f(366, 131);
	glVertex2f(370, 95);
	glVertex2f(350, 131);
	glEnd();

	// parte2 vele mari
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(350, 131);
	glVertex2f(322, 131);
	glVertex2f(322, 128);
	glVertex2f(326, 128);
	glVertex2f(326, 125);
	glVertex2f(330, 125);
	glVertex2f(330, 122);
	glVertex2f(334, 122);
	glEnd();

	// parte3 vele mari
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(370, 95);
	glVertex2f(350, 131);
	glVertex2f(334, 122);
	glVertex2f(334, 101);
	glVertex2f(330, 101);
	glVertex2f(330, 98);
	glVertex2f(326, 98);
	glVertex2f(326, 95);
	glEnd();

	// parte1 vela mica
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(470, 122);
	glVertex2f(442, 122);
	glVertex2f(442, 119);
	glVertex2f(446, 119);
	glVertex2f(446, 116);
	glVertex2f(450, 116);
	glEnd();

	// parte2 vela mica
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(450, 116);
	glVertex2f(470, 122);
	glVertex2f(470, 116);
	glVertex2f(474, 116);
	glVertex2f(474, 107);
	glVertex2f(470, 107);
	glVertex2f(470, 104);
	glVertex2f(466, 104);
	glVertex2f(466, 101);
	glEnd();

	// parte3 vela mica
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(466, 101);
	glVertex2f(450, 116);
	glVertex2f(450, 107);
	glVertex2f(446, 107);
	glVertex2f(446, 104);
	glVertex2f(442, 104);
	glVertex2f(442, 101);
	glEnd();

	// ----------------------------------steag
	//baza steag
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(442, 140);
	glVertex2f(442, 167);
	glVertex2f(398, 167);
	glVertex2f(398, 140);
	glEnd();

	//desen steag
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(406, 161);
	glVertex2f(406, 164);
	glVertex2f(402, 164);
	glVertex2f(402, 161);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 158);
	glVertex2f(410, 161);
	glVertex2f(406, 161);
	glVertex2f(406, 158);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(406, 143);
	glVertex2f(406, 146);
	glVertex2f(402, 146);
	glVertex2f(402, 143);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 146);
	glVertex2f(410, 149);
	glVertex2f(406, 149);
	glVertex2f(406, 146);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(438, 143);
	glVertex2f(438, 146);
	glVertex2f(434, 146);
	glVertex2f(434, 143);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(434, 146);
	glVertex2f(434, 149);
	glVertex2f(430, 149);
	glVertex2f(430, 146);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(438, 161);
	glVertex2f(438, 164);
	glVertex2f(434, 164);
	glVertex2f(434, 161);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(434, 158);
	glVertex2f(434, 161);
	glVertex2f(430, 161);
	glVertex2f(430, 158);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(426, 155);
	glVertex2f(426, 158);
	glVertex2f(414, 158);
	glVertex2f(414, 155);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(422, 149);
	glVertex2f(422, 155);
	glVertex2f(418, 155);
	glVertex2f(418, 149);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(418, 146);
	glVertex2f(418, 152);
	glVertex2f(414, 152);
	glVertex2f(414, 146);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(426, 146);
	glVertex2f(426, 152);
	glVertex2f(422, 152);
	glVertex2f(422, 146);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(414, 152);
	glVertex2f(414, 155);
	glVertex2f(410, 155);
	glVertex2f(410, 152);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(430, 152);
	glVertex2f(430, 155);
	glVertex2f(426, 155);
	glVertex2f(426, 152);
	glEnd();

	//----------------------------------detalii
	// catarg1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(354, 92);
	glVertex2f(354, 95);
	glVertex2f(350, 95);
	glVertex2f(350, 92);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(354, 131);
	glVertex2f(354, 134);
	glVertex2f(350, 134);
	glVertex2f(350, 131);
	glEnd();

	// catarg2
	glBegin(GL_POLYGON);
	glVertex2f(402, 95);
	glVertex2f(402, 101);
	glVertex2f(398, 101);
	glVertex2f(398, 95);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(402, 137);
	glVertex2f(402, 140);
	glVertex2f(398, 140);
	glVertex2f(398, 137);
	glEnd();

	// catarg3
	glBegin(GL_POLYGON);
	glVertex2f(458, 98);
	glVertex2f(458, 101);
	glVertex2f(454, 101);
	glVertex2f(454, 98);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(458, 122);
	glVertex2f(458, 126);
	glVertex2f(454, 126);
	glVertex2f(454, 122);
	glEnd();

	// hublouri
	glBegin(GL_POLYGON);
	glVertex2f(354, 74);
	glVertex2f(354, 83);
	glVertex2f(350, 83);
	glVertex2f(350, 74);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(358, 77);
	glVertex2f(358, 80);
	glVertex2f(346, 80);
	glVertex2f(346, 77);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(378, 74);
	glVertex2f(378, 83);
	glVertex2f(374, 83);
	glVertex2f(374, 74);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(382, 77);
	glVertex2f(382, 80);
	glVertex2f(370, 80);
	glVertex2f(370, 77);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(402, 74);
	glVertex2f(402, 83);
	glVertex2f(398, 83);
	glVertex2f(398, 74);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(406, 77);
	glVertex2f(406, 80);
	glVertex2f(394, 80);
	glVertex2f(394, 77);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(426, 74);
	glVertex2f(426, 83);
	glVertex2f(422, 83);
	glVertex2f(422, 74);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(430, 77);
	glVertex2f(430, 80);
	glVertex2f(418, 80);
	glVertex2f(418, 77);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(450, 74);
	glVertex2f(450, 83);
	glVertex2f(446, 83);
	glVertex2f(446, 74);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(454, 77);
	glVertex2f(454, 80);
	glVertex2f(442, 80);
	glVertex2f(442, 77);
	glEnd();

	//-----------------------------------contur
	// contur baza
	glBegin(GL_POLYGON);
	glVertex2f(314, 92);
	glVertex2f(314, 98);
	glVertex2f(310, 98);
	glVertex2f(310, 92);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(318, 86);
	glVertex2f(318, 95);
	glVertex2f(314, 95);
	glVertex2f(314, 86);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(322, 83);
	glVertex2f(322, 92);
	glVertex2f(318, 92);
	glVertex2f(318, 83);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(326, 74);
	glVertex2f(326, 86);
	glVertex2f(322, 86);
	glVertex2f(322, 74);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(330, 68);
	glVertex2f(330, 77);
	glVertex2f(326, 77);
	glVertex2f(326, 68);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(462, 65);
	glVertex2f(462, 68);
	glVertex2f(330, 68);
	glVertex2f(330, 65);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(466, 65);
	glVertex2f(466, 74);
	glVertex2f(462, 74);
	glVertex2f(462, 65);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(470, 71);
	glVertex2f(470, 83);
	glVertex2f(466, 83);
	glVertex2f(466, 71);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(474, 80);
	glVertex2f(474, 92);
	glVertex2f(470, 92);
	glVertex2f(470, 80);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(478, 89);
	glVertex2f(478, 107);
	glVertex2f(474, 107);
	glVertex2f(474, 89);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(482, 101);
	glVertex2f(482, 113);
	glVertex2f(478, 110);
	glVertex2f(478, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(486, 107);
	glVertex2f(486, 113);
	glVertex2f(482, 113);
	glVertex2f(482, 107);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(490, 110);
	glVertex2f(490, 113);
	glVertex2f(486, 113);
	glVertex2f(486, 110);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(474, 101);
	glVertex2f(474, 104);
	glVertex2f(470, 104);
	glVertex2f(470, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(470, 98);
	glVertex2f(470, 101);
	glVertex2f(462, 101);
	glVertex2f(462, 98);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(462, 95);
	glVertex2f(462, 98);
	glVertex2f(446, 98);
	glVertex2f(446, 95);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(446, 92);
	glVertex2f(446, 95);
	glVertex2f(394, 95);
	glVertex2f(394, 92);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(394, 89);
	glVertex2f(394, 92);
	glVertex2f(322, 92);
	glVertex2f(322, 89);
	glEnd();

	// contur vele
	glBegin(GL_POLYGON);
	glVertex2f(370, 95);
	glVertex2f(370, 98);
	glVertex2f(326, 98);
	glVertex2f(326, 95);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(386, 98);
	glVertex2f(386, 101);
	glVertex2f(366, 101);
	glVertex2f(366, 98);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 101);
	glVertex2f(410, 104);
	glVertex2f(386, 104);
	glVertex2f(386, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(430, 98);
	glVertex2f(430, 101);
	glVertex2f(410, 101);
	glVertex2f(410, 98);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(430, 98);
	glVertex2f(430, 119);
	glVertex2f(426, 119);
	glVertex2f(426, 98);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(426, 119);
	glVertex2f(426, 131);
	glVertex2f(422, 131);
	glVertex2f(422, 119);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(422, 131);
	glVertex2f(422, 137);
	glVertex2f(418, 137);
	glVertex2f(418, 131);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(418, 134);
	glVertex2f(418, 137);
	glVertex2f(366, 137);
	glVertex2f(366, 134);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(370, 116);
	glVertex2f(370, 134);
	glVertex2f(366, 134);
	glVertex2f(366, 116);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(378, 116);
	glVertex2f(378, 119);
	glVertex2f(370, 119);
	glVertex2f(370, 116);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(378, 95);
	glVertex2f(378, 119);
	glVertex2f(374, 119);
	glVertex2f(374, 95);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(366, 128);
	glVertex2f(366, 131);
	glVertex2f(322, 131);
	glVertex2f(322, 128);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(330, 125);
	glVertex2f(330, 128);
	glVertex2f(326, 128);
	glVertex2f(326, 125);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(334, 122);
	glVertex2f(334, 125);
	glVertex2f(330, 125);
	glVertex2f(330, 122);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(338, 101);
	glVertex2f(338, 122);
	glVertex2f(334, 122);
	glVertex2f(334, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(334, 98);
	glVertex2f(334, 101);
	glVertex2f(330, 101);
	glVertex2f(330, 98);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(466, 101);
	glVertex2f(466, 104);
	glVertex2f(442, 104);
	glVertex2f(442, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(470, 104);
	glVertex2f(470, 122);
	glVertex2f(466, 122);
	glVertex2f(466, 104);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(474, 107);
	glVertex2f(474, 116);
	glVertex2f(470, 116);
	glVertex2f(470, 107);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(470, 119);
	glVertex2f(470, 122);
	glVertex2f(442, 122);
	glVertex2f(442, 119);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(450, 116);
	glVertex2f(450, 119);
	glVertex2f(446, 119);
	glVertex2f(446, 116);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(454, 104);
	glVertex2f(454, 116);
	glVertex2f(450, 116);
	glVertex2f(450, 104);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(450, 104);
	glVertex2f(450, 107);
	glVertex2f(446, 107);
	glVertex2f(446, 104);
	glEnd();

	//----------------------------------umbre
	glColor3f(0.651, 0.651, 0.651);
	glBegin(GL_POLYGON);
	glVertex2f(338, 125);
	glVertex2f(338, 128);
	glVertex2f(330, 128);
	glVertex2f(330, 125);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(342, 122);
	glVertex2f(342, 125);
	glVertex2f(334, 125);
	glVertex2f(334, 122);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(342, 101);
	glVertex2f(342, 122);
	glVertex2f(338, 122);
	glVertex2f(338, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(342, 98);
	glVertex2f(342, 101);
	glVertex2f(334, 101);
	glVertex2f(334, 98);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(374, 119);
	glVertex2f(374, 134);
	glVertex2f(370, 134);
	glVertex2f(370, 119);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(378, 119);
	glVertex2f(378, 125);
	glVertex2f(374, 125);
	glVertex2f(374, 119);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(382, 101);
	glVertex2f(382, 122);
	glVertex2f(378, 122);
	glVertex2f(378, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(454, 116);
	glVertex2f(454, 119);
	glVertex2f(450, 119);
	glVertex2f(450, 116);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(458, 107);
	glVertex2f(458, 116);
	glVertex2f(454, 116);
	glVertex2f(454, 107);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(454, 104);
	glVertex2f(454, 107);
	glVertex2f(450, 107);
	glVertex2f(450, 104);
	glEnd();

	glColor3f(0.239, 0.239, 0.239);
	glBegin(GL_POLYGON);
	glVertex2f(366, 125);
	glVertex2f(366, 128);
	glVertex2f(354, 128);
	glVertex2f(354, 125);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(366, 122);
	glVertex2f(366, 125);
	glVertex2f(358, 125);
	glVertex2f(358, 122);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(366, 116);
	glVertex2f(366, 122);
	glVertex2f(358, 122);
	glVertex2f(358, 116);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(366, 98);
	glVertex2f(366, 101);
	glVertex2f(358, 101);
	glVertex2f(358, 98);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(374, 101);
	glVertex2f(374, 104);
	glVertex2f(362, 104);
	glVertex2f(362, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(374, 113);
	glVertex2f(374, 116);
	glVertex2f(362, 116);
	glVertex2f(362, 113);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(374, 101);
	glVertex2f(374, 116);
	glVertex2f(370, 116);
	glVertex2f(370, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(374, 107);
	glVertex2f(374, 113);
	glVertex2f(366, 113);
	glVertex2f(366, 107);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(426, 101);
	glVertex2f(426, 104);
	glVertex2f(414, 104);
	glVertex2f(414, 101);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(426, 104);
	glVertex2f(426, 107);
	glVertex2f(418, 107);
	glVertex2f(418, 104);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(426, 107);
	glVertex2f(426, 119);
	glVertex2f(422, 119);
	glVertex2f(422, 107);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(422, 119);
	glVertex2f(422, 131);
	glVertex2f(418, 131);
	glVertex2f(418, 119);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(418, 128);
	glVertex2f(418, 134);
	glVertex2f(414, 134);
	glVertex2f(414, 128);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(470, 107);
	glVertex2f(470, 116);
	glVertex2f(466, 116);
	glVertex2f(466, 107);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(466, 116);
	glVertex2f(466, 119);
	glVertex2f(462, 119);
	glVertex2f(462, 116);
	glEnd();

	glColor3f(0.4, 0.29, 0.157);
	glBegin(GL_POLYGON);
	glVertex2f(398, 86);
	glVertex2f(398, 89);
	glVertex2f(322, 89);
	glVertex2f(322, 86);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(450, 89);
	glVertex2f(450, 92);
	glVertex2f(394, 92);
	glVertex2f(394, 89);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(466, 92);
	glVertex2f(466, 95);
	glVertex2f(446, 95);
	glVertex2f(446, 92);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(474, 95);
	glVertex2f(474, 98);
	glVertex2f(462, 98);
	glVertex2f(462, 95);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(474, 98);
	glVertex2f(474, 101);
	glVertex2f(470, 101);
	glVertex2f(470, 98);
	glEnd();

	glColor3f(culoareSteag[0], culoareSteag[1], culoareSteag[2]);
	glBegin(GL_POLYGON);
	glVertex2f(402, 131);
	glVertex2f(402, 134);
	glVertex2f(386, 134);
	glVertex2f(386, 131);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(406, 128);
	glVertex2f(406, 131);
	glVertex2f(390, 131);
	glVertex2f(390, 128);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 107);
	glVertex2f(410, 128);
	glVertex2f(394, 128);
	glVertex2f(394, 107);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(406, 104);
	glVertex2f(406, 107);
	glVertex2f(394, 107);
	glVertex2f(394, 104);
	glEnd();
}

void deseneazaPalmier() {
	// trunchi palmier
	glColor3f(0.529, 0.345, 0.196);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(20, 15);
	glVertex2f(20, 10);
	glVertex2f(18, 15);
	glVertex2f(19, 10);
	glVertex2f(18, 13);
	glVertex2f(19, 7);
	glVertex2f(17, 13);
	glVertex2f(18, 7);
	glVertex2f(17, 10);
	glVertex2f(18, 0);
	glVertex2f(16, 10);
	glVertex2f(16, 0);
	glVertex2f(15, 6);
	glVertex2f(13, 0);
	glVertex2f(15, 8);
	glVertex2f(13, 4);
	glVertex2f(14, 8);
	glVertex2f(12, 4);
	glVertex2f(14, 9);
	glVertex2f(12, 7);
	glVertex2f(13, 9);
	glVertex2f(11, 7);
	glVertex2f(13, 11);
	glVertex2f(11, 9);
	glVertex2f(12, 11);
	glVertex2f(10, 9);
	glVertex2f(12, 12);
	glVertex2f(10, 10);
	glVertex2f(11, 12);
	glVertex2f(9, 10);
	glVertex2f(11, 13);
	glVertex2f(9, 11);
	glVertex2f(10, 13);
	glVertex2f(8, 11);
	glVertex2f(10, 14);
	glVertex2f(8, 12);
	glVertex2f(8, 14);

	glEnd();

	// baza frunze
	glColor3f(0.455, 0.769, 0.247);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(28, 17);
	glVertex2f(28, 15);
	glVertex2f(27, 17);
	glVertex2f(26, 15);
	glVertex2f(27, 18);
	glVertex2f(26, 16);
	glVertex2f(26, 18);
	glVertex2f(25, 16);
	glVertex2f(26, 19);
	glVertex2f(25, 17);
	glVertex2f(25, 19);
	glVertex2f(24, 17);
	glVertex2f(22, 19);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(25, 14);
	glVertex2f(26, 14);
	glVertex2f(26, 10);
	glVertex2f(25, 10);
	glVertex2f(25, 11);
	glVertex2f(24, 11);
	glVertex2f(24, 12);
	glVertex2f(23, 12);
	glVertex2f(23, 13);
	glVertex2f(22, 13);
	glVertex2f(22, 14);
	glVertex2f(24, 16);
	glVertex2f(25, 16);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(20, 18);
	glVertex2f(22, 19);
	glVertex2f(24, 17);
	glVertex2f(24, 16);
	glVertex2f(22, 14);
	glVertex2f(21, 14);
	glVertex2f(21, 12);
	glVertex2f(20, 12);
	glVertex2f(20, 15);
	glVertex2f(18, 15);
	glVertex2f(18, 16);
	glVertex2f(16, 17);
	glVertex2f(16, 18);
	glVertex2f(19, 20);
	glVertex2f(19, 21);
	glVertex2f(20, 22);
	glVertex2f(21, 22);
	glVertex2f(21, 21);
	glVertex2f(22, 21);
	glVertex2f(22, 19);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(18, 23);
	glVertex2f(20, 23);
	glVertex2f(20, 22);
	glVertex2f(19, 21);
	glVertex2f(18, 21);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(14, 18);
	glVertex2f(16, 18);
	glVertex2f(19, 20);
	glVertex2f(16, 20);
	glVertex2f(16, 21);
	glVertex2f(14, 21);
	glVertex2f(14, 20);
	glVertex2f(13, 20);
	glVertex2f(13, 18);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(14, 16);
	glVertex2f(13, 16);
	glVertex2f(13, 14);
	glVertex2f(15, 14);
	glVertex2f(15, 15);
	glVertex2f(17, 15);
	glVertex2f(17, 16);
	glVertex2f(18, 16);
	glVertex2f(16, 17);
	glVertex2f(14, 17);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(8, 18);
	glVertex2f(12, 18);
	glVertex2f(12, 17);
	glVertex2f(10, 17);
	glVertex2f(10, 16);
	glVertex2f(8, 16);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(8, 7);
	glVertex2f(9, 7);
	glVertex2f(8, 8);
	glVertex2f(9, 9);
	glVertex2f(7, 8);
	glVertex2f(8, 9);
	glVertex2f(7, 9);
	glVertex2f(8, 17);
	glVertex2f(6, 9);
	glVertex2f(7, 17);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(6, 9);
	glVertex2f(7, 17);
	glVertex2f(7, 20);
	glVertex2f(6, 20);
	glVertex2f(6, 19);
	glVertex2f(5, 19);
	glVertex2f(5, 17);
	glVertex2f(4, 17);
	glVertex2f(4, 15);
	glVertex2f(2, 15);
	glVertex2f(2, 14);
	glVertex2f(3, 12);
	glVertex2f(4, 10);
	glVertex2f(4, 7);
	glVertex2f(5, 7);
	glVertex2f(5, 6);
	glVertex2f(6, 6);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(4, 10);
	glVertex2f(3, 12);
	glVertex2f(3, 10);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(1, 12);
	glVertex2f(3, 12);
	glVertex2f(2, 14);
	glVertex2f(1, 14);
	glVertex2f(1, 13);
	glVertex2f(0, 13);
	glVertex2f(0, 11);
	glVertex2f(1, 11);
	glEnd();

	// umbre frunze
	glColor3f(0.318, 0.529, 0.176);
	glBegin(GL_POLYGON);
	glVertex2f(1, 11);
	glVertex2f(1, 13);
	glVertex2f(0, 13);
	glVertex2f(0, 11);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2, 12);
	glVertex2f(2, 14);
	glVertex2f(1, 14);
	glVertex2f(1, 12);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(5, 13);
	glVertex2f(5, 14);
	glVertex2f(1, 14);
	glVertex2f(1, 13);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(5, 7);
	glVertex2f(5, 11);
	glVertex2f(4, 11);
	glVertex2f(4, 7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(6, 10);
	glVertex2f(6, 13);
	glVertex2f(5, 13);
	glVertex2f(5, 10);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(6, 14);
	glVertex2f(6, 19);
	glVertex2f(5, 19);
	glVertex2f(5, 14);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(7, 19);
	glVertex2f(7, 20);
	glVertex2f(6, 20);
	glVertex2f(6, 19);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(8, 8);
	glVertex2f(8, 13);
	glVertex2f(7, 13);
	glVertex2f(7, 8);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(9, 7);
	glVertex2f(9, 9);
	glVertex2f(8, 9);
	glVertex2f(8, 7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(8, 14);
	glVertex2f(8, 17);
	glVertex2f(7, 17);
	glVertex2f(7, 14);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(10, 16);
	glVertex2f(10, 17);
	glVertex2f(7, 17);
	glVertex2f(7, 16);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(12, 17);
	glVertex2f(12, 18);
	glVertex2f(9, 18);
	glVertex2f(9, 17);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(15, 14);
	glVertex2f(15, 15);
	glVertex2f(13, 15);
	glVertex2f(13, 14);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(17, 15);
	glVertex2f(17, 16);
	glVertex2f(14, 16);
	glVertex2f(14, 15);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(19, 16);
	glVertex2f(19, 17);
	glVertex2f(16, 17);
	glVertex2f(16, 16);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(19, 18);
	glVertex2f(19, 19);
	glVertex2f(16, 19);
	glVertex2f(16, 18);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(17, 19);
	glVertex2f(17, 20);
	glVertex2f(13, 20);
	glVertex2f(13, 19);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(20, 20);
	glVertex2f(20, 23);
	glVertex2f(19, 23);
	glVertex2f(19, 20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(21, 18);
	glVertex2f(21, 21);
	glVertex2f(20, 21);
	glVertex2f(20, 18);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(20, 15);
	glVertex2f(20, 16);
	glVertex2f(19, 16);
	glVertex2f(19, 15);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(21, 12);
	glVertex2f(21, 16);
	glVertex2f(20, 16);
	glVertex2f(20, 12);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(27, 17);
	glVertex2f(27, 18);
	glVertex2f(21, 18);
	glVertex2f(21, 17);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(28, 16);
	glVertex2f(28, 17);
	glVertex2f(26, 17);
	glVertex2f(26, 16);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(24, 16);
	glVertex2f(24, 17);
	glVertex2f(22, 17);
	glVertex2f(22, 16);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(25, 15);
	glVertex2f(25, 16);
	glVertex2f(23, 16);
	glVertex2f(23, 15);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(25, 13);
	glVertex2f(25, 15);
	glVertex2f(24, 15);
	glVertex2f(24, 13);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(26, 10);
	glVertex2f(26, 14);
	glVertex2f(25, 14);
	glVertex2f(25, 10);
	glEnd();
}

void deseneazaCabana(double culoare[3]) {
	// contur casa
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(16, 29);
	glVertex2f(29, 0);
	glVertex2f(29, 29);
	glVertex2f(33, 29);
	glVertex2f(33, 30);
	glVertex2f(32, 30);
	glVertex2f(32, 31);
	glVertex2f(31, 31);
	glVertex2f(31, 32);
	glVertex2f(30, 32);
	glVertex2f(30, 33);
	glVertex2f(29, 33);
	glVertex2f(29, 34);
	glVertex2f(28, 34);
	glVertex2f(28, 35);
	glVertex2f(27, 35);
	glVertex2f(27, 36);
	glVertex2f(26, 36);
	glVertex2f(26, 37);
	glVertex2f(25, 37);
	glVertex2f(25, 38);
	glVertex2f(24, 38);
	glVertex2f(24, 39);
	glVertex2f(23, 39);
	glVertex2f(23, 40);
	glVertex2f(22, 40);
	glVertex2f(22, 41);
	glVertex2f(21, 41);
	glVertex2f(21, 42);
	glVertex2f(20, 42);
	glVertex2f(20, 43);
	glVertex2f(19, 43);
	glVertex2f(19, 44);
	glVertex2f(18, 44);
	glVertex2f(18, 45);
	glVertex2f(17, 45);
	glVertex2f(17, 46);
	glVertex2f(16, 46);
	glVertex2f(16, 45);
	glVertex2f(15, 45);
	glVertex2f(15, 44);
	glVertex2f(14, 44);
	glVertex2f(14, 43);
	glVertex2f(13, 43);
	glVertex2f(13, 42);
	glVertex2f(12, 42);
	glVertex2f(12, 41);
	glVertex2f(11, 41);
	glVertex2f(11, 40);
	glVertex2f(10, 40);
	glVertex2f(10, 39);
	glVertex2f(9, 39);
	glVertex2f(9, 38);
	glVertex2f(8, 38);
	glVertex2f(8, 37);
	glVertex2f(7, 37);
	glVertex2f(7, 36);
	glVertex2f(6, 36);
	glVertex2f(6, 35);
	glVertex2f(5, 35);
	glVertex2f(5, 34);
	glVertex2f(4, 34);
	glVertex2f(4, 33);
	glVertex2f(3, 33);
	glVertex2f(3, 32);
	glVertex2f(2, 32);
	glVertex2f(2, 31);
	glVertex2f(1, 31);
	glVertex2f(1, 30);
	glVertex2f(0, 30);
	glVertex2f(0, 29);
	glVertex2f(4, 29);
	glVertex2f(4, 0);
	glVertex2f(29, 0);
	glEnd();

	// culoare acoperis
	glColor3f(culoare[0], culoare[1], culoare[2]);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(16, 30);
	glVertex2f(31, 30);
	glVertex2f(31, 31);
	glVertex2f(30, 31);
	glVertex2f(30, 32);
	glVertex2f(29, 32);
	glVertex2f(29, 33);
	glVertex2f(28, 33);
	glVertex2f(28, 34);
	glVertex2f(27, 34);
	glVertex2f(27, 35);
	glVertex2f(26, 35);
	glVertex2f(26, 36);
	glVertex2f(25, 36);
	glVertex2f(25, 37);
	glVertex2f(24, 37);
	glVertex2f(24, 38);
	glVertex2f(23, 38);
	glVertex2f(23, 39);
	glVertex2f(22, 39);
	glVertex2f(22, 40);
	glVertex2f(21, 40);
	glVertex2f(21, 41);
	glVertex2f(20, 41);
	glVertex2f(20, 42);
	glVertex2f(19, 42);
	glVertex2f(19, 43);
	glVertex2f(18, 43);
	glVertex2f(18, 44);
	glVertex2f(17, 44);
	glVertex2f(17, 45);
	glVertex2f(16, 45);
	glVertex2f(16, 44);
	glVertex2f(15, 44);
	glVertex2f(15, 43);
	glVertex2f(14, 43);
	glVertex2f(14, 42);
	glVertex2f(13, 42);
	glVertex2f(13, 41);
	glVertex2f(12, 41);
	glVertex2f(12, 40);
	glVertex2f(11, 40);
	glVertex2f(11, 39);
	glVertex2f(10, 39);
	glVertex2f(10, 38);
	glVertex2f(9, 38);
	glVertex2f(9, 37);
	glVertex2f(8, 37);
	glVertex2f(8, 36);
	glVertex2f(7, 36);
	glVertex2f(7, 35);
	glVertex2f(6, 35);
	glVertex2f(6, 34);
	glVertex2f(5, 34);
	glVertex2f(5, 33);
	glVertex2f(4, 33);
	glVertex2f(4, 32);
	glVertex2f(3, 32);
	glVertex2f(3, 31);
	glVertex2f(2, 31);
	glVertex2f(2, 30);
	glEnd();

	//contur interior acoperis
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(16, 30);
	glVertex2f(29, 30);
	glVertex2f(29, 31);
	glVertex2f(28, 31);
	glVertex2f(28, 32);
	glVertex2f(27, 32);
	glVertex2f(27, 33);
	glVertex2f(26, 33);
	glVertex2f(26, 34);
	glVertex2f(25, 34);
	glVertex2f(25, 35);
	glVertex2f(24, 35);
	glVertex2f(24, 36);
	glVertex2f(23, 36);
	glVertex2f(23, 37);
	glVertex2f(22, 37);
	glVertex2f(22, 38);
	glVertex2f(21, 38);
	glVertex2f(21, 39);
	glVertex2f(20, 39);
	glVertex2f(20, 40);
	glVertex2f(19, 40);
	glVertex2f(19, 41);
	glVertex2f(18, 41);
	glVertex2f(18, 42);
	glVertex2f(17, 42);
	glVertex2f(17, 43);
	glVertex2f(16, 43);
	glVertex2f(16, 42);
	glVertex2f(15, 42);
	glVertex2f(15, 41);
	glVertex2f(14, 41);
	glVertex2f(14, 40);
	glVertex2f(13, 40);
	glVertex2f(13, 39);
	glVertex2f(12, 39);
	glVertex2f(12, 38);
	glVertex2f(11, 38);
	glVertex2f(11, 37);
	glVertex2f(10, 37);
	glVertex2f(10, 36);
	glVertex2f(9, 36);
	glVertex2f(9, 35);
	glVertex2f(8, 35);
	glVertex2f(8, 34);
	glVertex2f(7, 34);
	glVertex2f(7, 33);
	glVertex2f(6, 33);
	glVertex2f(6, 32);
	glVertex2f(5, 32);
	glVertex2f(5, 31);
	glVertex2f(4, 31);
	glVertex2f(4, 30);
	glEnd();

	
	// desen perete casa
	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(16, 30);
	glVertex2f(28, 1);
	glVertex2f(28, 31);
	glVertex2f(27, 31);
	glVertex2f(27, 32);
	glVertex2f(26, 32);
	glVertex2f(26, 33);
	glVertex2f(25, 33);
	glVertex2f(25, 34);
	glVertex2f(24, 34);
	glVertex2f(24, 35);
	glVertex2f(23, 35);
	glVertex2f(23, 36);
	glVertex2f(22, 36);
	glVertex2f(22, 37);
	glVertex2f(21, 37);
	glVertex2f(21, 38);
	glVertex2f(20, 38);
	glVertex2f(20, 39);
	glVertex2f(19, 39);
	glVertex2f(19, 40);
	glVertex2f(18, 40);
	glVertex2f(18, 41);
	glVertex2f(17, 41);
	glVertex2f(17, 42);
	glVertex2f(16, 42);
	glVertex2f(16, 41);
	glVertex2f(15, 41);
	glVertex2f(15, 40);
	glVertex2f(14, 40);
	glVertex2f(14, 39);
	glVertex2f(13, 39);
	glVertex2f(13, 38);
	glVertex2f(12, 38);
	glVertex2f(12, 37);
	glVertex2f(11, 37);
	glVertex2f(11, 36);
	glVertex2f(10, 36);
	glVertex2f(10, 35);
	glVertex2f(9, 35);
	glVertex2f(9, 34);
	glVertex2f(8, 34);
	glVertex2f(8, 33);
	glVertex2f(7, 33);
	glVertex2f(7, 32);
	glVertex2f(6, 32);
	glVertex2f(6, 31);
	glVertex2f(5, 31);
	glVertex2f(5, 1);
	glVertex2f(28, 1);
	glEnd();

	// dungi casa
	glColor3f(0.322, 0.325, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(28, 1);
	glVertex2f(28, 2);
	glVertex2f(5, 2);
	glVertex2f(5, 1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(28, 4);
	glVertex2f(28, 5);
	glVertex2f(5, 5);
	glVertex2f(5, 4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(28, 7);
	glVertex2f(28, 8);
	glVertex2f(5, 8);
	glVertex2f(5, 7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(28, 10);
	glVertex2f(28, 11);
	glVertex2f(5, 11);
	glVertex2f(5, 10);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(28, 13);
	glVertex2f(28, 14);
	glVertex2f(5, 14);
	glVertex2f(5, 13);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(28, 16);
	glVertex2f(28, 17);
	glVertex2f(5, 17);
	glVertex2f(5, 16);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(28, 19);
	glVertex2f(28, 20);
	glVertex2f(5, 20);
	glVertex2f(5, 19);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(28, 22);
	glVertex2f(28, 23);
	glVertex2f(5, 23);
	glVertex2f(5, 22);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(28, 25);
	glVertex2f(28, 26);
	glVertex2f(5, 26);
	glVertex2f(5, 25);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(28, 28);
	glVertex2f(28, 29);
	glVertex2f(5, 29);
	glVertex2f(5, 28);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(27, 31);
	glVertex2f(27, 32);
	glVertex2f(6, 32);
	glVertex2f(6, 31);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(24, 34);
	glVertex2f(24, 35);
	glVertex2f(9, 35);
	glVertex2f(9, 34);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(21, 37);
	glVertex2f(21, 38);
	glVertex2f(12, 38);
	glVertex2f(12, 37);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(18, 40);
	glVertex2f(18, 41);
	glVertex2f(15, 41);
	glVertex2f(15, 40);
	glEnd();

	//contur usa
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(23, 1);
	glVertex2f(23, 33);
	glVertex2f(10, 33);
	glVertex2f(10, 1);
	glEnd();

	// culoare usa
	glColor3f(culoare[0], culoare[1], culoare[2]);
	glBegin(GL_POLYGON);
	glVertex2f(22, 2);
	glVertex2f(22, 32);
	glVertex2f(11, 32);
	glVertex2f(11, 2);
	glEnd();

	// clanta
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(14, 17);
	glVertex2f(14, 19);
	glVertex2f(12, 19);
	glVertex2f(12, 17);
	glEnd();

	// colac
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(16, 25);
	glVertex2f(19, 20);
	glVertex2f(19, 21);
	glVertex2f(20, 21);
	glVertex2f(20, 22);
	glVertex2f(21, 22);
	glVertex2f(21, 27);
	glVertex2f(20, 27);
	glVertex2f(20, 28);
	glVertex2f(19, 28);
	glVertex2f(19, 29);
	glVertex2f(14, 29);
	glVertex2f(14, 28);
	glVertex2f(13, 28);
	glVertex2f(13, 27);
	glVertex2f(12, 27);
	glVertex2f(12, 22);
	glVertex2f(13, 22);
	glVertex2f(13, 21);
	glVertex2f(14, 21);
	glVertex2f(14, 20);
	glVertex2f(19, 20);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(18, 23);
	glVertex2f(18, 21);
	glVertex2f(19, 21);
	glVertex2f(19, 22);
	glVertex2f(20, 22);
	glVertex2f(20, 23);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(18, 26);
	glVertex2f(20, 26);
	glVertex2f(20, 27);
	glVertex2f(19, 27);
	glVertex2f(19, 28);
	glVertex2f(18, 28);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(15, 26);
	glVertex2f(15, 28);
	glVertex2f(14, 28);
	glVertex2f(14, 27);
	glVertex2f(13, 27);
	glVertex2f(13, 26);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(15, 23);
	glVertex2f(13, 23);
	glVertex2f(13, 22);
	glVertex2f(14, 22);
	glVertex2f(14, 21);
	glVertex2f(15, 21);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 24);
	glVertex2f(20, 25);
	glVertex2f(19, 25);
	glVertex2f(19, 24);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(17, 27);
	glVertex2f(17, 28);
	glVertex2f(16, 28);
	glVertex2f(16, 27);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(17, 21);
	glVertex2f(17, 22);
	glVertex2f(16, 22);
	glVertex2f(16, 21);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(14, 24);
	glVertex2f(14, 25);
	glVertex2f(13, 25);
	glVertex2f(13, 24);
	glEnd();

	glColor3f(culoare[0], culoare[1], culoare[2]);
	glBegin(GL_POLYGON);
	glVertex2f(18, 23);
	glVertex2f(18, 26);
	glVertex2f(15, 26);
	glVertex2f(15, 23);
	glEnd();
}