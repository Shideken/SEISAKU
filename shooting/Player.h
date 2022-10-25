#pragma once
class Player
{
private:
	int playerimage[8];
	int x, y;
public:
	Player();
	~Player() {};
	void Move();
	void Draw() const;

};

