#pragma once
#include<SFML\Graphics.hpp>
#include<SFML\Audio.hpp>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<set>
#include<time.h>
class Animation
{
public:
	sf::RectangleShape rect1;
	sf::RectangleShape rect2;
	sf::RectangleShape rect3;
	sf::Sprite sprite1;
	sf::Sprite sprite2;
	sf::Sprite sprite3;
	sf::Texture texture;
	sf::Text text;
	sf::Font font;
	sf::Font font2;

	bool statement;
	int x, y;
	Animation(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	bool isSpriteClicked(sf::Sprite &sprite, sf::Vector2i mousepos);
	bool isRectClicked(sf::RectangleShape &rect, sf::Vector2i mousepos);
	std::string letterValue(int n);

	Animation();
	~Animation();

};

