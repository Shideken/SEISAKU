#include"DxLib.h"
#include"SceneManager.h"
#include"pad.h"
#include"Title.h"


Pad pad;
/***********************************************
 * プログラムの開始
 ***********************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {

    // タイトルを test に変更
    SetMainWindowText("ゲーム");
    SetGraphMode(1280, 720, 16);  //画面サイズ
    ChangeWindowMode(TRUE);		// ウィンドウモードで起動

    if (DxLib_Init() == -1) return -1;	// DXライブラリの初期化処理


    SetDrawScreen(DX_SCREEN_BACK);	// 描画先画面を裏にする
    SceneManager* sceneMng;

    try
    {
        sceneMng = new SceneManager((AbstractScene*)new Title());

    }
    catch (const char* err)
    {
        OutputDebugString(err);
        return 0;
    }

    // ゲームループ
    while (ProcessMessage() == 0 && sceneMng->Update() != nullptr) {
        pad.g_OldKey = pad.g_NowKey;
        pad.g_NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
        pad.g_KeyFlg = pad.g_NowKey & ~pad.g_OldKey;
        ClearDrawScreen();		// 画面の初期化
        sceneMng->Draw();
        ScreenFlip();
    }

    DxLib_End();	// DXライブラリ使用の終了処理

    return 0;	// ソフトの終了
}