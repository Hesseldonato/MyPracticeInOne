#include "stdafx.h"

static void EncoderTest()
{
	strcpy_s(karaokefile,"133.ass");
	strcpy_s(openfileCN,"testCN.txt");
	strcpy_s(openfileJP,"testJP.txt");
	strcpy_s(tempfile,"testTemp.txt");
	strcpy_s(savefile,"testOut.txt");
	ass_originCN.open(openfileCN,ios::out|ios::in|ios::trunc);
	if(ass_originCN.is_open())
	{
		cout<<"CN�򿪳ɹ���\n"<<endl;
	}
	else
	{
		cout<<"�ļ�����·�����󣡴�ʧ�ܣ�\n"<<endl;
	}
	ass_originJP.open(openfileJP,ios::out|ios::in|ios::trunc);//
	if(ass_originJP.is_open())
	{
		cout<<"JP�򿪳ɹ���\n"<<endl;
	}
	else
	{
		cout<<"�ļ�����·�����󣡴�ʧ�ܣ�\n"<<endl;
	}

	ass_out.open(savefile,ios::out|ios::trunc);//
	if(ass_out.is_open())
	{
		cout<<"save�򿪳ɹ���\n"<<endl;
	}
	else
	{
		cout<<"�ļ�����·�����󣡴�ʧ�ܣ�\n"<<endl;
	}
	ass_in.open(karaokefile,ios::in);//
	ass_temp.open(tempfile,ios::out|ios::trunc);//
	if(ass_temp.is_open())
	{
		cout<<"temp�򿪳ɹ���\n"<<endl;
	}
	else
	{
		cout<<"�ļ�����·�����󣡴�ʧ�ܣ�\n"<<endl;
	}
	if(ass_in.is_open())
	{
		cout<<"in�򿪳ɹ���\n"<<endl;
	}
	else
	{
		cout<<"�ļ�����·�����󣡴�ʧ�ܣ�\n"<<endl;
	}
	ASScodeCore test;
	test.MyEncoder();
}