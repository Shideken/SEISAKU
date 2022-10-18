#include"DxLib.h"
#include "Title.h"
#include"PadInput.h"
#include "GameMain.h"

Title::Title()
{

}

AbstractScene* Title::Update()
{
	

	if (pad.g_KeyFlg&& XINPUT_BUTTON_A)
	{
		return new GameMain();
	}

	return this;
}

void Title::Draw() const
{
	DrawString(0, 0, "AÇ≈ÉQÅ[ÉÄ", GetColor(255, 0, 0));
}