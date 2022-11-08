#include"DxLib.h"
#include"Player.h"
#include"pad.h"

Player::Player()
{
	x = 640;
	y = 640;
	speed = 20;
	if (LoadDivGraph("Images/Akabei.png", 8, 8, 1, 32, 32, playerimage) == -1);
}

void Player::Move() 
{
	if (pad.g_NowKey & PAD_INPUT_RIGHT)x += speed;
	if (pad.g_NowKey & PAD_INPUT_LEFT)x -= speed;

  
}

void Player::Draw() const
{
	DrawGraph(x, y, playerimage[1],TRUE);
}