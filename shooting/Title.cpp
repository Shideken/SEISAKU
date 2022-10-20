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
	DrawString(0, 0, "AÇ≈ÉQÅ[ÉÄ", GetColor(255, 0, 0));
}