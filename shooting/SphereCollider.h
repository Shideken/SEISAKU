#pragma once
class SphereCollider
{
private:
	int location;  //���S���W
	int radius;
public:
	SphereCollider();
	~SphereCollider() {};

	void HitSphere();
	void GetLocation();
	void SetLocation();

};

