#include <iostream>
#include <SFML/Graphics.hpp>
#include "Automovil.h"

int main() {
    Automovil toyota {0, 0, 6, 3, 'B',
                      "yaris", nullptr,
                      "ABB201", 12, 0, 1};

    std::cout << toyota.get_modelo() << std::endl;
    std::cout << toyota.get_dueno() << std::endl;
    std::cout << toyota.get_velocidad_x() << std::endl;
    std::cout << toyota.get_velocidad_y() << std::endl;

    return 0;
}


//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
//
//    return 0;
//}