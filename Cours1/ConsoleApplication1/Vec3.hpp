#pragma once
class Vec3
{
public:
	int x;
	int y;
	int z;

	Vec3(int x, int y , int z ) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vec3(int x, int y) {
		this->x = x;
		this->y = y;
		this->z = 0;
	}
	Vec3() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	Vec3 Add(Vec3 a) {
		Vec3 ret;
		ret.x = this->x + a.x;
		ret.y = this->y + a.y;
		ret.z = this->z + a.z;
		return ret;
	}
	Vec3 Supp(Vec3 a) {
		Vec3 ret;
		ret.x = this->x - a.x;
		ret.y = this->y - a.y;
		ret.z = this->z - a.z;
		return ret;
	}
	Vec3 Mult(Vec3 a) {
		Vec3 ret;
		ret.x = this->x * a.x;
		ret.y = this->y * a.y;
		ret.z = this->z * a.z;
		return ret;
	}
	Vec3 Div(Vec3 a) {
		Vec3 ret;
		ret.x = this->x / a.x;
		ret.y = this->y / a.y;
		ret.z = this->z / a.z;
		return ret;
	}
};

