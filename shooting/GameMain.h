#pragma once
#include "AbstractScene.h"
#include"Player.h"

class GameMain : public AbstractScene {
private:
	Player player;

	int haikeiimage;
public:
	GameMain();
	//�f�X�g���N�^
	~GameMain() {}
	void HitCheck();
	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;
	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const override;
};