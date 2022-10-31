#include"DxLib.h"
#include"Player.h"
#include"pad.h"

Player::Player()
{
	x = 640;
	y = 640;
	int Key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (LoadDivGraph("Images/Akabei.png", 8, 8, 1, 32, 32, playerimage) == -1);
}

void Player::Move() 
{
	OldKey = NowKey;
	NowKey = Key;
	KeyFlg = NowKey & ~OldKey;
	if (KeyFlg & PAD_INPUT_RIGHT)	x += 30;
	if (KeyFlg & PAD_INPUT_LEFT)	x -= 30;

  
}

void Player::Draw() const
{
	DrawGraph(x, y, playerimage[1],TRUE);
}