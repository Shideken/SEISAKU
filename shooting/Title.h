#pragma once
#include "AbstractScene.h"
#include"PadInput.h"

class Title :
    public AbstractScene
{
private:
    PAD pad;
public:
    //�R���X�g���N�^
    Title();
    //�f�X�g���N�^
    ~Title()
    {
    }
    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;
    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
};

