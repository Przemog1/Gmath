#pragma once

namespace gmath
{
	struct Vec2f
	{
		float x;
		float y;

		Vec2f();
		Vec2f(float s);
		Vec2f(float x, float y);

		Vec2f& operator+=(const Vec2f& other);
		Vec2f& operator-=(const Vec2f& other);
		Vec2f& operator*=(float scalar);

		Vec2f& normalize();

		float getLength();

		void print() const;
	};
}