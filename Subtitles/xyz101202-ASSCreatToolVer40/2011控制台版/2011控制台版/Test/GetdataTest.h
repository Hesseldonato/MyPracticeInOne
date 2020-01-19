#include "stdafx.h"

static void GetdataTest()
{
	memset(karaokefile,100,'\0');
	memset(openfileCN,100,'\0');
	memset(tempfile,100,'\0');
	memset(openfileJP,100,'\0');
	memset(savefile,100,'\0');
	strcpy_s(karaokefile,"133.ass");
	strcpy_s(openfileCN,"testCN2.txt");
	strcpy_s(openfileJP,"testJP2.txt");
	strcpy_s(tempfile,"testTemp.txt");
	strcpy_s(savefile,"testOut.txt");
	ass_originCN.open(openfileCN,/*ios::out|*/ios::in);
	if(ass_originCN.is_open())
	{
		cout<<"CN�򿪳ɹ���\n"<<endl;
	}
	else
	{
		cout<<"�ļ�����·�����󣡴�ʧ�ܣ�\n"<<endl;
	}
	ass_originJP.open(openfileJP,/*ios::out|*/ios::in);//
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
	static ASScodeCore test;
	test.Getdata();

	/*
	int FileMode=1;
	int StructAmount=0;
	char TMP[50];
	//memset(TMP,50,'\0');
	ass_originJP.seekg(0,ios_base::beg);
	//system("PAUSE");
	while(!ass_originJP.eof())
	{
		ass_originJP>>all[StructAmount].num_s;
		if(all[StructAmount].num_s==0)
		{
			all[StructAmount].num_s=-1;
			ass_originJP.getline(TMP,50,'\n');
			break;
		}
		cout<<"      "<<all[StructAmount].num_s<<endl;
		ass_originJP>>all[StructAmount].num_l;
		cout<<"      "<<all[StructAmount].num_l<<endl;
		ass_originJP>>all[StructAmount].num_w;
		cout<<"      "<<all[StructAmount].num_w<<endl;
		ass_originJP>>all[StructAmount].stime;
		cout<<"      "<<all[StructAmount].stime<<endl;
		ass_originJP>>all[StructAmount].etime;
		cout<<"      "<<all[StructAmount].etime<<endl;
		ass_originJP>>all[StructAmount].word;
		cout<<"      "<<all[StructAmount].word<<endl;

		//ass_originJP.getline(TMP,50,'\n');
		//cout<<TMP<<endl;

		all[StructAmount].num_line=StructAmount+1;
		StructAmount+=1;
		cout<<StructAmount<<endl;
		//system("PAUSE");
	}
	if(FileMode==1||FileMode==3||FileMode==5||FileMode==7)
	{
		ass_originCN.seekg(0,ios_base::beg);
		system("PAUSE");
		while(!ass_originCN.eof())
		{
			ass_originCN>>all[StructAmount].num_s;
			if(all[StructAmount].num_s==0)
			{
				all[StructAmount].num_s=-1;
				ass_originCN.getline(TMP,50,'\n');
				break;
			}
			ass_originCN>>all[StructAmount].num_l;
			ass_originCN>>all[StructAmount].num_w;
			ass_originCN>>all[StructAmount].stime;
			ass_originCN>>all[StructAmount].etime;
			ass_originCN>>all[StructAmount].word;
			all[StructAmount].num_line=StructAmount+1;
			StructAmount+=1;
			cout<<StructAmount<<endl;
		}
	}
	if(FileMode==2||FileMode==3||FileMode==6||FileMode==7)
	{
		ass_originJPrm.seekg(0,ios_base::beg);
		system("PAUSE");
		while(!ass_originJPrm.eof())
		{
			ass_originJPrm>>all[StructAmount].num_s;
			if(all[StructAmount].num_s==0)
			{
				all[StructAmount].num_s=-1;
				ass_originJPrm.getline(TMP,50,'\n');
				break;
			}
			ass_originJPrm>>all[StructAmount].num_l;
			ass_originJPrm>>all[StructAmount].num_w;
			ass_originJPrm>>all[StructAmount].stime;
			ass_originJPrm>>all[StructAmount].etime;
			ass_originJPrm>>all[StructAmount].word;
			all[StructAmount].num_line=StructAmount+1;
			StructAmount+=1;
			ass_temp<<StructAmount<<endl;
		}
	}
	if(FileMode==4||FileMode==5||FileMode==6||FileMode==7)
	{
		
		//if(all[StructAmount].num_s==0)
		//{
		//	all[StructAmount].num_s=-1;
		//	ass_originROCK.getline(TMP,50,'\n');
		//	break;
		//}
		//ass_originROCK.seekg(0,ios_base::beg);
		//while(!ass_originROCK.eof())
		//{
			//ass_originROCK>>all[StructAmount].num_s>>all[StructAmount].num_l>>all[StructAmount].num_w>>all[StructAmount].stime>>all[StructAmount].etime>>all[StructAmount].word;
			//all[StructAmount].num_line=StructAmount+1;
			//StructAmount+=1;
		//}
	}
	int k=0;
	for(k=0; k<StructAmount; k++)
	{
		ass_temp<<all[k].num_s<<' '<<all[k].num_l<<' '<<all[k].num_w<<' '<<all[k].stime<<' '<<all[k].etime<<' '<<all[k].word<<' '<<all[k].num_line<<endl;
	}*/
}