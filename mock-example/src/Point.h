
#ifndef __POINT__
#define __POINT__

#include "./Number.h"

class Point {
	private:
		Number* x;
		Number* y;

	public:
		Point(Number* x, Number* y) : x(x), y(y) {};

		void translate(const Point& translation) {
			x->add(translation.getX()->getValue());
			y->add(translation.getY()->getValue());
		}
		
		inline Number* getX() const {
			return x;
		}
		
		inline Number* getY() const {
			return y;
		}
};

#endif
