#pragma once
#include <string>
#include <cmath>

class VSFilter
{

	/*Ϊ����Union�ﱣ�ּ����ԣ���Union�����к���ǰ����»���'_'�����ﲻҪ��*/

public:
	/*VSFilter*/
	std::string LineBegin( short layer, std::string ST, std::string ET, std::string Font );
	std::string StyleBegin( );
	std::string StyleEnd( );
	std::string LineEnd( std::string word );
	std::string LineEnd( );//Notice
	std::string bord( short broad );//��ߣ�����Ϊ���
	std::string xshad( short shadow );//��x�������Ӱ
	std::string yshad( short shadow );//��y�������Ӱ
	std::string shad( short shadow );//б���໭������Ӱ
	std::string be( short BE );//1-�ữ��Ե��0-ȡ��
	std::string blur( short B );//�ữ��Ե���������Ử��
	std::string fn( std::string Fname );//�����Ѷ��������
	std::string fs( short size );//���ֺ�
	std::string fscx( unsigned short X );//x��������
	std::string fscy( unsigned short Y );//y��������
	std::string fsp( short P );//�ּ�࣬P�ĵ�λ������
	std::string frx( short angle );//x����ת��ˮƽ���򣨴���0����ǰ���
	std::string fry( short angle );//y����ת����ֱ���򣨴���0�������򶫣�
	std::string frz( short angle );//z����ת�����ⷽ�򣨴���0����ʱ�룩
	std::string Nc( short N, char color[ 7 ] );//N-������ɫ��λ��1~4��color-BBGGRR��ʽ����ɫ
	std::string Na( short N, short alpha );//N-����͸���ȵ�λ��1~4��color-FF��ʽ��͸����
	std::string an( short KB );//�����ּ��̶�λ1-9
	std::string tBegin( );//ֻ���"t("�ĺ���
	std::string tBegin( float A );//���"t(A,",A-accel(0~1-�ɿ������>1-�������)
	std::string tBegin( int t1, int t2 );//���"t(t1,t2,"
	std::string tBegin( int t1, int t2, float A );//���"t(t1,t2,A,"
	std::string tEnd( );//���')'
	std::string move( short x1, short y1, short x2,short y2 );
	std::string move( short x1, short y1, short x2,short y2, int t1, int t2 );
	std::string pos( short x, short y );
	std::string org( short x, short y );//�ƶ������ԭ��
	std::string fade( short a1, short a2, short a3, int t1, int t2, int t3 );
	std::string fad( int t1, int t2 );
	std::string clip( short x1, short y1, short x2, short y2 );
	std::string clip( short P, std::string draw );//P�Ǳ�����draw�ǻ�ͼ����
	std::string pN( short N, std::string draw );//N-������draw-��ͼ����
	/*VSFilterMod*/
	std::string fsc(unsigned short scale );//����Ŵ�%
	std::string fsvp( short leading );//����ƫ��
	std::string frs( short angle );//������б
	std::string z( short arg );//z����
	std::string distort( float u1, float v1, float u2, float v2, float u3, float v3 );//Ť������,ͨ���ƶ������������ȷ����Ե�����
	std::string rnd( short arg );
	std::string rndx( short arg );
	std::string rndy( short arg );
	std::string rndz( short arg );//�߽����
	std::string Nvc( short N, char LT[ 7 ], char RT[ 7 ], char LB[ 7 ], char RB[ 7 ] );
	std::string Nva( short N, short LT, short RT, short LB, short RB );//����ɫ,����͸��
	std::string Nimg( short N, std::string path );
	std::string Nimg( short N, std::string path, short xoffset, short yoffset );//ͼƬ����ɫ���
	std::string mover( short x1, short y1,short x2,short y2,short angle1, short angle2, short radius1, short radius2 );
	std::string mover( short x1, short y1,short x2,short y2,short angle1, short angle2, short radius1, short radius2, int t1, int t2 );//�����˶�:angle1��ʼʱ��ת�Ƕ�;angle2����ʱ��ת�Ƕ�;radius1��ʼʱ��ת�뾶;radius2����ʱ��ת�뾶
	std::string moves3( short x1, short y1, short x2, short y2, short x3, short y3 );
	std::string moves3( short x1, short y1, short x2, short y2, short x3, short y3, int t1, int t2 );
	std::string moves4( short x1, short y1, short x2, short y2, short x3, short y3, short x4, short y4 );
	std::string moves4( short x1, short y1, short x2, short y2, short x3, short y3, short x4, short y4, int t1, int t2 );//����ʾ��������˶�
	std::string jitter( short left, short right, short up, short down, float period );
	std::string jitter( short left, short right, short up, short down, float period, short seed );//����
	std::string movevc( short x1, short y1 );
	std::string movevc( short x1, short y1, short x2, short y2 );
	std::string movevc( short x1, short y1, short x2, short y2, int t1, int t2 );//�ƶ�ʸ��clip

private:
	std::string DecToHex( short DEC );                             //��0-255������ת���ַ��͵�hex
	std::string FloatToStr( float Float );                         //��������ת�����ַ���
	std::string IntToStr( int Int );                               //������ת���ַ���
};
