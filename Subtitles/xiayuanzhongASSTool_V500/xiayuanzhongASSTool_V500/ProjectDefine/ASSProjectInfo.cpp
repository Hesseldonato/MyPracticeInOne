#include "StdAfx.h"
#include "ASSProjectInfo.h"

void xiayuanzhongASSProjectInfo::setProjectName( std::string temp )       //������Ŀ����(ͬʱ�Զ�����)
{
	ProjectName = temp;
	OutputFile = temp + "_Fin.ass";
	RecordFile = temp + "_Record.ass";
	return;
}

void xiayuanzhongASSProjectInfo::setLrcFile( std::string temp )           //���ø�ʶ�ȡ�ļ�(Unicode)
{
	LrcFile = temp;
	return;
}

void xiayuanzhongASSProjectInfo::setTimelineFile( std::string temp )      //����ʱ�����ļ�ASS(Unicode)
{
	TimelineFile = temp;
	return;
}

void xiayuanzhongASSProjectInfo::setFontFile( std::string temp )          //�������嶨���ļ�(Unicode)
{
	FontFile = temp;
	return;
}
