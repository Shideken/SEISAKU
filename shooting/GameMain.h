#pragma once
#include "AbstractScene.h"

class GameMain : public AbstractScene {
private:
	int haikeiimage;
	int* player; 
	int* enemy[];
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