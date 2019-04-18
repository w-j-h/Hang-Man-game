#include "Final.h"



Final::Final(float width, float height)
{
	if (!wintexture.loadFromFile("images/main.png"))
	{
		//error
	}
	if (!pAgain.loadFromFile("images/button6.png"))
	{
		//error
	}
	if (!font.loadFromFile("fonts/SF.ttf"))
	{
		std::cout << "Error\n";
	}
	if (!font2.loadFromFile("fonts/constanb.ttf"))
	{
		std::cout << "Error\n";
	}

	sf::IntRect pArect(0, 0, 321, 128);
	Again.sprite1.setTexture(pAgain);
	Again.sprite1.setTextureRect(pArect);
	Again.sprite1.setPosition(sf::Vector2f(160,520));
	Again.text.setPosition(sf::Vector2f(200, 550));
	Again.text.setString("PLAY AGAIN");
	Again.text.setFont(font);
	Again.text.setFillColor(sf::Color::Black);
	Again.text.setCharacterSize(35);
	


	win.text.setFont(font);
	win.text.setFillColor(sf::Color::Yellow);
	win.text.setString("YOU WIN");
	win.text.setCharacterSize(60);
	win.text.setPosition(sf::Vector2f(120, 420));

	lose.text.setFont(font);
	lose.text.setFillColor(sf::Color::Yellow);
	lose.text.setString("YOU LOSE");
	lose.text.setCharacterSize(60);
	lose.text.setPosition(sf::Vector2f(120, 420));

}	  


Final::~Final()
{
}

void Final::drawWin(sf::RenderWindow & window)
{
	window.draw(Again.sprite1);
	window.draw(Again.text);
	window.draw(win.text);
}

void Final::drawLose(sf::RenderWindow & window)
{
	window.draw(Again.sprite1);
	window.draw(Again.text);
	window.draw(lose.text);
}
