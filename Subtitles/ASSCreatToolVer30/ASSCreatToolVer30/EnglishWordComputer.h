#include "CommenHead.h"

static void EnglishWordComputer(char WordName[40], short WordSize)
{
	short Count1=0,Count2=0,Count3=0,Count4=0,Count5=0,Count6=0;
	ScriptInfo EnglishWordComputer;

	strcpy_s(EnglishWordComputer.GETopenfileCN,"--");              //ע���������"-"�����ʾ����
	strcpy_s(EnglishWordComputer.GETopenfileJP,"--");//���My����
	strcpy_s(EnglishWordComputer.GETopenfileJPrm,"--");            //ע���������"-"�����ʾ����
	strcpy_s(EnglishWordComputer.GETopenfileROCK,"--");            //ע���������"-"�����ʾ����
	strcpy_s(EnglishWordComputer.GETsavefile,"EnglishWordComputer.ass");//�����Ʒ�ļ�
	strcpy_s(EnglishWordComputer.GETkaraokefile,"--");//����
	strcpy_s(EnglishWordComputer.GETtempfile,"EnglishWordComputerTemp.txt");//�����ʱ�ļ�
	strcpy_s(EnglishWordComputer.Title,"EnglishWordComputerTest");                        //����
	EnglishWordComputer.PlayResX=720;                         //x�ĳ���,���
	EnglishWordComputer.PlayResY=480;                         //y�ĳ���,�߶�
	EnglishWordComputer.SynchPoint=0;
	EnglishWordComputer.FontAmount=1;                       //��������������
	strcpy_s(EnglishWordComputer.FontInfo[0].Name,"JP1");                      //���������
	strcpy_s(EnglishWordComputer.FontInfo[0].Fontname,WordName);                  //�����ԭ��
	EnglishWordComputer.FontInfo[0].Fontsize=WordSize;                     //����Ĵ�С8-72
	strcpy_s(EnglishWordComputer.FontInfo[0].PrimaryColour,"FF0066");              //��һɫ
	strcpy_s(EnglishWordComputer.FontInfo[0].SecondaryColour,"996666");            //�ڶ�ɫ
	strcpy_s(EnglishWordComputer.FontInfo[0].OutlineColour,"996666");              //�߿�ɫ
	strcpy_s(EnglishWordComputer.FontInfo[0].BackColour,"000000");                 //ͶӰɫ
	EnglishWordComputer.FontInfo[0].Bold=0;                         //����? 0�ر�,-1����
	EnglishWordComputer.FontInfo[0].Italic=0;                       //б��? 0�ر�,-1����
	EnglishWordComputer.FontInfo[0].Underline=0;                    //�»���? 0�ر�,-1����
	
	EnglishWordComputer.FontInfo[0].StrikeOut=0;                    //ɾ����? 0�ر�,-1����
	EnglishWordComputer.FontInfo[0].ScaleX=100;                       //X�����С(%)
	EnglishWordComputer.FontInfo[0].ScaleY=100;                       //Y�����С(%)
	EnglishWordComputer.FontInfo[0].Spacing=10;                      //���

	EnglishWordComputer.FontInfo[0].Angle=0;                        //��б��
	EnglishWordComputer.FontInfo[0].BorderStyle=1;                  //�߿���ʽ:ȡֵ1,����;ȡֵ3,��һ��������
	EnglishWordComputer.FontInfo[0].Outline=1;                      //�߿���:ȡֵ��Χ1-4,����Խ��߿�Խ��
	EnglishWordComputer.FontInfo[0].Shadow=2;                       //��Ӱ����:ȡֵ��Χ0-4,����Խ����ӰԽ��
	EnglishWordComputer.FontInfo[0].Alignment=1;                    //���뷽ʽ1-11
	EnglishWordComputer.FontInfo[0].MarginL=30;
	EnglishWordComputer.FontInfo[0].MarginR=30;
	EnglishWordComputer.FontInfo[0].MarginV=30;    //�߾�,Ĭ��30
	EnglishWordComputer.FontInfo[0].Encoding=1;                     //�ַ�����,Ĭ��:1

	ass_out.open(EnglishWordComputer.GETsavefile,ios::out|ios::trunc);
	ass_temp.open(EnglishWordComputer.GETtempfile,ios::out|ios::trunc);

	Ohead(EnglishWordComputer);
	cout<<"Finished Ohead()!~"<<endl;
	for(Count1=0;Count1<26;Count1++)//Сд��
	{//��ĸ����
		ass_temp<<Count1<<endl;
		for(Count2=0;Count2<6;Count2++)
		{//��������
			for(Count3=0;Count3<8;Count3++)
			{//��������
				Count6=Count1+asc2;
				Count5=6*Count2+Count3+1;
				LineBegin(100,itc((int)Count1*100),itc(((int)Count1+1)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd(Count5);
				
				LineBegin(1,itc((int)Count1*100),itc(((int)Count1+1)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120+35,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd((char)Count6);

				LineBegin(2,itc((int)Count1*100),itc(((int)Count1+1)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120+35+Count5,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd((char)Count6);
			}
		}
	}
	for(Count1=0;Count1<26;Count1++)//��д��
	{
		for(Count2=0;Count2<6;Count2++)
		{
			for(Count3=0;Count3<8;Count3++)
			{
				Count6=Count1+asc1;
				Count5=6*Count2+Count3+1;
				LineBegin(100,itc(((int)Count1+26)*100),itc(((int)Count1+1+26)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd(Count5);
				
				LineBegin(1,itc(((int)Count1+26)*100),itc(((int)Count1+1+26)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120+35,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd((char)Count6);

				LineBegin(2,itc(((int)Count1+26)*100),itc(((int)Count1+1+26)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120+35+Count5,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd((char)Count6);
			}
		}
	}
	Count1=0;
	for(Count2=0;Count2<6;Count2++)//����
	{
		for(Count3=0;Count3<8;Count3++)
		{
			//Count6=Count1+asc1;
			Count5=6*Count2+Count3+25;
			LineBegin(100,itc(((int)Count1+52)*100),itc(((int)Count1+1+52)*100),"JP1");
			StyleBegin();
			an(7);
			pos(Count2*120,Count3*60);//y-60;x-120
			StyleEnd();
			LineEnd(Count5);
			
			LineBegin(1,itc(((int)Count1+52)*100),itc(((int)Count1+1+52)*100),"JP1");
			StyleBegin();
			an(7);
			pos(Count2*120+35,Count3*60);//y-60;x-120
			StyleEnd();
			LineEnd("��");

			LineBegin(2,itc(((int)Count1+52)*100),itc(((int)Count1+1+52)*100),"JP");
			StyleBegin();
			an(7);
			pos(Count2*120+35+Count5,Count3*60);//y-60;x-120
			StyleEnd();
			LineEnd("��");
		}
	}
}



static void EnglishWordComputer()
{
	short Count1=0,Count2=0,Count3=0,Count4=0,Count5=0,Count6=0;
	
	ScriptInfo TOMOYOafterDEMO;
	strcpy_s(TOMOYOafterDEMO.GETopenfileCN,"--");
	strcpy_s(TOMOYOafterDEMO.GETopenfileJP,"TOMOYOafterDEMO_k.txt");
	strcpy_s(TOMOYOafterDEMO.GETopenfileJPrm,"--");
	strcpy_s(TOMOYOafterDEMO.GETopenfileROCK,"--");
	strcpy_s(TOMOYOafterDEMO.GETsavefile,"TOMOYOafterDEMO.ass");
	strcpy_s(TOMOYOafterDEMO.GETkaraokefile,"TOMOYO_DEMO.ass");
	strcpy_s(TOMOYOafterDEMO.GETtempfile,"TOMOYOafterDEMOTemp.txt");
	strcpy_s(TOMOYOafterDEMO.Title,"TOMOYOafter_DEMO");
	TOMOYOafterDEMO.PlayResX=640;
	TOMOYOafterDEMO.PlayResY=480;
	TOMOYOafterDEMO.SynchPoint=0;
	TOMOYOafterDEMO.FontAmount=1;
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].Name,"JP1");
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].Fontname,"�Ķ�������");
	TOMOYOafterDEMO.FontInfo[0].Fontsize=22;
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].PrimaryColour,"E49B08");
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].SecondaryColour,"000000");
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].OutlineColour,"FDFFFB");
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].BackColour,"666666");
	TOMOYOafterDEMO.FontInfo[0].Bold=0;
	TOMOYOafterDEMO.FontInfo[0].Italic=0;
	TOMOYOafterDEMO.FontInfo[0].Underline=0;
	TOMOYOafterDEMO.FontInfo[0].StrikeOut=0;
	TOMOYOafterDEMO.FontInfo[0].ScaleX=120;
	TOMOYOafterDEMO.FontInfo[0].ScaleY=100;
	TOMOYOafterDEMO.FontInfo[0].Spacing=0;                      //���
	TOMOYOafterDEMO.FontInfo[0].Angle=0;                        //��б��
	TOMOYOafterDEMO.FontInfo[0].BorderStyle=1;                  //�߿���ʽ:ȡֵ1,����;ȡֵ3,��һ��������
	TOMOYOafterDEMO.FontInfo[0].Outline=2;                      //�߿���:ȡֵ��Χ1-4,����Խ��߿�Խ��
	TOMOYOafterDEMO.FontInfo[0].Shadow=2;                       //��Ӱ����:ȡֵ��Χ0-4,����Խ����ӰԽ��
	TOMOYOafterDEMO.FontInfo[0].Alignment=1;                    //���뷽ʽ1-11
	TOMOYOafterDEMO.FontInfo[0].MarginL=30;
	TOMOYOafterDEMO.FontInfo[0].MarginR=30;
	TOMOYOafterDEMO.FontInfo[0].MarginV=30;
	TOMOYOafterDEMO.FontInfo[0].Encoding=1;
	ass_out.open(TOMOYOafterDEMO.GETsavefile,ios::out|ios::trunc);
	ass_temp.open(TOMOYOafterDEMO.GETtempfile,ios::out|ios::trunc);
	Ohead(TOMOYOafterDEMO);
	cout<<"Finished Ohead()!~"<<endl;
	for(Count1=0;Count1<26;Count1++)//Сд��
	{//��ĸ����
		ass_temp<<Count1<<endl;
		for(Count2=0;Count2<6;Count2++)
		{//��������
			for(Count3=0;Count3<8;Count3++)
			{//��������
				Count6=Count1+asc2;
				Count5=6*Count2+Count3+1;
				LineBegin(100,itc((int)Count1*100),itc(((int)Count1+1)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd(Count5);
				
				LineBegin(1,itc((int)Count1*100),itc(((int)Count1+1)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120+35,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd((char)Count6);

				LineBegin(2,itc((int)Count1*100),itc(((int)Count1+1)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120+35+Count5,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd((char)Count6);
			}
		}
	}
	for(Count1=0;Count1<26;Count1++)//��д��
	{
		for(Count2=0;Count2<6;Count2++)
		{
			for(Count3=0;Count3<8;Count3++)
			{
				Count6=Count1+asc1;
				Count5=6*Count2+Count3+1;
				LineBegin(100,itc(((int)Count1+26)*100),itc(((int)Count1+1+26)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd(Count5);
				
				LineBegin(1,itc(((int)Count1+26)*100),itc(((int)Count1+1+26)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120+35,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd((char)Count6);

				LineBegin(2,itc(((int)Count1+26)*100),itc(((int)Count1+1+26)*100),"JP1");
				StyleBegin();
				an(7);
				pos(Count2*120+35+Count5,Count3*60);//y-60;x-120
				StyleEnd();
				LineEnd((char)Count6);
			}
		}
	}
	Count1=0;
	for(Count2=0;Count2<6;Count2++)//����
	{
		for(Count3=0;Count3<8;Count3++)
		{
			//Count6=Count1+asc1;
			Count5=6*Count2+Count3+25;
			LineBegin(100,itc(((int)Count1+52)*100),itc(((int)Count1+1+52)*100),"JP1");
			StyleBegin();
			an(7);
			pos(Count2*120,Count3*60);//y-60;x-120
			StyleEnd();
			LineEnd(Count5);
			
			LineBegin(1,itc(((int)Count1+52)*100),itc(((int)Count1+1+52)*100),"JP1");
			StyleBegin();
			an(7);
			pos(Count2*120+35,Count3*60);//y-60;x-120
			StyleEnd();
			LineEnd("��");

			LineBegin(2,itc(((int)Count1+52)*100),itc(((int)Count1+1+52)*100),"JP1");
			StyleBegin();
			an(7);
			pos(Count2*120+35+Count5,Count3*60);//y-60;x-120
			StyleEnd();
			LineEnd("��");
		}
	}
}