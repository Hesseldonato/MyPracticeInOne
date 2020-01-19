#include "StdAfx.h"
#include "VSFilter.h"

/*VSFilter*/
std::string VSFilter::LineBegin( short layer, std::string ST, std::string ET, std::string Font )
{
	return "Dialogue:" + IntToStr( layer ) + "," + ST + "," + ET + "," + Font + ",NTP,0000,0000,0000,,";
}
std::string VSFilter::StyleBegin( )
{
	return "{";
}
std::string VSFilter::StyleEnd( )
{
	return "}";
}
std::string VSFilter::LineEnd( std::string word )
{
	return word + "\n";
}
std::string VSFilter::LineEnd( )
{
	return "\n";
}
std::string VSFilter::bord( short broad )
{
	return "\\bord" + IntToStr( broad );
}//��ߣ�����Ϊ���
std::string VSFilter::xshad( short shadow )
{
	return "\\xshad" + IntToStr( shadow );
}//��x�������Ӱ
std::string VSFilter::yshad( short shadow )
{
	return "\\yshad" + IntToStr( shadow );
}//��y�������Ӱ
std::string VSFilter::shad( short shadow )
{
	return "\\shad" + IntToStr( shadow );
}//б���໭������Ӱ
std::string VSFilter::be( short BE )
{
	return "\\be" + IntToStr( BE );
}//1-�ữ��Ե��0-ȡ��
std::string VSFilter::blur( short B )
{
	return "\\blur" + IntToStr( B );
}//�ữ��Ե���������Ử��
std::string VSFilter::fn( std::string Fname )
{
	return "\\fn" + Fname;
}//�����Ѷ��������
std::string VSFilter::fs( short size )
{
	return "\\fs" + IntToStr( size );
}//���ֺ�
std::string VSFilter::fscx( unsigned short X )
{
	return "\\fscx" + IntToStr( X );
}//x��������
std::string VSFilter::fscy( unsigned short Y )
{
	return "\\fscy" + IntToStr( Y );
}//y��������
std::string VSFilter::fsp( short P )
{
	return "\\fsp" + IntToStr( P );
}//�ּ�࣬P�ĵ�λ������
std::string VSFilter::frx( short angle )
{
	return "\\frx" + IntToStr( angle );
}//x����ת��ˮƽ���򣨴���0����ǰ���
std::string VSFilter::fry( short angle )
{
	return "\\fry" + IntToStr( angle );
}//y����ת����ֱ���򣨴���0�������򶫣�
std::string VSFilter::frz( short angle )
{
	return "\\frz" + IntToStr( angle );
}//z����ת�����ⷽ�򣨴���0����ʱ�룩
std::string VSFilter::Nc( short N, char color[7] )
{
	return "\\" + IntToStr( N ) + "c&H" + color + "&";
}//N-������ɫ��λ��1~4��color-BBGGRR��ʽ����ɫ
std::string VSFilter::Na( short N, short alpha )
{
	return "\\" + IntToStr( N ) + "a&H" + DecToHex( alpha ) + "&";
}//N-����͸���ȵ�λ��1~4��color-FF��ʽ��͸����
std::string VSFilter::an( short KB )
{
	return "\\an" + IntToStr( KB );
}//�����ּ��̶�λ1-9
std::string VSFilter::tBegin( )
{
	return "\\t(";
}//ֻ���"t("�ĺ���
std::string VSFilter::tBegin( float A )
{
	return "\\t(" + FloatToStr( A ) + ",";
}//���"t(A,",A-accel(0~1-�ɿ������>1-�������)
std::string VSFilter::tBegin( int t1, int t2 )
{
	return "\\t(" + IntToStr( t1 ) + "," + IntToStr( t2 ) + ",";
}//���"t(t1,t2,"
std::string VSFilter::tBegin( int t1, int t2, float A )
{
	return "\\t(" + IntToStr( t1 ) + "," + IntToStr( t2 ) + "," + FloatToStr( A ) + ",";
}//���"t(t1,t2,A,"
std::string VSFilter::tEnd( )
{
	return ")";
}//���")"
std::string VSFilter::move( short x1, short y1, short x2,short y2 )
{
	return "\\move(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + ")";
}
std::string VSFilter::move( short x1, short y1, short x2,short y2, int t1, int t2 )
{
	return "\\move(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + "," + IntToStr( t1 ) + "," + IntToStr( t2 ) + ")";
}
std::string VSFilter::pos( short x, short y )
{
	return "\\pos(" + IntToStr( x ) + "," + IntToStr( y ) + ")";
}
std::string VSFilter::org( short x, short y )
{
	return "\\org(" + IntToStr( x ) + "," + IntToStr( y ) + ")";
}//�ƶ������ԭ��
std::string VSFilter::fade( short a1, short a2, short a3, int t1, int t2, int t3 )
{
	return "\\fade(" + DecToHex( a1 ) + "," + DecToHex( a2 ) + "," + DecToHex( a3 ) + "," + IntToStr( t1 ) + "," + IntToStr( t2 ) + "," + IntToStr( t3 ) + ")";
}
std::string VSFilter::fad( int t1, int t2 )
{
	return "\\fad(" + IntToStr( t1 ) + "," + IntToStr( t2 ) + ")";
}
std::string VSFilter::clip( short x1, short y1, short x2, short y2 )
{
	return "\\clip(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + ")";
}
std::string VSFilter::clip( short P, std::string draw )
{
	return "\\clip(" + IntToStr( P ) + "," + draw + ")";
}//P�Ǳ�����draw�ǻ�ͼ����
std::string VSFilter::pN( short N, std::string draw )
{
	return "{\\p" + IntToStr( N ) + "}" + draw + "{\\p0}";
}//N-������draw-��ͼ����

