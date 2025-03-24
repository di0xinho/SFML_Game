#include "Platform.hpp"

Platform::Platform(float x, float y, float width, float height)
    : mShape(sf::Vector2f(width, height)) // Inicjalizacja kszta³tu platformy
{
    mShape.setFillColor(sf::Color::Red); // Ustawienie koloru kszta³tu platformy
    mShape.setPosition(x, y); // Ustawienie pozycji platformy
}

void Platform::draw(sf::RenderWindow& window)
{
    window.draw(mShape); // Rysowanie platformy na ekranie
}

sf::FloatRect Platform::getBounds() const
{
    return mShape.getGlobalBounds(); // Pobranie granic kolizji platformy
}