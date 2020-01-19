#include "..\CommenHead.h"

static void fsc(unsigned short scale)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(scale,TE,10);
	ass_out<<"\\fsc"<<TE;
}
//����Ŵ�%

static void fsvp(short leading)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(leading,TE,10);
	ass_out<<"\\fsvp"<<TE;
}
//����ƫ��
static void frs(short angle)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(angle,TE,10);
	ass_out<<"\\frs"<<TE;
}
//������б

static void z(short arg)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(arg,TE,10);
	ass_out<<"\\z"<<TE;
}
//z����

static void distort(float u1, float v1, float u2, float v2, float u3, float v3)
{
	ass_out<<"\\distort("<<u1<<","<<v1<<","<<u2<<","<<v2<<","<<u3<<","<<v3<<")";
}
//Ť������,ͨ���ƶ������������ȷ����Ե�����

static void rnd(short arg)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(arg,TE,10);
	ass_out<<"\\rnd"<<TE;
}
static void rndx(short arg)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(arg,TE,10);
	ass_out<<"\\rndx"<<TE;
}
static void rndy(short arg)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(arg,TE,10);
	ass_out<<"\\rndy"<<TE;
}
static void rndz(short arg)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(arg,TE,10);
	ass_out<<"\\rndz"<<TE;
}
//�߽����

static void Nvc(short N, char LT[7], char RT[7], char LB[7], char RB[7])
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(N,TE,10);
	ass_out<<'\\'<<TE<<"vc(&H"<<LT<<"&,&H"<<RT<<"&,&H"<<LB<<"&,&H"<<RB<<"&)";
}
static void Nva(short N, short LT, short RT, short LB, short RB)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(N,TE,10);
	ass_out<<'\\'<<TE<<"va(&H"<<hex<<LT<<"&,&H"<<hex<<RT<<"&,&H"<<hex<<LB<<"&,&H"<<hex<<RB<<"&)";
}
//����ɫ,����͸��

static void Nimg(short N, char path[100])
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(N,TE,10);
	ass_out<<'\\'<<TE<<"img("<<path<<")";
}
static void Nimg(short N, char path[100], short xoffset, short yoffset)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(N,TE,10);
	ass_out<<'\\'<<TE<<"img("<<path<<","<<xoffset<<","<<yoffset<<")";
}
//ͼƬ����ɫ���

