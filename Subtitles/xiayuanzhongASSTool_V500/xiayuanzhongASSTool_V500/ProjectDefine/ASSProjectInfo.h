#pragma once
#include <string>

class xiayuanzhongASSProjectInfo
{
public:
	void setProjectName( std::string temp );                         //������Ŀ����(ͬʱ�Զ�����1,3,6)
	void setLrcFile( std::string temp );                             //���ø�ʶ�ȡ�ļ�(Unicode)
	void setTimelineFile( std::string temp );                        //����ʱ�����ļ�ASS(Unicode)
	void setFontFile( std::string temp );                            //�������嶨���ļ�(Unicode)

private:
	std::string ProjectName;                                         //ID:1 ��Ŀ����
	std::string LrcFile;                                             //ID:2 ����ļ�����ʱ����(Unicode)
	std::string OutputFile;                                          //ID:3 ����ĳ�ƷASS(Unicode)
	std::string TimelineFile;                                        //ID:4 ʱ�����ļ�ASS(Unicode)
	std::string FontFile;                                            //ID:5 �����趨�ļ�(Unicode)
	std::string RecordFile;                                          //ID:6 �������̼�¼�ļ�(ANSI)
};
