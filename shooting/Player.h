#pragma once
class Player
{
private:
	int playerimage[8];     //�v���C���[�摜
	int	KeyFlg;			    // ���̓L�[���
	int	OldKey;				// �O��̓��̓L�[
	int	NowKey;				// ����̓��̓L�[
	int Key;                  
	int x, y;              //�v���C���[���W
public:
	Player();
	~Player() {};
	void Move();
	void Draw() const;

};

