#include "stdafx.h"

static void LineBegin(short layer, char ST[11], char ET[11], char Font[20])
{
	ass_out<<"Dialogue:"<<layer<<","<<ST<<","<<ET<<","<<Font<<",NTP,0000,0000,0000,,";
}
static void StyleBegin()
{
	ass_out<<"{";
}
static void StyleEnd()
{
	ass_out<<"}";
}
static void LineEnd(char word[SingleWordLenth])
{
	ass_out<<word<<endl;
}
static void LineEnd()
{
	ass_out<<endl;
}


static void bord(short broad)
{
	ass_out<<(char)A92<<"bord"<<broad;
}
//��ߣ�����Ϊ���

static void xshad(short shadow)
{
	ass_out<<(char)A92<<"xshad"<<shadow;
}
//��x�������Ӱ
static void yshad(short shadow)
{
	ass_out<<(char)A92<<"yshad"<<shadow;
}
//��y�������Ӱ
static void shad(short shadow)
{
	ass_out<<(char)A92<<"shad"<<shadow;
}
//б���໭������Ӱ

static void be(short BE)
{
	ass_out<<(char)A92<<"be"<<BE;
}
//1-�ữ��Ե��0-ȡ��
static void blur(short B)
{
	ass_out<<(char)A92<<"blur"<<B;
}
//�ữ��Ե���������Ử��

static void fn(char Fname[100])
{
	ass_out<<(char)A92<<"fn"<<Fname;
}
//�����Ѷ��������
static void fs(short size)
{
	ass_out<<(char)A92<<"fs"<<size;
}
//���ֺ�

static void fscx(unsigned short X)
{
	ass_out<<(char)A92<<"fscx"<<X;
}
//x��������
static void fscy(unsigned short Y)
{
	ass_out<<(char)A92<<"fscy"<<Y;
}
//y��������

static void fsp(short P)
{
	ass_out<<(char)A92<<"fsp"<<P;
}
//�ּ�࣬P�ĵ�λ������

static void frx(short angle)
{
	ass_out<<(char)A92<<"frx"<<angle;
}
//x����ת
static void fry(short angle)
{
	ass_out<<(char)A92<<"fry"<<angle;
}
//y����ת
static void frz(short angle)
{
	ass_out<<(char)A92<<"frz"<<angle;
}
//z����ת

static void fe(char E[20])
{
	ass_out<<(char)A92<<"fe"<<E;
}
//ǿ������E[20]�����ֱ���

static void Nc(short N, char color[7])
{
	ass_out<<(char)A92<<N<<"c&H"<<color<<"&";
}
//N-������ɫ��λ��1~4��color-BBGGRR��ʽ����ɫ
static void Na(short N, short alpha)
{
	ass_out<<(char)A92<<N<<"a&H"<<hex<<alpha<<"&";
}
//N-����͸���ȵ�λ��1~4��color-FF��ʽ��͸����

static void an(short KB)
{
	ass_out<<(char)A92<<"an"<<KB;
}
//�����ּ��̶�λ1-9

static void tBegin()
{
	ass_out<<(char)A92<<"t(";
}
//ֻ���"t("�ĺ���
static void tBegin(float A)
{
	ass_out<<(char)A92<<"t("<<A<<",";
}
//���"t(A,",A-accel(0~1-�ɿ������>1-�������)
static void tBegin(unsigned int t1, unsigned int t2)
{
	ass_out<<(char)A92<<"t("<<t1<<","<<t2<<",";
}
//���"t(t1,t2,"
static void tBegin(unsigned int t1, unsigned int t2, float A)
{
	ass_out<<(char)A92<<"t("<<t1<<","<<t2<<","<<A<<",";
}
//���"t(t1,t2,A,"
static void tEnd()
{
	ass_out<<")";
}
//���")"

static void move(short x1, short y1, short x2,short y2)
{
	ass_out<<(char)A92<<"move("<<x1<<","<<y1<<","<<x2<<","<<y2<<")";
}
static void move(short x1, short y1, short x2,short y2, unsigned int t1, unsigned int t2)
{
	ass_out<<(char)A92<<"move("<<x1<<","<<y1<<","<<x2<<","<<y2<<","<<t1<<","<<t2<<")";
}
static void pos(short x, short y)
{
	ass_out<<(char)A92<<"pos("<<x<<","<<y<<")";
}

static void org(short x, short y)
{
	ass_out<<(char)A92<<"org("<<x<<","<<y<<")";
}
//�ƶ������ԭ��

static void fade(short a1, short a2, short a3, int t1, int t2, int t3)
{
	ass_out<<(char)A92<<"fade("<<hex<<a1<<","<<hex<<a2<<","<<hex<<a3<<","<<t1<<","<<t2<<","<<t3<<")";
}
static void fad(int t1, int t2)
{
	ass_out<<(char)A92<<"fad("<<t1<<","<<t2<<")";
}

static void clip(short P, char draw[1000])
{
	ass_out<<(char)A92<<"clip("<<P<<","<<draw<<")";
}
//P�Ǳ�����draw�ǻ�ͼ����
static void pN(short N, char draw[1000])
{
	ass_out<<"{"<<(char)A92<<"p"<<N<<"}"<<draw<<"{"<<(char)A92<<"p0}";
}
//N-������draw-��ͼ����
