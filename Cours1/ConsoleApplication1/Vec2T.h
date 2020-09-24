#pragma once

template<typename T>

class Vec2T
{
public:
	T x;
	T y;

	Vec2T<T>() {
		x = {};
		y = {};
	}
	Vec2T<T>(T x, T y) {
		this->x = x;
		this->y = y;
	}

	Vec2T<T> Add(Vec2T<T> a) {
		Vec2T<T> res;
		res.x = this->x + a.x;
		res.y = this->y + a.y;
		return res;
	}
	Vec2T<T> Supp(Vec2T<T> a) {
		Vec2T<T> res;
		res.x = this->x - a.x;
		res.y = this->y - a.y;
		return res;
	}
	Vec2T<T> Mult(Vec2T<T> a) {
		Vec2T<T> res;
		res.x = this->x * a.x;
		res.y = this->y * a.y;
		return res;
	}
	Vec2T<T> Div(Vec2T<T> a) {
		Vec2T<T> res;
		res.x = this->x / a.x;
		res.y = this->y / a.y;
		return res;
	}
	
};

