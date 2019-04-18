#pragma once
#include "Animation.h"
class Final :
	public Animation
{
public:
	Final(float width , float height);
	~Final();

	void drawWin(sf::RenderWindow &window);
	void drawLose(sf::RenderWindow &window);
	Animation Again;
	Animation win;
	Animation lose;
	
private:
	sf::Texture wintexture;
	sf::Texture losetexture;
	sf::Texture pAgain;
	

};

