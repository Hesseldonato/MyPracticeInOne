#pragma once
#include <string>

#include "ProjectDefine\ASSProjectInfo.h"
#include "ComputeHelper\ASSComputeHelper.h"
#include "Core\ASSComputeCore.h"
#include "FilterFunctions\VSFilter.h"

class xiayuanzhongUnionAllClasses
{
public:
	xiayuanzhongUnionAllClasses( std::string ID );                 //����ʱ�ʹ���ID��
	
private:
	void WRITE( short mode, std::string temp );                    //���ֽڣ�ע��'\n'/mode = 1-->CN & 2-->EN
};
