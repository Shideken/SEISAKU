#pragma once
class SphereCollider
{
private:
	int location;  //’†SÀ•W
	int radius;
public:
	SphereCollider();
	~SphereCollider() {};

	void HitSphere();
	void GetLocation();
	void SetLocation();

};

