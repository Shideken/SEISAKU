#pragma once
#include"DxLib.h"
 
class PAD
{
private:

public:
	PAD();
	int g_OldKey;
	int g_NowKey;
	int g_KeyFlg;
	void PadInput();
};

