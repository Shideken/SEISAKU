#pragma once
#include "AbstractScene.h"

class GameMain : public AbstractScene {
private:
	int haikeiimage;
	int* player; 
	int* enemy[];
public:
	GameMain();
	//デストラクタ
	~GameMain() {}
	void HitCheck();
	//描画以外の更新を実装する
	virtual AbstractScene* Update() override;
	//描画に関することを実装する
	virtual void Draw() const override;
};