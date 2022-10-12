#include "DxLib.h"
#include"SceneManager.h"
#include"GameMain.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow) {
	// タイトル
	SetMainWindowText("シューティング"); //ゲームタイトル
	SetOutApplicationLogValidFlag(FALSE);   //ログ出力を無効にする
	ChangeWindowMode(TRUE);// ウィンドウモードで起動
	SetGraphMode(720, 720, 0); //画面サイズ
	if (DxLib_Init() == -1) return -1;	// DXライブラリの初期化処理
	SetDrawScreen(DX_SCREEN_BACK);// 描画先画面を裏にする
	SceneManager* sceneMng;
	sceneMng = new SceneManager((AbstractScene*)new GameMain());
	// ゲームループ
	while ((ProcessMessage() == 0) || (sceneMng->Update() != nullptr)) {
		ClearDrawScreen();		// 画面の初期化
		sceneMng->Draw();
		ScreenFlip();			// 裏画面の内容を表画面に反映
	}
	DxLib_End();	// DXライブラリ使用の終了処理

	return 0;
}