/*VSFilterMod*/
std::string VSFilter::fsc( unsigned short scale )
{
	return "\\fsc" +IntToStr( scale );
}//����Ŵ�%
std::string VSFilter::fsvp( short leading )
{
	return "\\fsvp" + IntToStr( leading );
}//����ƫ��
std::string VSFilter::frs( short angle )
{
	return "\\frs" + IntToStr( angle );
}//������б
std::string VSFilter::z( short arg )
{
	return "\\z" + IntToStr( arg );
}//z����
std::string VSFilter::distort( float u1, float v1, float u2, float v2, float u3, float v3 )
{
	return "\\distort(" + FloatToStr( u1 ) + "," + FloatToStr( v1 ) + "," + FloatToStr( u2 ) + "," + FloatToStr( v2 ) + "," + FloatToStr( u3 ) + "," + FloatToStr( v3 ) + ")";
}//Ť������,ͨ���ƶ������������ȷ����Ե�����
std::string VSFilter::rnd( short arg )
{
	return "\\rnd" + IntToStr( arg );
}
std::string VSFilter::rndx( short arg )
{
	return "\\rndx" + IntToStr( arg );
}
std::string VSFilter::rndy( short arg )
{
	return "\\rndy" + IntToStr( arg );
}
std::string VSFilter::rndz( short arg )
{
	return "\\rndz" + IntToStr( arg );
}//�߽����
std::string VSFilter::Nvc( short N, char LT[7], char RT[7], char LB[7], char RB[7] )
{
	return "\\" + IntToStr( N ) + "vc(&H" + LT + "&,&H" + RT + "&,&H" + LB + "&,&H" + RB + "&)";
}
std::string VSFilter::Nva( short N, short LT, short RT, short LB, short RB )
{
	return "\\" + IntToStr( N ) + "va(&H" + DecToHex( LT ) + "&,&H" + DecToHex( RT ) + "&,&H" + DecToHex( LB ) + "&,&H" + DecToHex( RB ) + "&)";
}//����ɫ,����͸��
std::string VSFilter::Nimg(short N, std::string path)
{
	return "\\" + IntToStr( N ) + "img(" + path + ")";
}
std::string VSFilter::Nimg(short N, std::string path, short xoffset, short yoffset)
{
	return "\\" + IntToStr( N ) + "img(" + path + "," + IntToStr( xoffset ) + "," + IntToStr( yoffset ) + ")";
}//ͼƬ����ɫ���
std::string VSFilter::mover( short x1, short y1,short x2,short y2,short angle1, short angle2, short radius1, short radius2 )
{
	return "\\mover(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + "," + IntToStr( angle1 ) + "," + IntToStr( angle2 ) + "," + IntToStr( radius1 ) + "," + IntToStr( radius2 ) + ")";
}
std::string VSFilter::mover( short x1, short y1,short x2,short y2,short angle1, short angle2, short radius1, short radius2, int t1, int t2 )
{
	return "\\mover(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + "," + IntToStr( angle1 ) + "," + IntToStr( angle2 ) + "," + IntToStr( radius1 ) + "," + IntToStr( radius2 ) + "," + IntToStr( t1 ) + "," + IntToStr( t2 ) + ")";
}//�����˶�:angle1��ʼʱ��ת�Ƕ�;angle2����ʱ��ת�Ƕ�;radius1��ʼʱ��ת�뾶;radius2����ʱ��ת�뾶
std::string VSFilter::moves3( short x1, short y1, short x2, short y2, short x3, short y3 )
{
	return "\\moves3(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + "," + IntToStr( x3 ) + "," + IntToStr( y3 ) + ")";
}
std::string VSFilter::moves3( short x1, short y1, short x2, short y2, short x3, short y3, int t1, int t2 )
{
	return "\\moves3(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + "," + IntToStr( x3 ) + "," + IntToStr( y3 ) + "," + IntToStr( t1 ) + "," + IntToStr( t2 ) + ")";
}
std::string VSFilter::moves4( short x1, short y1, short x2, short y2, short x3, short y3, short x4, short y4 )
{
	return "\\moves4(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + "," + IntToStr( x3 ) + "," + IntToStr( y3 ) + "," + IntToStr( x4 ) + "," + IntToStr( y4 ) + ")";
}
std::string VSFilter::moves4( short x1, short y1, short x2, short y2, short x3, short y3, short x4, short y4, int t1, int t2 )
{
	return "\\moves4(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + "," + IntToStr( x3 ) + "," + IntToStr( y3 ) + "," + IntToStr( x4 ) + "," + IntToStr( y4 ) + "," + IntToStr( t1 ) + "," + IntToStr( t2 ) + ")";
}//����ʾ��������˶�
std::string VSFilter::jitter( short left, short right, short up, short down, float period )
{
	return "\\jitter(" + IntToStr( left ) + "," + IntToStr( right ) + "," + IntToStr( up ) + "," + IntToStr( down ) + "," + FloatToStr( period ) + ")";
}
std::string VSFilter::jitter( short left, short right, short up, short down, float period, short seed )
{
	return "\\jitter(" + IntToStr( left ) + "," + IntToStr( right ) + "," + IntToStr( up ) + "," + IntToStr( down ) + "," + FloatToStr( period ) + "," + IntToStr( seed ) + ")";
}//����
std::string VSFilter::movevc( short x1, short y1 )
{
	return "\\movevc(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + ")";
}
std::string VSFilter::movevc( short x1, short y1, short x2, short y2 )
{
	return "\\movevc(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + ")";
}
std::string VSFilter::movevc( short x1, short y1, short x2, short y2, int t1, int t2 )
{
	return "\\movevc(" + IntToStr( x1 ) + "," + IntToStr( y1 ) + "," + IntToStr( x2 ) + "," + IntToStr( y2 ) + "," + IntToStr( t1 ) + "," + IntToStr( t2 ) + ")";
}


