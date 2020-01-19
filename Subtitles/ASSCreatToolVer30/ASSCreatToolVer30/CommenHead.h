#pragma once

#include <sdkddkver.h>
#define _WIN32_WINNT_WINXP 0x0501

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <stdlib.h>
#define PI M_PI
#define asc1 65
#define asc2 97;
using namespace std;

static const char Version[5]="3.0";
static const short KaraokeLineAmount=500;
static const short SingleWordLenth=20;
static const short AllSentenceAmount=40;
static const short WordsInLineAmount=30;
static short Height=408;
static short Width=720;
static short WordSize=30;
static short EnglishWordWidthB[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//��д
static short EnglishWordWidthL[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//Сд
static short ChineseWordWidth=0;

/*time���㹫��*/
static short AccentuationTime=60;//ǿ����Ҫ��ʱ��(��λ��1)
static short AppearanceAlternation=15;//�����ֵı�׼���ʱ=�ڶ����ֵĳ���-��һ���ֵĳ���=�ڶ����ֵ��˳�-�ڶ����ֵ��˳�(��λ������)
static short TimeToEnter=25;//��������Ҫ��ʱ��
static short TimeToStart=20;//���������ʱ���뿪ʼǿ����ʱ����
static short TimeToLeave=20;//���һ����ǿ��������ʱ���뿪ʼ�˳������ʱ����
static short TimeToDisappear=25;//�˳�����Ҫ��ʱ��
/*pos���㹫��*/
static short EdgeDistanceX=0;//X����߾�30
static short EdgeDistanceY=0;//Y����߾�20

static short LineAmount;//��������
static char WordDetailJP[AllSentenceAmount][WordsInLineAmount][SingleWordLenth];//�洢JP�ַ�ϸ��
static char WordDetailCN[AllSentenceAmount][WordsInLineAmount][SingleWordLenth];//�洢CN�ַ�ϸ��
static short AmountJP[AllSentenceAmount];//�洢ÿ��JP���ָ������
static short AmountCN[AllSentenceAmount];//�洢ÿ��CN���ָ������
static long TimeJP[AllSentenceAmount][WordsInLineAmount][6];//�洢����ʱ��[JP];format[sentence][word][menu]
static long TimeCN[AllSentenceAmount][WordsInLineAmount][6];//�洢����ʱ��[CN];format[sentence][word][menu]
static short WordLenthJP[AllSentenceAmount][WordsInLineAmount];//�洢ÿ��JP�ֵ����س���
static short WordLenthCN[AllSentenceAmount][WordsInLineAmount];//�洢ÿ��CN�ֵ����س���
static short LineLenthJP[AllSentenceAmount];//�洢ÿ��JP�������س���
static short LineLenthCN[AllSentenceAmount];//�洢ÿ��CN�������س���
static short PosJP[AllSentenceAmount][WordsInLineAmount][2];//�洢λ��[JP];format[sentence][word][pos]
static short PosCN[AllSentenceAmount][WordsInLineAmount][2];//�洢λ��[CN];format[sentence][word][pos]

static fstream ass_originCN;
static fstream ass_originJP;
static fstream ass_originJPrm;
static fstream ass_originROCK;
static char openfileCN[100];
static char openfileJP[100];
static char openfileJPrm[100];
static char openfileROCK[100];
static fstream ass_out;
static char savefile[100];
static fstream ass_in;
static char karaokefile[100];
static fstream ass_temp;
static char tempfile[100];


#include "Structures\[C]DATA.h"
static DATA all[KaraokeLineAmount];
#include "Structures\[C]ScriptInfo.h"

#include "Core\[C]ASScodeCore.h"

#include "UsefulFunction\[F]RAND.h"
#include "UsefulFunction\[F]KCreator.h"
#include "FilterDLL\VSFilter.h"
#include "FilterDLL\VSFilterMod.h"

#include "Animation\AllAnimation.h"
//#include "Test\TestList.h"