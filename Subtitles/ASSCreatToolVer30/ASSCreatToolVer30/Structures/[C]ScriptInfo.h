#include "..\CommenHead.h"

struct ScriptInfo
{
	char GETopenfileCN[100];              //ע���������"-"�����ʾ����
	char GETopenfileJP[100];//���My����
	char GETopenfileJPrm[100];            //ע���������"-"�����ʾ����
	char GETopenfileROCK[100];            //ע���������"-"�����ʾ����
	char GETsavefile[100];//�����Ʒ�ļ�
	char GETkaraokefile[100];//����
	char GETtempfile[100];//�����ʱ�ļ�

	char Title[100];                        //����
	short PlayResX;                         //x�ĳ���,���
	short PlayResY;                         //y�ĳ���,�߶�
	long SynchPoint;                    //��ʼ��ʱ����ƫ��
	short FontAmount;                       //��������������
	struct FI
	{
		char Name[20];                      //���������
		char Fontname[40];                  //�����ԭ��
		short Fontsize;                     //����Ĵ�С8-72
		char PrimaryColour[7];              //��һɫ
		char SecondaryColour[7];            //�ڶ�ɫ
		char OutlineColour[7];              //�߿�ɫ
		char BackColour[7];                 //ͶӰɫ
		short Bold;                         //����? 0�ر�,-1����
		short Italic;                       //б��? 0�ر�,-1����
		short Underline;                    //�»���? 0�ر�,-1����
		short StrikeOut;                    //ɾ����? 0�ر�,-1����
		short ScaleX;                       //X�����С(%)
		short ScaleY;                       //Y�����С(%)
		short Spacing;                      //���
		short Angle;                        //��б��
		short BorderStyle;                  //�߿���ʽ:ȡֵ1,����;ȡֵ3,��һ��������
		float Outline;                      //�߿���:ȡֵ��Χ1-4,����Խ��߿�Խ��
		short Shadow;                       //��Ӱ����:ȡֵ��Χ0-4,����Խ����ӰԽ��
		short Alignment;                    //���뷽ʽ1-11
		short MarginL, MarginR, MarginV;    //�߾�,Ĭ��30
		short Encoding;                     //�ַ�����,Ĭ��:1
	}FontInfo[20];
};