static void mover(short x1, short y1,short x2,short y2,short angle1, short angle2, short radius1, short radius2)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(x2,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(y2,TE4,10);
	char TE5[10];
	memset(TE5,10,'\0');
	_itoa_s(angle1,TE5,10);
	char TE6[10];
	memset(TE6,10,'\0');
	_itoa_s(angle2,TE6,10);
	char TE7[10];
	memset(TE7,10,'\0');
	_itoa_s(radius1,TE7,10);
	char TE8[10];
	memset(TE8,10,'\0');
	_itoa_s(radius2,TE8,10);
	ass_out<<"\\mover("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<TE5<<","<<TE6<<","<<TE7<<","<<TE8<<")";
}
static void mover(short x1, short y1,short x2,short y2,short angle1, short angle2, short radius1, short radius2, int t1, int t2)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(x2,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(y2,TE4,10);
	char TE5[10];
	memset(TE5,10,'\0');
	_itoa_s(angle1,TE5,10);
	char TE6[10];
	memset(TE6,10,'\0');
	_itoa_s(angle2,TE6,10);
	char TE7[10];
	memset(TE7,10,'\0');
	_itoa_s(radius1,TE7,10);
	char TE8[10];
	memset(TE8,10,'\0');
	_itoa_s(radius2,TE8,10);
	char TE9[10];
	memset(TE9,10,'\0');
	_itoa_s(t1,TE9,10);
	char TE0[10];
	memset(TE0,10,'\0');
	_itoa_s(t2,TE0,10);
	ass_out<<"\\mover("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<TE5<<","<<TE6<<","<<TE7<<","<<TE8<<","<<TE9<<","<<TE0<<")";
}
//�����˶�:angle1��ʼʱ��ת�Ƕ�;angle2����ʱ��ת�Ƕ�;radius1��ʼʱ��ת�뾶;radius2����ʱ��ת�뾶
static void moves3(short x1, short y1, short x2, short y2, short x3, short y3)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(x2,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(y2,TE4,10);
	char TE5[10];
	memset(TE5,10,'\0');
	_itoa_s(x3,TE5,10);
	char TE6[10];
	memset(TE6,10,'\0');
	_itoa_s(y3,TE6,10);
	ass_out<<"\\moves3("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<TE5<<","<<TE6<<")";
}
static void moves3(short x1, short y1, short x2, short y2, short x3, short y3, int t1, int t2)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(x2,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(y2,TE4,10);
	char TE5[10];
	memset(TE5,10,'\0');
	_itoa_s(x3,TE5,10);
	char TE6[10];
	memset(TE6,10,'\0');
	_itoa_s(y3,TE6,10);
	char TE7[10];
	memset(TE7,10,'\0');
	_itoa_s(t1,TE7,10);
	char TE8[10];
	memset(TE8,10,'\0');
	_itoa_s(t2,TE8,10);
	ass_out<<"\\moves3("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<TE5<<","<<TE6<<","<<TE7<<","<<TE8<<")";
}
static void moves4(short x1, short y1, short x2, short y2, short x3, short y3, short x4, short y4)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(x2,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(y2,TE4,10);
	char TE5[10];
	memset(TE5,10,'\0');
	_itoa_s(x3,TE5,10);
	char TE6[10];
	memset(TE6,10,'\0');
	_itoa_s(y3,TE6,10);
	char TE7[10];
	memset(TE7,10,'\0');
	_itoa_s(x4,TE7,10);
	char TE8[10];
	memset(TE8,10,'\0');
	_itoa_s(y4,TE8,10);
	ass_out<<"\\moves4("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<TE5<<","<<TE6<<","<<TE7<<","<<TE8<<")";
}
static void moves4(short x1, short y1, short x2, short y2, short x3, short y3, short x4, short y4, int t1, int t2)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(x2,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(y2,TE4,10);
	char TE5[10];
	memset(TE5,10,'\0');
	_itoa_s(x3,TE5,10);
	char TE6[10];
	memset(TE6,10,'\0');
	_itoa_s(y3,TE6,10);
	char TE7[10];
	memset(TE7,10,'\0');
	_itoa_s(x4,TE7,10);
	char TE8[10];
	memset(TE8,10,'\0');
	_itoa_s(y4,TE8,10);
	char TE9[10];
	memset(TE9,10,'\0');
	_itoa_s(t1,TE9,10);
	char TE0[10];
	memset(TE0,10,'\0');
	_itoa_s(t2,TE0,10);
	ass_out<<"\\moves4("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<TE5<<","<<TE6<<","<<TE7<<","<<TE8<<","<<TE9<<","<<TE0<<")";
}
//����ʾ��������˶�

static void jitter(short left, short right, short up, short down, float period)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(left,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(right,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(up,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(down,TE4,10);
	ass_out<<"\\jitter("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<period<<")";
}
static void jitter(short left, short right, short up, short down, float period, short seed)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(left,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(right,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(up,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(down,TE4,10);
	char TE5[10];
	memset(TE5,10,'\0');
	_itoa_s(seed,TE5,10);
	ass_out<<"\\jitter("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<period<<","<<TE5<<")";
}
//����

static void movevc(short x1, short y1)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	ass_out<<"\\movevc("<<TE1<<","<<TE2<<")";
}
static void movevc(short x1, short y1, short x2, short y2)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(x2,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(y2,TE4,10);
	ass_out<<"\\movevc("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<")";
}
static void movevc(short x1, short y1, short x2, short y2, int t1, int t2)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y1,TE2,10);
	char TE3[10];
	memset(TE3,10,'\0');
	_itoa_s(x2,TE3,10);
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(y2,TE4,10);
	char TE9[10];
	memset(TE9,10,'\0');
	_itoa_s(t1,TE9,10);
	char TE0[10];
	memset(TE0,10,'\0');
	_itoa_s(t2,TE0,10);
	ass_out<<"\\movevc("<<TE1<<","<<TE2<<","<<TE3<<","<<TE4<<","<<TE9<<","<<TE0<<")";
}
//�ƶ�ʸ��clip