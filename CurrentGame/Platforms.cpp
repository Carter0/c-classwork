//#include "stdafx.h"
#include "Platforms.h"

using namespace sf;

void Platforms::move() {

    rectangle.setSize((Vector2f(64, 32)));
	rectangle.setFillColor(Color::Green);

	while (rectangle.getPosition().x < 600) {

		rectangle.move(0.1, 0);

	}
		

	


}
