#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:
    Player();
    void handleInput(); // Funkcja obs³uguj¹ca wejœcia gracza
    void update(float dt); // Funkcja aktualizuj¹ca stan gracza
    void draw(sf::RenderWindow& window); // Funkcja rysuj¹ca gracza na ekranie

    sf::Vector2f getPosition() const; // Pobranie pozycji gracza
    sf::FloatRect getBounds() const; // Pobranie granic kolizji gracza
    void setPosition(float x, float y); // Ustawienie pozycji gracza
    void setVelocityY(float velocityY); // Ustawienie prêdkoœci pionowej gracza
    void setJumping(bool isJumping); // Ustawienie stanu skakania gracza

private:
    sf::RectangleShape mShape; // Kszta³t gracza
    sf::Vector2f mVelocity; // Prêdkoœæ gracza
    bool mIsJumping; // Flaga okreœlaj¹ca, czy gracz skacze
};