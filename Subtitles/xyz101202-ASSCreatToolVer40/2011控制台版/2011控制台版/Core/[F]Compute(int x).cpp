#include "stdafx.h"
#include "..\stdafx.h"
/*static*/ void ASScodeCore::Compute(int x)//������ɺ󣬽�i��Ϊ-1
{
	short j=0;
	string stmp;
	char ctmp[11];
	//time���㹫��
	const short st=60;//(stander_time)ǿ����Ҫ��ʱ��(��λ������)
	const short ttt=10;//(time_to_time)�����ֵı�׼���ʱ=�ڶ����ֵĳ���-��һ���ֵĳ���=�ڶ����ֵ��˳�-�ڶ����ֵ��˳�(��λ������)
	const short gts=20;//(going to start)���������ʱ���뿪ʼǿ����ʱ����
	const short ste=10;//(start to end)���һ���ֵĽ���ǿ��ʱ���뿪ʼ�˳���ʱ����
	//pos���㹫��
	const short sx=45;//(stander x)x���ϵ�ƫ������������(x����-sx=�����ϵ�x����)
	const short sy=30;//(stander y)y���ϵ�ƫ������������(y����+sy=�����ϵ�y����)
	const short sd=26;//(stander distance)�����ֵı�׼���(�����ַ��ļ��)
	const short fd=40;//�߾�

	cout<<endl;
	for(k=0;k<h;k++)
	{
		if(k>0)
		{
			if(all[k-1].num_s==all[k].num_s && all[k-1].num_l!=all[k].num_l)
			{
				amount[all[k-1].num_s-1][0]=all[k-1].num_w;
				strcpy_s(etime_last[all[k-1].num_s-1][0],all[k-1].etime);
				cout<<"amount["<<all[k-1].num_s-1<<"][0]="<<amount[all[k-1].num_s-1][0]<<endl;
				if(k==h-1)
				{
					amount[all[k].num_s-1][0]=all[k].num_w;
					strcpy_s(etime_last[all[k].num_s-1][0],all[k].etime);
					cout<<"amount["<<all[k].num_s-1<<"][0]="<<amount[all[k].num_s-1][0]<<endl;
				}
			}
			else if((all[k-1].num_s!=all[k].num_s && all[k-1].num_l==all[k].num_l+1) || k==h-1)
			{
				if(k!=h-1)
				{
					amount[all[k-1].num_s-1][1]=all[k-1].num_w;
					strcpy_s(etime_last[all[k-1].num_s-1][1],all[k-1].etime);
					cout<<"amount["<<all[k-1].num_s-1<<"][1]="<<amount[all[k-1].num_s-1][1]<<endl;
				}
				else
				{
					amount[all[k].num_s-1][1]=all[k].num_w;
					strcpy_s(etime_last[all[k].num_s-1][1],all[k].etime);
					cout<<"amount["<<all[k].num_s-1<<"][1]="<<amount[all[k].num_s-1][1]<<endl;
				}
			}
			else{}
		}
		if(k==h-1)
		{
			max_line=all[k].num_s;
			cout<<endl;
			cout<<"max_line:"<<max_line<<endl;
		}
	}

	//�����ṹ������lenth[][]
	j=0;
	for(k=0;k<h;k++)
	{
		if(k==h-1)
		{
			j+=strlen(all[k].word);
			lenth[all[k].num_s-1][all[k].num_l-1]=j;
			cout<<"lenth["<<all[k].num_s-1<<"]["<<all[k].num_l-1<<"]="<<j<<endl;
			j=0;
		}
		else if(all[k].num_s==all[k+1].num_s && all[k].num_l==all[k+1].num_l)
		{
			j+=strlen(all[k].word);
		}
		else if(all[k].num_s==all[k+1].num_s && all[k].num_l==all[k+1].num_l-1)
		{
			j+=strlen(all[k].word);
			lenth[all[k].num_s-1][all[k].num_l-1]=j;
			cout<<"lenth["<<all[k].num_s-1<<"]["<<all[k].num_l-1<<"]="<<j<<endl;
			j=0;
		}
		else if(all[k].num_s==all[k+1].num_s-1 && all[k].num_l==all[k+1].num_l+1)
		{
			j+=strlen(all[k].word);
			lenth[all[k].num_s-1][all[k].num_l-1]=j;
			cout<<"lenth["<<all[k].num_s-1<<"]["<<all[k].num_l-1<<"]="<<j<<endl;
			j=0;
		}
	}


	int short xx=0,yy=0,zz=0;
	a=0;
	for(xx=0;x<max_line;xx++)
	{
		if(xx==max_line)
		{
			break;
		}
		c=a;
		for(yy=0;yy<amount[xx][0];yy++)
		{	
			for(zz=0;zz<6;zz++)
			{
				if(zz==0)
				{
					stmp=itc(cti(all[c].stime)-st-gts+(yy*ttt));
					for(b=0;b<10;b++)
					{
						ctmp[b]=stmp[b];
					}
					ctmp[10]='\0';
					strcpy_s(jdtime[xx][yy][zz],ctmp);
					//ass_out<<"jdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<jdtime[xx][yy][zz]<<endl;
				}
				else if(zz==1)
				{
					stmp=itc(cti(all[c].stime)-gts+(yy*ttt));
					for(b=0;b<10;b++)
					{
						ctmp[b]=stmp[b];
					}
					ctmp[10]='\0';
					strcpy_s(jdtime[xx][yy][zz],ctmp);
					//ass_out<<"jdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<jdtime[xx][yy][zz]<<endl;
				}
				else if(zz==2)
				{
					strcpy_s(jdtime[xx][yy][zz],all[c].stime);
					//ass_out<<"jdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<jdtime[xx][yy][zz]<<endl;
				}
				else if(zz==3)
				{
					strcpy_s(jdtime[xx][yy][zz],all[c].etime);
					//ass_out<<"jdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<jdtime[xx][yy][zz]<<endl;
				}
				else if(zz==4)
				{
					stmp=itc(cti(etime_last[xx][0])-ste-((amount[xx][0]-yy)*ttt));
					for(b=0;b<10;b++)
					{
						ctmp[b]=stmp[b];
					}
					ctmp[10]='\0';
					strcpy_s(jdtime[xx][yy][zz],ctmp);
					//ass_out<<"jdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<jdtime[xx][yy][zz]<<endl;
				}
				else if(zz==5)
				{
					stmp=itc(cti(etime_last[xx][0])-ste+gts-((amount[xx][0]-yy)*ttt));
					for(b=0;b<10;b++)
					{
						ctmp[b]=stmp[b];
					}
					ctmp[10]='\0';
					strcpy_s(jdtime[xx][yy][zz],ctmp);
					//ass_out<<"jdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<jdtime[xx][yy][zz]<<endl;
				}
			}
			a++;
		}
		c=a;
		for(yy=0;yy<amount[xx][1];yy++)
		{
			for(zz=0;zz<6;zz++)
			{
				if(zz==0)
				{
					stmp=itc(cti(all[c].stime)-st-gts+(yy*ttt));
					for(b=0;b<10;b++)
					{
						ctmp[b]=stmp[b];
					}
					ctmp[10]='\0';
					strcpy_s(cdtime[xx][yy][zz],ctmp);
					//ass_out<<"cdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<cdtime[xx][yy][zz]<<endl;
				}
				else if(zz==1)
				{
					stmp=itc(cti(all[c].stime)-gts+(yy*ttt));
					for(b=0;b<10;b++)
					{
						ctmp[b]=stmp[b];
					}
					ctmp[10]='\0';
					strcpy_s(cdtime[xx][yy][zz],ctmp);
					//ass_out<<"cdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<cdtime[xx][yy][zz]<<endl;
				}
				else if(zz==2)
				{
					strcpy_s(cdtime[xx][yy][zz],all[c].stime);
					//ass_out<<"cdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<cdtime[xx][yy][zz]<<endl;
				}
				else if(zz==3)
				{
					strcpy_s(cdtime[xx][yy][zz],all[c].etime);
					//ass_out<<"cdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<cdtime[xx][yy][zz]<<endl;
				}
				else if(zz==4)
				{
					stmp=itc(cti(etime_last[xx][1])-ste-((amount[xx][1]-yy)*ttt));
					for(b=0;b<10;b++)
					{
						ctmp[b]=stmp[b];
					}
					ctmp[10]='\0';
					strcpy_s(cdtime[xx][yy][zz],ctmp);
					//ass_out<<"cdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<cdtime[xx][yy][zz]<<endl;
				}
				else if(zz==5)
				{
					stmp=itc(cti(etime_last[xx][1])-ste+gts-((amount[xx][1]-yy)*ttt));
					for(b=0;b<10;b++)
					{
						ctmp[b]=stmp[b];
					}
					ctmp[10]='\0';
					strcpy_s(cdtime[xx][yy][zz],ctmp);
					//ass_out<<"cdtime["<<xx<<"]["<<yy<<"]["<<zz<<"]="<<cdtime[xx][yy][zz]<<endl;
				}
			}
			a++;
		}
		//system("PAUSE");
	}

	//pos��������Σ�
	//1-���������������ϣ�2-���������������ϣ�3-���������������ϣ�
	//4-���ĵײ����������ɣ������ϲ����������ɣ�5-�����²����������������ϲ���������
	/*
	pos�����4�ࣺ
	  11-��������,��������;12-��������,��������;13-�������Ķ�����;14-���Ĵ����µ����»���,���Ĵ����ϵ����ϻ���;
	  21-��������,��������;22-��������,��������;23-�������Ķ�����;24-���Ĵ����ϵ����ϻ���,���Ĵ����µ����»���;
	  31-(��ʽ)��������,��������;31-(��ʽ)����;
	  41-(��ʽ)��������,��������;41-(��ʽ)����;
	*/
	short ssx=0,ax=0,bx=0;//prepare for just using them
	if(x==1)
	{
	}
	else if(x==2)
	{
	}
	else if(x==3)
	{
		for(xx=0;x<max_line;xx++)
		{
			ssx=lenth[xx][0]*sd/2/2;
			bx=0;
			if(xx==max_line)/////////////////////////////BUG
			{
				break;
			}
			for(yy=0;yy<amount[xx][0];yy++)
			{
				for(ax=0;ax<h;ax++)
				{
					if(all[ax].num_s==xx+1 && all[ax].num_l==1 && all[ax].num_w==yy+1)
					{
						break;
					}
				}
				bx+=strlen(all[ax].word)*sd/2;
				jdpos[xx][yy][0]=width/2-ssx+bx-strlen(all[ax].word)*sd/2/2;
				jdpos[xx][yy][1]=height-fd;
				//ass_out<<"jdpos["<<xx<<"]["<<yy<<"][0]="<<jdpos[xx][yy][0]<<"    "<<"jdpos["<<xx<<"]["<<yy<<"][1]="<<jdpos[xx][yy][1]<<endl;
			}
			ssx=lenth[xx][1]*sd/2/2;
			bx=0;
			for(yy=0;yy<amount[xx][1];yy++)
			{
				for(ax=0;ax<h;ax++)
				{
					if(all[ax].num_s==xx+1 && all[ax].num_l==2 && all[ax].num_w==yy+1)
					{
						break;
					}
				}
				bx+=strlen(all[ax].word)*sd/2;
				cdpos[xx][yy][0]=width/2-ssx+bx-strlen(all[ax].word)*sd/2/2;
				cdpos[xx][yy][1]=fd;
				//ass_out<<"cdpos["<<xx<<"]["<<yy<<"][0]="<<cdpos[xx][yy][0]<<"    "<<"cdpos["<<xx<<"]["<<yy<<"][1]="<<cdpos[xx][yy][1]<<endl;
			}
		}
	}
	else if(x==4)
	{
	}
	else if(x==5)
	{
	}
	else{}
	b=0;
	c=0;
	j=0;
	a=0;
	i=-1;
}
