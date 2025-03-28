#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:
    Player();
    void handleInput(); // Funkcja obsługująca wejścia gracza
    void update(float dt); // Funkcja aktualizująca stan gracza
    void draw(sf::RenderWindow& window); // Funkcja rysująca gracza na ekranie

    sf::Vector2f getPosition() const; // Pobranie pozycji gracza
    sf::FloatRect getBounds() const; // Pobranie granic kolizji gracza
    void setPosition(float x, float y); // Ustawienie pozycji gracza
    void setVelocityY(float velocityY); // Ustawienie prędkości pionowej gracza
    void setJumping(bool isJumping); // Ustawienie stanu skakania gracza

private:
    sf::RectangleShape mShape; // Kształt gracza
    sf::Vector2f mVelocity; // Prędkość gracza
    bool mIsJumping; // Flaga określająca, czy gracz skacze
};