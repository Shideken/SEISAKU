#include"DxLib.h"
#include"SceneManager.h"
#include"pad.h"
#include"Title.h"


Pad pad;
/***********************************************
 * �v���O�����̊J�n
 ***********************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {

    // �^�C�g���� test �ɕύX
    SetMainWindowText("�Q�[��");
    SetGraphMode(1280, 720, 16);  //��ʃT�C�Y
    ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

    if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������


    SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���
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

    // �Q�[�����[�v
    while (ProcessMessage() == 0 && sceneMng->Update() != nullptr) {
        pad.g_OldKey = pad.g_NowKey;
        pad.g_NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
        pad.g_KeyFlg = pad.g_NowKey & ~pad.g_OldKey;
        ClearDrawScreen();		// ��ʂ̏�����
        sceneMng->Draw();
        ScreenFlip();
    }

    DxLib_End();	// DX���C�u�����g�p�̏I������

    return 0;	// �\�t�g�̏I��
}