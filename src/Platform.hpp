#pragma once

#include <SFML/Graphics.hpp>

class Platform
{
public:
    Platform(float x, float y, float width, float height);
    void draw(sf::RenderWindow& window); // Funkcja rysuj�ca platform� na ekranie

    sf::FloatRect getBounds() const; // Pobranie granic kolizji platformy

private:
    sf::RectangleShape mShape; // Kszta�t platformy
};