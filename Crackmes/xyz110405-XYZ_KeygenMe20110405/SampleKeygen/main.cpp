#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
/*    �㷨˼·    */
/*
    1.����һ������С��20����A����������д�д
    2.���ճ���С��50��ͨ����B������
    3.ȡA�ĳ��ȴ浽large��,large *= 2, large += 10,
	4.���large != 50, large -= 7, 
	5.�����һ����ĸ�Ǵ�д��large += 2
	6.������һ����ĸ�Ǵ�д��large += 3
	7.���B.length( )�Ƿ����large
    8.������д�浽һ��string C�У���¼����LC
	9.��һ������X = large / C.length( );
   10.�жϴ�д�Ƿ���C[ i ] =? B[ i * X ]������ͨ��
   11.�������ĸ�����C.length( ) != A.length( ),������ĸ�������ڿ�λ,���п�,������xyz
*/

char XYZ( short x )
{
	if ( x == 1 ) return 'x';
	else if ( x == 2 ) return 'y';
	else if ( x == 0 ) return 'z';
	else return '0';
}
int main(int argc, char *argv[])
{
    short large;
    string A, B, C, D;
    char CC[ 51 ], DD[ 51 ];
    cout << "Input: " ;
    cin >> A;
    //1.
    //cin >> B;
    //2.
    cout <<"2"<<endl;
    large = A.length( );
    cout << A.length( )<<endl;
    large *= 2;
    large +=10;//3.
    cout <<"3"<<endl;
    if ( large != 50 ) large -= 7;//4.
    cout <<"large = "<<large<<endl;
    cout <<"4"<<endl;
    if ( 64 < ( short )A[ 0 ] && ( short )A[ 0 ] < 91 ) large += 2;//5.
    
    cout <<"large = "<<large<<endl;
    cout <<"5"<<endl;
    if ( 64 < ( short )A[ A.length( ) - 1 ] && ( short )A[ A.length( ) - 1 ] < 91 ) large += 3;//6.
    cout <<"6"<<endl;
    cout <<"large = "<<large<<endl;
    //7
    //string C;
    short Ct = 0;
    for ( short i = 0; i < A.length( ); i ++ ) {
        if ( 64 < ( short )A[ i ] && ( short )A[ i ] < 91 ) {
            CC[ Ct ] = A[ i ];
            cout <<"CC[ "<<Ct<<" ] = "<<CC[Ct]<<endl;
            Ct ++;
        }
    }//8.
    CC[ Ct ] = '\0';
    C = CC;
    cout << "C.length( ) = "<<C.length( )<<endl;
    cout <<"8"<<endl;
    short X = large / C.length( );//9.
    /*short F = -250;
    for ( short i = 0; i < C.length( ); i ++ ) {
        if ( C[ i ] == B[ i * X ] ) continue;
        else F = 0;
    }
    if ( F == 0 ) printf( "%s", "Error!" );*///10.
    //string D;
    cout <<"9------X = "<<X<<endl;
    cout <<"large = "<<large<<endl;
    short F = 0, J = 0, M = 1;//F����D��J����A��M����"xyz"
    for ( short i = 0; i < large; i ++ ) {//ѭ��large��
        cout << "i = " << i << "; In ";
        if ( i == F * X && F < C.length( ) ) {//�����X�ı���
            DD[ F * X ] = C[ F ];
            F ++;
            cout << "1"<< endl;
        }
        else {//����X�ı���
			while ( J < A.length( ) ) {//��д
				if ( 64 < ( short )A[ J ] && ( short )A[ J ] < 91 ) {
                    J ++;
                    cout << "+";
                }
				else break;
			}
            if ( J >=  A.length( ) ) {//����
                DD[ i ] = XYZ( M % 3 );
                M ++;
            cout << "2"<< endl;
            }
            else {//�Ǵ�д�ģ�ûԽ�� 
                DD[ i ] = A[ J ];
                J ++;
            cout << "3"<< endl;
            }
        }
    }
    DD[ large ] = '\0';
    cout << strlen(DD)<<endl;
    D = DD;
    /*for ( short i = 0; i < C.length( ); i ++ ) {
        C[ i ] == D[ i * X ];
    }*/
    //char a[50];
    //for( short i = 0; i < D.length( ); i ++ ) a[i] = D[i];
    cout << D<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
