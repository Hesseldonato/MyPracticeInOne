#include "..\CommenHead.h"

static void LineBegin(short layer, string ST, string ET, char Font[20])
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(layer,TE,10);
	ass_out<<"Dialogue:"<<TE<<','<<ST<<','<<ET<<','<<Font<<",NTP,0000,0000,0000,,";
}
static void LineBegin(short layer, string ST, string ET, char Font)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(layer,TE,10);
	ass_out<<"Dialogue:"<<TE<<','<<ST<<','<<ET<<','<<Font<<",NTP,0000,0000,0000,,";
}
static void StyleBegin()
{
	ass_out<<'{';
}
static void StyleEnd()
{
	ass_out<<'}';
}
static void LineEnd(char word[SingleWordLenth])
{
	ass_out<<word<<endl;
}
static void LineEnd(char word)
{
	ass_out<<word<<endl;
}
static void LineEnd(short word)
{
	ass_out<<word<<endl;
}
static void LineEnd()
{
	ass_out<<endl;
}


static void bord(short broad)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(broad,TE,10);
	ass_out<<"\\bord"<<TE;
}
//��ߣ�����Ϊ���

static void xshad(short shadow)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(shadow,TE,10);
	ass_out<<"\\xshad"<<TE;
}
//��x�������Ӱ
static void yshad(short shadow)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(shadow,TE,10);
	ass_out<<"\\yshad"<<TE;
}
//��y�������Ӱ
static void shad(short shadow)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(shadow,TE,10);
	ass_out<<"\\shad"<<TE;
}
//б���໭������Ӱ

static void be(short BE)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(BE,TE,10);
	ass_out<<"\\be"<<TE;
}
//1-�ữ��Ե��0-ȡ��
static void blur(short B)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(B,TE,10);
	ass_out<<"\\blur"<<TE;
}
//�ữ��Ե���������Ử��

static void fn(char Fname[100])
{
	ass_out<<"\\fn"<<Fname;
}
//�����Ѷ��������
static void fs(short size)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(size,TE,10);
	ass_out<<"\\fs"<<TE;
}
//���ֺ�

static void fscx(unsigned short X)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(X,TE,10);
	ass_out<<"\\fscx"<<TE;
}
//x��������
static void fscy(unsigned short Y)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(Y,TE,10);
	ass_out<<"\\fscy"<<TE;
}
//y��������

static void fsp(short P)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(P,TE,10);
	ass_out<<"\\fsp"<<TE;
}
//�ּ�࣬P�ĵ�λ������

static void frx(short angle)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(angle,TE,10);
	ass_out<<"\\frx"<<TE;
}
//x����ת
static void fry(short angle)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(angle,TE,10);
	ass_out<<"\\fry"<<TE;
}
//y����ת
static void frz(short angle)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(angle,TE,10);
	ass_out<<"\\frz"<<TE;
}
//z����ת

static void fe(char E[20])
{
	ass_out<<"\\fe"<<E;
}
//ǿ������E[20]�����ֱ���

static void Nc(short N, char color[7])
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(N,TE,10);
	ass_out<<'\\'<<TE<<"c&H"<<color<<"&";
}
//N-������ɫ��λ��1~4��color-BBGGRR��ʽ����ɫ
static void Na(short N, short alpha)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(N,TE,10);
	ass_out<<'\\'<<TE<<"a&H"<<hex<<alpha<<"&";
}
//N-����͸���ȵ�λ��1~4��color-FF��ʽ��͸����

static void an(short KB)
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(KB,TE,10);
	ass_out<<"\\an"<<TE;
}
//�����ּ��̶�λ1-9

static void tBegin()
{
	ass_out<<"\\t(";
}
//ֻ���"t("�ĺ���
static void tBegin(float A)
{
	ass_out<<"\\t("<<A<<',';
}
//���"t(A,",A-accel(0~1-�ɿ������>1-�������)
static void tBegin(unsigned int t1, unsigned int t2)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(t1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(t2,TE2,10);
	ass_out<<"\\t("<<TE1<<','<<TE2<<',';
}
//���"t(t1,t2,"
static void tBegin(unsigned int t1, unsigned int t2, float A)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(t1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(t2,TE2,10);
	ass_out<<"\\t("<<TE1<<','<<TE2<<','<<A<<',';
}
//���"t(t1,t2,A,"
static void tEnd()
{
	ass_out<<')';
}
//���')'

static void move(short x1, short y1, short x2,short y2)
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
	ass_out<<"\\move("<<TE1<<','<<TE2<<','<<TE3<<','<<TE4<<')';
}
static void move(short x1, short y1, short x2,short y2, unsigned int t1, unsigned int t2)
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
	_itoa_s(t1,TE5,10);
	char TE6[10];
	memset(TE6,10,'\0');
	_itoa_s(t2,TE6,10);
	ass_out<<"\\move("<<TE1<<','<<TE2<<','<<TE3<<','<<TE4<<','<<TE5<<','<<TE6<<')';
}
static void pos(short x, short y)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y,TE2,10);
	ass_out<<"\\pos("<<TE1<<','<<TE2<<')';
}

static void org(short x, short y)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(x,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(y,TE2,10);
	ass_out<<"\\org("<<TE1<<','<<TE2<<')';
}
//�ƶ������ԭ��

static void fade(short a1, short a2, short a3, int t1, int t2, int t3)
{
	char TE4[10];
	memset(TE4,10,'\0');
	_itoa_s(t1,TE4,10);
	char TE5[10];
	memset(TE5,10,'\0');
	_itoa_s(t2,TE5,10);
	char TE6[10];
	memset(TE6,10,'\0');
	_itoa_s(t3,TE6,10);
	ass_out<<"\\fade("<<hex<<a1<<','<<hex<<a2<<','<<hex<<a3<<','<<TE4<<','<<TE5<<','<<TE6<<')';
}
static void fad(int t1, int t2)
{
	char TE1[10];
	memset(TE1,10,'\0');
	_itoa_s(t1,TE1,10);
	char TE2[10];
	memset(TE2,10,'\0');
	_itoa_s(t2,TE2,10);
	ass_out<<"\\fad("<<TE1<<','<<TE2<<')';
}
static void clip(short x1, short y1, short x2, short y2)
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
	ass_out<<"\\clip("<<TE1<<','<<TE2<<','<<TE3<<','<<TE4<<')';
}
static void clip(short P, char draw[1000])
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(P,TE,10);
	ass_out<<"\\clip("<<TE<<','<<draw<<')';
}
//P�Ǳ�����draw�ǻ�ͼ����
static void pN(short N, char draw[1000])
{
	char TE[10];
	memset(TE,10,'\0');
	_itoa_s(N,TE,10);
	ass_out<<'{'<<"\\p"<<TE<<'}'<<draw<<'{'<<"\\p0}";
}
//N-������draw-��ͼ����
