#pragma once
class Player
{
private:
	int playerimage[8];     //プレイヤー画像
	int	speed;            //速さ
	int x, y;              //プレイヤー座標
public:
	Player();
	~Player() {};
	void Move();
	void Draw() const;

};

