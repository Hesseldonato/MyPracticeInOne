#include "stdafx.h"
#include "..\stdafx.h"
/*static*/ void ASScodeCore::Order()//�����ã��������i=-1
{
	int o=0,p=0,q=0,r=0,s=0,t=0;
	DATA temp;
	for(o=1;o<=h-1;o++)
	{
		temp=all[o];
		p=o-1;
		while(all[p].num_s>temp.num_s&&p>-1)
		{
			all[p+1]=all[p];
			p--;
		}
		all[p+1]=temp;
	}
	for(o=1;o<=h-1;o++)
	{
		
		temp=all[o];
		p=o-1;
		if(all[p].num_s==all[o].num_s)
		{
			while(all[p].num_l>temp.num_l&&p>-1)
			{
				all[p+1]=all[p];
				p--;
			}
			all[p+1]=temp;
		}
	}
	for(o=1;o<=h-1;o++)
	{
		
		temp=all[o];
		p=o-1;
		if(all[p].num_s==all[o].num_s&&all[p].num_l==all[o].num_l)
		{
			while(all[p].num_w>temp.num_w&&p>-1)
			{
				all[p+1]=all[p];
				p--;
			}
			all[p+1]=temp;
		}
	}

	cout<<endl;
	for(o=0;o<h;o++)
	{
		cout<<all[o].num_s<<","<<all[o].num_l<<","<<all[o].num_w<<","<<all[o].stime<<","<<all[o].etime<<","<<all[o].word<<"; --"<<all[o].num_line<<"--"<<endl;
	}
}