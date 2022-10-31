#pragma once
class Player
{
private:
	int playerimage[8];     //プレイヤー画像
	int	KeyFlg;			    // 入力キー情報
	int	OldKey;				// 前回の入力キー
	int	NowKey;				// 今回の入力キー
	int Key;                  
	int x, y;              //プレイヤー座標
public:
	Player();
	~Player() {};
	void Move();
	void Draw() const;

};

