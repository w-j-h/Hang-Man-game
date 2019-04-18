#include "Animation.h"





Animation::Animation()
{
	rect1.setSize(sf::Vector2f(24, 24));
	rect2.setSize(sf::Vector2f(24, 24));
	rect3.setSize(sf::Vector2f(24, 34));
	rect1.setFillColor(sf::Color::Green);
	rect1.setFillColor(sf::Color::Green);
	rect1.setFillColor(sf::Color::Green);
	sprite1.setPosition(sf::Vector2f(0, 100));
	sprite2.setPosition(sf::Vector2f(0, 100));
	sprite3.setPosition(sf::Vector2f(0, 100));
	statement = false;
}


Animation::~Animation()
{
}
bool Animation::isSpriteClicked(sf::Sprite &sprite, sf::Vector2i mousepos)
{
	sf::Vector2f ms(mousepos);
	if (sprite.getGlobalBounds().contains(ms))
	{
		return true;
	}
	return false;
}

bool Animation::isRectClicked(sf::RectangleShape &rect, sf::Vector2i mousepos)
{
	sf::Vector2f ms(mousepos);
	if (rect.getGlobalBounds().contains(ms))
	{
		return true;
	}
	return false;
}


