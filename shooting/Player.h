#pragma once
class Player
{
private:
	int playerimage[8];     //�v���C���[�摜
	int	speed;            //����
	int x, y;              //�v���C���[���W
public:
	Player();
	~Player() {};
	void Move();
	void Draw() const;

};

