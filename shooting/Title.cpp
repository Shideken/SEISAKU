#include"DxLib.h"
#include "Title.h"
#include "GameMain.h"

Title::Title()
{

}

AbstractScene* Title::Update()
{


	return this;
}

void Title::Draw() const
{
	DrawString(0, 0, "A�ŃQ�[��", GetColor(255, 0, 0));
}