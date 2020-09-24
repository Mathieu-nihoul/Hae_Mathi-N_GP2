#pragma once

class Vec2 {
public:
	int x;
	int y;

	Vec2(int x, int y) {
		this->x = x;
		this->y = y;
	}

	Vec2() {
		this->x = 0;
		this->y = 0;
	}
	Vec2 Add(Vec2 a) {
		Vec2 b;
		b.x = this->x + a.x;
		b.y = this->y + a.y;
		return b;
	}
	Vec2 Supp(Vec2 a) {
		Vec2 b;
		b.x = this->x - a.x;
		b.y = this->y - a.y;
		return b;
	}
	Vec2 Mult(Vec2 a) {
		Vec2 b;
		b.x = this->x * a.x;
		b.y = this->y * a.y;
		return b;
	}
	Vec2 Div(Vec2 a) {
		Vec2 b;
		b.x = this->x / a.x;
		b.y = this->y / a.y;
		return b;
	}
};

