#pragma once
#include "AbstractScene.h"

class GameMain : public AbstractScene {
private:

public:
	GameMain();
	//�f�X�g���N�^
	~GameMain() {};
	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;
	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const override;
};