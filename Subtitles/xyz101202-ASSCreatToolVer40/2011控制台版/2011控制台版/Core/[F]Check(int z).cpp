#include "stdafx.h"
#include "..\stdafx.h"
/*static*/ void ASScodeCore::Check(int z)//������ʱ����ʾ��������ʼʹi=-1
{
	i=-1;
	char j[1000];
	if(z==1){
	while(!ass_in.eof())
	{
		//cout<<j<<endl;
		
		d++;
		h++;
		ass_in.getline(j,999,'\n');
		a=strlen(j);
		//cout<<a<<endl;
		if(a==0||(int)j[0]==59)
		{
			h--;
			continue;
		}
		for(c=0;c<a;c++)
		{
			if((int)j[c]==44)//c�ǵ�һ�����ŵ�λ��-1
			{
				break;
			}
		}
		if(c==a)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��һ��ò��һ�����Ŷ�û�оͽ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==a-1)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��һ��ò��ֻ��һ�����žͽ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==0)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��һ����Ƕ���ǰ�ƺ�û���ַ���"<<endl;
			i++;
			e=c;
		}
		else
		{
			e=c;//position of first char ','
			for(c=0;c<e;c++)
			{
				if((int)j[c]<48||(int)j[c]>57)
				{
					cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�ڵ�һ����Ƕ���ǰ�ƺ������˲��ó��ֵ��ַ���"<<endl;
					i++;
					break;
				}
			}
		}
		f=e+1;//pos of the word after first ','
		for(c=f;c<a;c++)
		{
			if((int)j[c]==44)
			{
				break;
			}
		}
		if(c==a-1)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��һ��ò��ֻ���������žͽ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==a)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�ڵ�һ����Ƕ��ź��ƺ�û�а�Ƕ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==f)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�ڶ�����Ƕ���ǰ�ƺ�û���ַ���"<<endl;
			i++;
			e=c;
		}
		else
		{
			e=c;//pos of char ','
			for(c=f;c<e;c++)
			{
				if((int)j[c]<48||(int)j[c]>57)
				{
					cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�ڵڶ�����Ƕ���ǰ�ƺ������˲��ó��ֵ��ַ���"<<endl;
					i++;
					break;
				}
			}
		}
		f=e+1;
		for(c=f;c<a;c++)
		{
			if((int)j[c]==44)
			{
				break;
			}
		}
		if(c==a-1)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��һ��ò��ֻ���������žͽ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==a)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�ڵڶ�����Ƕ��ź��ƺ�û�а�Ƕ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==f)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��������Ƕ���ǰ�ƺ�û���ַ���"<<endl;
			i++;
			e=c;
		}
		else
		{
			e=c;//number of char','
			for(c=f;c<e;c++)
			{
				if((int)j[c]<48||(int)j[c]>57)
				{
					cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�ڵ�������Ƕ���ǰ�ƺ������˲��ó��ֵ��ַ���"<<endl;
					i++;
					break;
				}
			}
		}
		f=e+1;
		/////////////////////////////////////////////////////////////////////////////////////////////////////////
		for(c=f;c<a;c++)
		{
			if((int)j[c]==44)
			{
				break;
			}
		}
		if(c==a-1)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��һ��ò��ֻ���ĸ����žͽ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==a)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�ڵ�������Ƕ��ź��ƺ�û�а�Ƕ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==f)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)���ĸ���Ƕ���ǰ�ƺ�û���ַ���"<<endl;
			i++;
			e=c;
		}
		else
		{
			e=c;//number of char','
			if(c-f!=10)
			{
				cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)���ĸ���Ƕ���ǰ�ƺ��ַ���Ŀ���ԣ�"<<endl;
				i++;
			}
			else if((int)j[f]<48||(int)j[f]>57||(int)j[f+1]!=58||(int)j[f+2]<48||(int)j[f+2]>53||(int)j[f+3]<48||(int)j[f+3]>57||(int)j[f+4]!=58||(int)j[f+5]<48||(int)j[f+5]>53||(int)j[f+6]<48||(int)j[f+6]>57||(int)j[f+7]!=46||(int)j[f+8]<48||(int)j[f+8]>57||(int)j[f+9]<48||(int)j[f+9]>57)
			{
				cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)���ĸ���Ƕ���ǰ�ƺ����зǷ��ַ���"<<endl;
				i++;
			}
		}
		f=e+1;
		for(c=f;c<a;c++)
		{
			if((int)j[c]==44)
			{
				break;
			}
		}
		if(c==a-1)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��һ��ò��ֻ��������žͽ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==a)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�ڵ��ĸ���Ƕ��ź��ƺ�û�а�Ƕ����ˣ�"<<endl;
			i++;
			continue;
		}
		else if(c==f)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�������Ƕ���ǰ�ƺ�û���ַ���"<<endl;
			i++;
			e=c;
		}
		else
		{
			e=c;//number of char','
			if(c-f!=10)
			{
				cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�������Ƕ���ǰ�ƺ��ַ���Ŀ���ԣ�"<<endl;
				i++;
			}
			else if((int)j[f]<48||(int)j[f]>57||(int)j[f+1]!=58||(int)j[f+2]<48||(int)j[f+2]>53||(int)j[f+3]<48||(int)j[f+3]>57||(int)j[f+4]!=58||(int)j[f+5]<48||(int)j[f+5]>53||(int)j[f+6]<48||(int)j[f+6]>57||(int)j[f+7]!=46||(int)j[f+8]<48||(int)j[f+8]>57||(int)j[f+9]<48||(int)j[f+9]>57)
			{
				cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�������Ƕ���ǰ�ƺ����зǷ��ַ���"<<endl;
				i++;
			}
		}
		f=e+1;
		for(c=f;c<a;c++)
		{
			if((int)j[c]==59)
			{
				break;
			}
		}
		if(c==a)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)�������������β�İ�Ƿֺţ�"<<endl;
			i++;
		}
		else if(c==f)
		{
			cout<<"\n�����У�"<<d<<" ==> "<<j<<"\n(1�����)��β�İ�Ƿֺ�ǰ�ƺ�û���ַ���"<<endl;
			i++;
		}
		else{}
	}
	if(h==0)
	{
		cout<<"\n��Ч��Ϊ0,�޷���ɺ���������"<<endl;
		i++;
	}}
	else if(z==2)
	{
	
		for(k=0;k<h-1;k++)
		{
			if(all[k].num_s==all[k+1].num_s && all[k].num_l==all[k+1].num_l && all[k].num_w==all[k+1].num_w)
			{
				cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
				cout<<"�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
				cout<<"(2�����)�����е����������ƺ���ͬ=001��"<<endl;
				i++;
			}
			if(all[k].num_l!=1&&all[k].num_l!=2)
			{
				cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
				cout<<"(2�����)���е��������꺬�зǷ�����=002��"<<endl;
				i++;
			}
			if(k==h-2 && all[k+1].num_l!=1&&all[k+1].num_l!=2)
			{
				cout<<"\n�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
				cout<<"(2�����)���е��������꺬�зǷ�����=003��"<<endl;
				i++;
			}
			if(k==h-2 && cti(all[k+1].stime)>cti(all[k+1].etime)) 
			{
				cout<<"\n�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
				cout<<"(2�����)���е�ʱ����Ŀ�ʼʱ����ڽ���ʱ��=004��"<<endl;
				i++;
			}
			if(cti(all[k].stime)>cti(all[k].etime)) 
			{
				cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
				cout<<"(2�����)���е�ʱ����Ŀ�ʼʱ����ڽ���ʱ��=005��"<<endl;
				i++;
			}
			if(all[k].num_l==all[k+1].num_l && cti(all[k].etime)>cti(all[k+1].stime)&&((cti(all[k].etime)!=cti(all[k+1].etime) && cti(all[k].stime)!=cti(all[k+1].stime)) && cti(all[k].stime)!=cti(all[k].etime) && cti(all[k+1].stime)!=cti(all[k+1].etime)))
			{
				cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
				cout<<"�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
				cout<<"(2�����)�����е�ʱ������ڽ�������=006��"<<endl;
				i++;
			}
			if(k==0 && (all[k].num_s!=1 || all[k].num_l!=1 || all[k].num_w!=1))
			{
				cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
				cout<<"(2�����)���еĳ�ʼ���������Խ����=007��"<<endl;
				i++;
			}
			if(all[k].num_s==all[k+1].num_s || all[k].num_s==all[k+1].num_s-1)
			{
				if(all[k].num_s==all[k+1].num_s-1 && all[k+1].num_l!=1)
				{
					cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
					cout<<"�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
					cout<<"(2�����)�����е��������������Խ����=008��"<<endl;
					i++;
				}
				if(all[k].num_l==all[k+1].num_l || all[k].num_l==all[k+1].num_l-1)
				{
					if(all[k].num_l!=all[k+1].num_l-1 && all[k].num_l==all[k+1].num_l-1 && all[k+1].num_l!=1)
					{
						cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
						cout<<"�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
						cout<<"(2�����)�����е������������Խ����=009��"<<endl;
						i++;
					}
					if((all[k].num_l==all[k+1].num_l-1 || all[k].num_s==all[k+1].num_s-1) && all[k+1].num_w!=1)
					{
						cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
						cout<<"�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
						cout<<"(2�����)�����е������������Խ����=010��"<<endl;
						i++;
					}
					else
					{
					}
				}
				else
				{
					if(all[k].num_s!=all[k+1].num_s-1)
					{
						cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
						cout<<"�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
						cout<<"(2�����)�����е��������������Խ����=011��"<<endl;
						i++;
					}
				}
			}
			else
			{
				cout<<"\n�����У�"<<all[k].num_line<<" ==> "<<all[k].num_s<<","<<all[k].num_l<<","<<all[k].num_w<<","<<all[k].stime<<","<<all[k].etime<<","<<all[k].word<<";"<<endl;
				cout<<"�����У�"<<all[k+1].num_line<<" ==> "<<all[k+1].num_s<<","<<all[k+1].num_l<<","<<all[k+1].num_w<<","<<all[k+1].stime<<","<<all[k+1].etime<<","<<all[k+1].word<<";"<<endl;
				cout<<"(2�����)�����е������������Խ����=012��"<<endl;
				i++;
			}
		}
	}
	else{}
	cout<<"��"<<d<<"�����ݣ�������Ч��Ϊ"<<h<<"�У�һ���ҵ���"<<i+1<<"������"<<endl;
	a=0;
	b=0;
	c=0;
	e=0;
	f=0;
	g=0;
	k=0;
}
