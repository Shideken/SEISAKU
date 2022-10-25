#pragma once
class CharaBase
{
private:
	int* bullets[5];
	int speed;
	int image;
public:
	CharaBase();
	~CharaBase() {};

	virtual void Update()=0;
	virtual void Draw() = 0;
	virtual void Hit() = 0;
	void GetBullets();

};
