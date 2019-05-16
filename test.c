/**
*
* @Name : FirstSFML/test.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-05-16
* @Released under : https://github.com/BaseMax/FirstSFML/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/FirstSFML
*
**/
#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
	RenderWindow window(sf::VideoMode(400, 400), "SFML");
	CircleShape shape(100);
	shape.setFillColor(Color::Green);
	while(window.isOpen()) {
		Event event;
		while(window.pollEvent(event)) {
			if(event.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}
