#include "Player.hpp"

Player::Player()
    : mShape(sf::Vector2f(50.f, 50.f)) // Inicjalizacja kszta³tu gracza
    , mVelocity(0.f, 0.f) // Inicjalizacja prêdkoœci gracza
    , mIsJumping(false) // Inicjalizacja flagi skakania
{
    mShape.setFillColor(sf::Color::Green); // Ustawienie koloru kszta³tu gracza
    mShape.setPosition(100.f, 300.f); // Ustawienie pozycji gracza
}

void Player::handleInput()
{
    // Obs³uga ruchu w lewo i w prawo
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        mVelocity.x = -200.f;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        mVelocity.x = 200.f;
    }
    else
    {
        mVelocity.x = 0.f;
    }

    // Obs³uga skoku
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !mIsJumping)
    {
        mVelocity.y = -300.f;
        mIsJumping = true;
    }
}

void Player::update(float dt)
{
    mVelocity.y += 981.f * dt; // Grawitacja
    mShape.move(mVelocity * dt); // Przemieszczenie gracza

    // Ograniczenie ruchu do dolnej krawêdzi okna
    if (mShape.getPosition().y + mShape.getSize().y >= 600.f)
    {
        mShape.setPosition(mShape.getPosition().x, 600.f - mShape.getSize().y);
        mVelocity.y = 0.f;
        mIsJumping = false;
    }
}

void Player::draw(sf::RenderWindow& window)
{
    window.draw(mShape); // Rysowanie gracza na ekranie
}

sf::Vector2f Player::getPosition() const
{
    return mShape.getPosition(); // Pobranie pozycji gracza
}

sf::FloatRect Player::getBounds() const
{
    return mShape.getGlobalBounds(); // Pobranie granic kolizji gracza
}

void Player::setPosition(float x, float y)
{
    mShape.setPosition(x, y); // Ustawienie pozycji gracza
}

void Player::setVelocityY(float velocityY)
{
    mVelocity.y = velocityY; // Ustawienie prêdkoœci pionowej gracza
}

void Player::setJumping(bool isJumping)
{
    mIsJumping = isJumping; // Ustawienie flagi skakania gracza
}