#include<SFML/Graphics.hpp>
#include"Menu.h"
#include"Player.h"
#include"Final.h"
#include<iostream>

int main()
{
    jump:
	srand(time(0));
	bool start = false, choosen = false, play = false, won = false , lose=false ;
	int choosn, no = 0;
	int error=0,chances=0;

	std::string category, word;
	sf::RenderWindow Main_window(sf::VideoMode(585,920), "Main Menu");
	
	Player player(Main_window.getSize().x, Main_window.getSize().y);
	menu menu1(Main_window.getSize().x, Main_window.getSize().y);
	Final fin(Main_window.getSize().x, Main_window.getSize().y);

	//************************************************************************************************************
	sf::Texture Main_texture;
	sf::Sprite Main_sprite;
	if (!Main_texture.loadFromFile("images/main.png"))
	{
		std::cout << "ERROR Main texture" << std::endl;
	}
	Main_sprite.setTexture(Main_texture);
	
	//*************************************************************************************************************
	while (Main_window.isOpen())
	{
		sf::Event event;
		while (Main_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				Main_window.close();
			sf::Vector2i mousepos = sf::Mouse::getPosition(Main_window);
			if (event.type == event.MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left&&event.mouseButton.x > 229 && event.mouseButton.x < 372 && event.mouseButton.y>575 && event.mouseButton.y < 733)
				{
					start = true;
					std::cout << mousepos.x << ' ' << mousepos.y << std::endl;
					Main_window.close();
				}

			}
			Main_window.display();
			Main_window.draw(Main_sprite);
		}
	}
	//Start Window code*****************************************************************************************************
		if (start)
		{
			sf::RenderWindow Start_game(sf::VideoMode(585, 920), "STart Game");
			while (Start_game.isOpen())
			{
				//Main_window.close();
				sf::Event event2;
				while (Start_game.pollEvent(event2))
				{
					if (event2.type == sf::Event::Closed)
					Start_game.close();
					if (event2.type == sf::Event::TextEntered)
					{
						if (event2.text.unicode !=8)
						menu1.input += (char)event2.text.unicode;
						menu1.text.setString(menu1.input);
						std::cout << "ASCII character typed: " << static_cast<char>(event2.text.unicode) << std::endl;
					}
					sf::Vector2i mousepos = sf::Mouse::getPosition(Start_game);
					if (event2.type == event2.MouseButtonPressed)
					{
					
						
						for (int i = 1; i <= 6; i++)
						{
							
							if (menu1.category[i].isSpriteClicked(menu1.category[i].sprite1, mousepos)&&no==0)
							{
								
								choosn = i;
								choosen = true;
								no++;
							}
						}
						if (choosen&&no==1)
						{
							menu1.updatespr(menu1.category[choosn].sprite1, choosn, Start_game);
							category = menu1.getCategory(choosn);
						}
						if ((choosen && menu1.category[7].isSpriteClicked(menu1.category[7].sprite1, mousepos)) ||(!menu1.input.isEmpty() && menu1.category[7].isSpriteClicked(menu1.category[7].sprite1, mousepos)))
						{
							std::cout << "clicked" << std::endl;
							play = true;
							Start_game.close();
						}
					}
					Start_game.display();
					menu1.draw(Start_game);
					Start_game.draw(menu1.text);
				}
				
			}
		}
	//******************************************************************************************************************
		

		if (play)
		{
			std::cout << word << std::endl;
			if (!menu1.input.isEmpty())
			{
				word = menu1.input;;
			}
			else {
				word = player.LoadWord(category);
			}
			int wLength=0;
			for (int i = 0; i < word.length(); i++)
			{
				if (word[i] == ' ')
					continue;
				else
					wLength++;
			}

			sf::RenderWindow Level1(sf::VideoMode(585, 920), "Hangman");
			while (Level1.isOpen())
			{

				sf::Event event3;
				while (Level1.pollEvent(event3))
				{
					if (event3.type == sf::Event::Closed)
						Level1.close();

					sf::Vector2i mouseposs = sf::Mouse::getPosition(Level1);
					if (event3.type == event3.MouseButtonPressed)
					{
						for (int i = 0; i < 26; i++)
						{
							if (player.letters[i].isRectClicked(player.letters[i].rect1, mouseposs))
							{
								player.letterValue(i);
							}
						}
						for (int i = 0; i < 26; i++) {
							for (int j = 0; j < word.length(); j++)
							{
								std::string c;
								c.push_back(word[j]);


								if (player.letters[i].isRectClicked(player.letters[i].rect1, mouseposs) && player.letters[i].text.getString() == c)
								{
									player.letters[i].rect1.setFillColor(sf::Color::Green);
									chances++;
								}
							}
							if (player.letters[i].isRectClicked(player.letters[i].rect1, mouseposs) && player.letters[i].rect1.getFillColor() != sf::Color::Green)
							{
								error++;
								player.letters[i].rect1.setFillColor(sf::Color::Red);
							}
						}
					}
					if (error == 9)
					{
						lose = true;
						Level1.close();
						std::cout << "YOU LOSE";
					}
					if (chances == wLength)
					{
						won = true;
						Level1.close();
						std::cout << "YOU WIN";
					}
				}
				
				Level1.display();
				
				player.draw(Level1);
				player.drawH(Level1, error);
				player.drawLevel1(word, Level1);
				
			}
		
		}

		if (won)
		{
			sf::RenderWindow window(sf::VideoMode(585, 920), "YOU_WIN");
			while (window.isOpen())
			{
				sf::Event event;
				while (window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						window.close();
					sf::Vector2i mouseposs = sf::Mouse::getPosition(window);
					if (event.type == event.MouseButtonPressed)
					{
						if(fin.Again.isSpriteClicked(fin.Again.sprite1,mouseposs))
						goto jump;
					}
				}
				window.display();
				fin.drawWin(window);
			}
		}
		if (lose)
		{
			sf::RenderWindow window(sf::VideoMode(585, 920), "YOU_LOSE");
			while (window.isOpen())
			{
				sf::Event event;
				while (window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						window.close();
					sf::Vector2i mouseposs = sf::Mouse::getPosition(window);
					if (event.type == event.MouseButtonPressed)
					{
						if (fin.Again.isSpriteClicked(fin.Again.sprite1, mouseposs))
							goto jump;
					}
					
				}
				window.display();
				fin.drawLose(window);

			}
		}
		
	
	return 0;
}