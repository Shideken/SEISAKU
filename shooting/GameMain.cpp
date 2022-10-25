#include<math.h>
#include"DxLib.h"
#include"GameMain.h"

GameMain::GameMain()
{
if ((haikeiimage = LoadGraph("images/Haikei.png")) == -1);
	
}

AbstractScene* GameMain::Update() {

	return this;
}

void GameMain::Draw() const {
	DrawGraph(0, 0, haikeiimage, FALSE);
	player.Draw();
}