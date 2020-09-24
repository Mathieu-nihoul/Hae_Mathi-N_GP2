#pragma once

	template<typename T>

	class Vec3T
	{

	public:
		T x;
		T y;
		T z;
		Vec3T<T>() {
			x = {};
			y = {};
			z = {};
		}
		Vec3T<T>(T x, T y,T z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}

		Vec3T<T> Supp(Vec3T<T> a) {
			Vec3T<T> res;
			res.x = this->x - a.x;
			res.y = this->y - a.y;
			res.z = this->z - a.z;
			return res;
		}
		Vec3T<T> Add(Vec3T<T> a) {
			Vec3T<T> res;
			res.x = this->x + a.x;
			res.y = this->y + a.y;
			res.z = this->z + a.z;
			return res;
		}
		Vec3T<T> Mult(Vec3T<T> a) {
			Vec3T<T> res;
			res.x = this->x * a.x;
			res.y = this->y * a.y;
			res.z = this->z * a.z;
			return res;
		}
		Vec3T<T> Div(Vec3T<T> a) {
			Vec3T<T> res;
			res.x = this->x / a.x;
			res.y = this->y / a.y;
			res.z = this->z / a.z;
			return res;
		}


	};

