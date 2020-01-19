#include "stdafx.h"

static void fsc(unsigned short scale)
{
	ass_out<<(char)A92<<"fsc"<<scale;
}
//����Ŵ�%

static void fsvp(short leading)
{
	ass_out<<(char)A92<<"fsvp"<<leading;
}
//����ƫ��
static void frs(short angle)
{
	ass_out<<(char)A92<<"frs"<<angle;
}
//������б

static void z(short arg)
{
	ass_out<<(char)A92<<"z"<<arg;
}
//z����

static void distort(float u1, float v1, float u2, float v2, float u3, float v3)
{
	ass_out<<(char)A92<<"distort("<<u1<<","<<v1<<","<<u2<<","<<v2<<","<<u3<<","<<v3<<")";
}
//Ť������,ͨ���ƶ������������ȷ����Ե�����

static void rnd(short arg)
{
	ass_out<<(char)A92<<"rnd"<<arg;
}
static void rndx(short arg)
{
	ass_out<<(char)A92<<"rndx"<<arg;
}
static void rndy(short arg)
{
	ass_out<<(char)A92<<"rndy"<<arg;
}
static void rndz(short arg)
{
	ass_out<<(char)A92<<"rndz"<<arg;
}
//�߽����

static void Nvc(short N, char LT[7], char RT[7], char LB[7], char RB[7])
{
	ass_out<<(char)A92<<N<<"vc(&H"<<LT<<"&,&H"<<RT<<"&,&H"<<LB<<"&,&H"<<RB<<"&)";
}
static void Nva(short N, short LT, short RT, short LB, short RB)
{
	ass_out<<(char)A92<<N<<"va(&H"<<hex<<LT<<"&,&H"<<hex<<RT<<"&,&H"<<hex<<LB<<"&,&H"<<hex<<RB<<"&)";
}
//����ɫ,����͸��

static void Nimg(short N, char path[100])
{
	ass_out<<(char)A92<<N<<"img("<<path<<")";
}
static void Nimg(short N, char path[100], short xoffset, short yoffset)
{
	ass_out<<(char)A92<<N<<"img("<<path<<","<<xoffset<<","<<yoffset<<")";
}
//ͼƬ����ɫ���

static void mover(short x1, short y1,short x2,short y2,short angle1, short angle2, short radius1, short radius2)
{
	ass_out<<(char)A92<<"mover("<<x1<<","<<y1<<","<<x2<<","<<y2<<","<<angle1<<","<<angle2<<","<<radius1<<","<<radius2<<")";
}
static void mover(short x1, short y1,short x2,short y2,short angle1, short angle2, short radius1, short radius2, int t1, int t2)
{
	ass_out<<(char)A92<<"mover("<<x1<<","<<y1<<","<<x2<<","<<y2<<","<<angle1<<","<<angle2<<","<<radius1<<","<<radius2<<","<<t1<<","<<t2<<")";
}
//�����˶�:angle1��ʼʱ��ת�Ƕ�;angle2����ʱ��ת�Ƕ�;radius1��ʼʱ��ת�뾶;radius2����ʱ��ת�뾶
static void moves3(short x1, short y1, short x2, short y2, short x3, short y3)
{
	ass_out<<(char)A92<<"moves3("<<x1<<","<<y1<<","<<x2<<","<<y2<<","<<x3<<","<<y3<<")";
}
static void moves3(short x1, short y1, short x2, short y2, short x3, short y3, int t1, int t2)
{
	ass_out<<(char)A92<<"moves3("<<x1<<","<<y1<<","<<x2<<","<<y2<<","<<x3<<","<<y3<<","<<t1<<","<<t2<<")";
}
static void moves4(short x1, short y1, short x2, short y2, short x3, short y3, short x4, short y4)
{
	ass_out<<(char)A92<<"moves3("<<x1<<","<<y1<<","<<x2<<","<<y2<<","<<x3<<","<<y3<<","<<x4<<","<<y4<<")";
}
static void moves4(short x1, short y1, short x2, short y2, short x3, short y3, short x4, short y4, int t1, int t2)
{
	ass_out<<(char)A92<<"moves3("<<x1<<","<<y1<<","<<x2<<","<<y2<<","<<x3<<","<<y3<<","<<x4<<","<<y4<<","<<t1<<","<<t2<<")";
}
//����ʾ��������˶�

static void jitter(short left, short right, short up, short down, float period)
{
	ass_out<<(char)A92<<"jitter("<<left<<","<<right<<","<<up<<","<<down<<","<<period<<")";
}
static void jitter(short left, short right, short up, short down, float period, short seed)
{
	ass_out<<(char)A92<<"jitter("<<left<<","<<right<<","<<up<<","<<down<<","<<period<<","<<seed<<")";
}
//����

static void movevc(short x1, short y1)
{
	ass_out<<(char)A92<<"movevc("<<x1<<","<<y1<<")";
}
static void movevc(short x1, short y1, short x2, short y2)
{
	ass_out<<(char)A92<<"movevc("<<x1<<","<<y1<<","<<x2<<","<<y2<<")";
}
static void movevc(short x1, short y1, short x2, short y2, int t1, int t2)
{
	ass_out<<(char)A92<<"movevc("<<x1<<","<<y1<<","<<x2<<","<<y2<<","<<t1<<","<<t2<<")";
}
//�ƶ�ʸ��clip