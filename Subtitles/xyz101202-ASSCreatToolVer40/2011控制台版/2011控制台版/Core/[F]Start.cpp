#include "stdafx.h"
#include "..\stdafx.h"

/*static*/ int ASScodeCore::Start(ScriptInfo TempScriptInfo, short PositionMode)
{
	ass_temp<<">>�ѽ���������"<<endl;
	bool ofCN=false, ofJPrm=false, ofROCK=false;
	if(TempScriptInfo.GETopenfileCN[0]!='-'){ofCN=true;FileMode+=1;}
	if(TempScriptInfo.GETopenfileJPrm[0]!='-'){ofJPrm=true;FileMode+=2;}
	if(TempScriptInfo.GETopenfileROCK[0]!='-'){ofROCK=true;FileMode+=4;}
	//�������ж�����Щ�ļ�

	
	if(ofCN==true)
	{
		strcpy_s(openfileCN,TempScriptInfo.GETopenfileCN);
		ass_originCN.open(openfileCN,ios::out|ios::in|ios::trunc);
	}//
	strcpy_s(openfileJP,TempScriptInfo.GETopenfileJP);
	ass_originJP.open(openfileJP,ios::out|ios::in|ios::trunc);//
	if(ofJPrm==true)
	{
		strcpy_s(openfileJPrm,TempScriptInfo.GETopenfileJPrm);
		ass_originJPrm.open(openfileJPrm,ios::out|ios::in|ios::trunc);//
	}
	if(ofROCK==true)
	{
		strcpy_s(openfileROCK,TempScriptInfo.GETopenfileROCK);
		ass_originROCK.open(openfileROCK,ios::out|ios::in|ios::trunc);//
	}
	strcpy_s(savefile,TempScriptInfo.GETsavefile);
	ass_out.open(savefile,ios::out|ios::trunc);//
	strcpy_s(karaokefile,TempScriptInfo.GETkaraokefile);
	ass_in.open(karaokefile,ios::in);//
	strcpy_s(tempfile,TempScriptInfo.GETtempfile);
	ass_temp.open(tempfile,ios::out|ios::trunc);//
	//���ļ�

	ass_temp<<">>�ѽ���MyEncoder()"<<endl;
	MyEncoder();//������ͨ������FileMode���жϣ��洢�ĸ�ʽ����ȡ����ֱ�Ӷ���
	ass_temp<<"  >>�ѷ���������"<<endl;

	ass_temp<<">>�ѽ���GetData()"<<endl;
	Getdata();//������ͨ������FileMode���жϣ�ѡ���Դ洢����
	ass_temp<<"  >>�ѷ���������"<<endl;

	ass_temp<<">>�ѽ���Order()"<<endl;
	Order();//������ͨ������FileMode���жϣ�ѡ��������
	ass_temp<<"  >>�ѷ���������"<<endl;

	ass_temp<<">>�ѽ���Compute()"<<endl;
	Compute(PositionMode);//������ͨ������FileMode���жϣ�ѡ���Լ���
	ass_temp<<"  >>�ѷ���������"<<endl;

	ass_temp<<">>�ѽ���GetData()"<<endl;
	Ohead(TempScriptInfo);
	ass_temp<<"  >>�ѷ���������"<<endl;
	ass_temp<<">>���˳�������"<<endl;
	return 0;
}