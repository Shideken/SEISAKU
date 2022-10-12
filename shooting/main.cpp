#include "DxLib.h"
#include"SceneManager.h"
#include"GameMain.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow) {
	// �^�C�g��
	SetMainWindowText("�V���[�e�B���O"); //�Q�[���^�C�g��
	SetOutApplicationLogValidFlag(FALSE);   //���O�o�͂𖳌��ɂ���
	ChangeWindowMode(TRUE);// �E�B���h�E���[�h�ŋN��
	SetGraphMode(720, 720, 0); //��ʃT�C�Y
	if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������
	SetDrawScreen(DX_SCREEN_BACK);// �`����ʂ𗠂ɂ���
	SceneManager* sceneMng;
	sceneMng = new SceneManager((AbstractScene*)new GameMain());
	// �Q�[�����[�v
	while ((ProcessMessage() == 0) || (sceneMng->Update() != nullptr)) {
		ClearDrawScreen();		// ��ʂ̏�����
		sceneMng->Draw();
		ScreenFlip();			// ����ʂ̓��e��\��ʂɔ��f
	}
	DxLib_End();	// DX���C�u�����g�p�̏I������

	return 0;
}