std::string VSFilter::DecToHex( short DEC )
{
	std::string A;
	if( DEC < 16 ) {
		switch( DEC ) {
			case 10:   A += "A"; break;
			case 11:   A += "B"; break;
			case 12:   A += "C"; break;
			case 13:   A += "D"; break;
			case 14:   A += "E"; break;
			case 15:   A += "F"; break;
			default:   char TE[ 10 ]; memset( TE, 10, '\0'); _itoa_s( DEC, TE, 10 ); A += TE;
		}
	}
	else {
		A += DecToHex( DEC / 16 );
		switch( DEC % 16 ) {
			case 10:   A += "A"; break;
			case 11:   A += "B"; break;
			case 12:   A += "C"; break;
			case 13:   A += "D"; break;
			case 14:   A += "E"; break;
			case 15:   A += "F"; break;
			default:   char TE[ 10 ]; memset( TE,10,'\0'); _itoa_s( DEC % 16, TE, 10 ); A += TE;
		}
	}
	return A;
}
std::string VSFilter::FloatToStr( float Float )
{
	const int KEEP = 3;
	std::string TEMP1, TEMP2;
	float t = Float * (int)pow( (double)10, KEEP );
	int tt = ( int )t;
	int Length = 1;
	while ( 1 ) {
		if ( tt / (int)pow( (double)10, Length ) > 0 ) Length ++;
		else break;
	}
	for ( int i = Length; i > 0; i -- ) {
		TEMP1 += IntToStr( tt / (int)pow( (double)10, i - 1 ) );
		tt -= ( tt / (int)pow( (double)10, i - 1 ) ) * (int)pow( (double)10, i - 1 );
	}
	bool PointOrNot = false;
	int L = TEMP1.length( );
	for ( int i = 0; i < L; i ++ ) {
		if ( i == L - KEEP ) TEMP2 += ".";
		TEMP2 += TEMP1[ i ];
	}
	return TEMP2;
}
std::string VSFilter::IntToStr( int Int )
{
	char TE[ 10 ];
	memset( TE, 10, '\0');
	_itoa_s( Int, TE, 10 );
	std::string _TE = TE;
	return _TE;
}