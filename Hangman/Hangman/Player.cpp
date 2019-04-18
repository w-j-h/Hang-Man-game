#include "Player.h"



Player::Player(float width, float height)
{
	if (!font.loadFromFile("fonts/constanb.ttf"))
	{
		//error
	}
	if (!background.loadFromFile("images/background1.png"))
	{
		//error
	}
	if (!font2.loadFromFile("fonts/SF.ttf"))
	{
		//error
	}
	backsprite.setTexture(background);
	if (!texture.loadFromFile("images/button1.png"))
	{
		std::cout << "Error play button " << std::endl;
	}
	for (int i=0; i < 27; i++)
	{
		letters[i].rect1.setSize(sf::Vector2f(45,45));
		letters[i].rect1.setFillColor(sf::Color::White);
		letters[i].rect1.setOutlineColor(sf::Color::Black);
		letters[i].rect1.setOutlineThickness(2);
	}

	
	
	letters[0].rect1.setPosition(sf::Vector2f(x - 545,y -  250));
	letters[1].rect1.setPosition(sf::Vector2f(x - 490,y -  250));
	letters[2].rect1.setPosition(sf::Vector2f(x - 430, y - 250));
	letters[3].rect1.setPosition(sf::Vector2f(x - 370, y - 250));
	letters[4].rect1.setPosition(sf::Vector2f(x - 310, y - 250));
	letters[5].rect1.setPosition(sf::Vector2f(x - 250, y - 250));
	letters[6].rect1.setPosition(sf::Vector2f(x - 190, y - 250));
	letters[7].rect1.setPosition(sf::Vector2f(x - 130, y - 250));
	letters[8].rect1.setPosition(sf::Vector2f(x - 70, y -  250));

	letters[9].rect1.setPosition(sf::Vector2f(x - 550, y -  180));
	letters[10].rect1.setPosition(sf::Vector2f(x - 490, y - 180));
	letters[11].rect1.setPosition(sf::Vector2f(x - 430, y - 180));
	letters[12].rect1.setPosition(sf::Vector2f(x - 370, y - 180));
	letters[13].rect1.setPosition(sf::Vector2f(x - 310, y - 180));
	letters[14].rect1.setPosition(sf::Vector2f(x - 250, y - 180));
	letters[15].rect1.setPosition(sf::Vector2f(x - 190, y - 180));
	letters[16].rect1.setPosition(sf::Vector2f(x - 130, y - 180));
	letters[17].rect1.setPosition(sf::Vector2f(x - 70, y -  180));

	letters[18].rect1.setPosition(sf::Vector2f(x - 550, y - 110));
	letters[19].rect1.setPosition(sf::Vector2f(x - 490, y - 110));
	letters[20].rect1.setPosition(sf::Vector2f(x - 430, y - 110));
	letters[21].rect1.setPosition(sf::Vector2f(x - 370, y - 110));
	letters[22].rect1.setPosition(sf::Vector2f(x - 310, y - 110));
	letters[23].rect1.setPosition(sf::Vector2f(x - 250, y - 110));
	letters[24].rect1.setPosition(sf::Vector2f(x - 190, y - 110));
	letters[25].rect1.setPosition(sf::Vector2f(x - 130, y - 110));
	
	letters[0].text.setString("A");
	letters[0].text.setCharacterSize(40);
	letters[0].text.setPosition(sf::Vector2f(x - 545, y - 255));
	letters[0].text.setFont(font);

	letters[1].text.setString("B");
	letters[1].text.setCharacterSize(40);
	letters[1].text.setPosition(sf::Vector2f(x - 485, y - 255));
	letters[1].text.setFont(font);

	letters[2].text.setString("C");
	letters[2].text.setCharacterSize(40);
	letters[2].text.setPosition(sf::Vector2f(x - 425, y - 255));
	letters[2].text.setFont(font);

	letters[3].text.setString("D");
	letters[3].text.setCharacterSize(40);
	letters[3].text.setPosition(sf::Vector2f(x - 365, y - 255)); 
	letters[3].text.setFont(font);

	letters[4].text.setString("E");
	letters[4].text.setCharacterSize(40);
	letters[4].text.setPosition(sf::Vector2f(x - 305, y - 255));
	letters[4].text.setFont(font);

	letters[5].text.setString("F");
	letters[5].text.setCharacterSize(40);
	letters[5].text.setPosition(sf::Vector2f(x - 245, y - 255));
	letters[5].text.setFont(font);

	letters[6].text.setString("G");
	letters[6].text.setCharacterSize(40);
	letters[6].text.setPosition(sf::Vector2f(x - 185, y - 255));
	letters[6].text.setFont(font);

	letters[7].text.setString("H");
	letters[7].text.setCharacterSize(40);
	letters[7].text.setPosition(sf::Vector2f(x - 125, y - 255));
	letters[7].text.setFont(font);

	letters[8].text.setString("I");
	letters[8].text.setCharacterSize(40);
	letters[8].text.setPosition(sf::Vector2f(x - 65, y - 255));
	letters[8].text.setFont(font);

	letters[9].text.setString("J");
	letters[9].text.setCharacterSize(40);
	letters[9].text.setPosition(sf::Vector2f(x - 545, y -235+50));
	letters[9].text.setFont(font);

	letters[10].text.setString("K");
	letters[10].text.setCharacterSize(40);
	letters[10].text.setPosition(sf::Vector2f(x - 485, y - 235+50));
	letters[10].text.setFont(font);

	letters[11].text.setString("L");
	letters[11].text.setCharacterSize(40);
	letters[11].text.setPosition(sf::Vector2f(x - 425, y - 235+50));
	letters[11].text.setFont(font);

	letters[12].text.setString("M");
	letters[12].text.setCharacterSize(40);
	letters[12].text.setPosition(sf::Vector2f(x - 370, y - 235+50));
	letters[12].text.setFont(font);

	letters[13].text.setString("N");
	letters[13].text.setCharacterSize(40);
	letters[13].text.setPosition(sf::Vector2f(x - 310, y - 235+50));
	letters[13].text.setFont(font);

	letters[14].text.setString("O");
	letters[14].text.setCharacterSize(40);
	letters[14].text.setPosition(sf::Vector2f(x - 245, y - 235+50));
	letters[14].text.setFont(font);

	letters[15].text.setString("P");
	letters[15].text.setCharacterSize(40);
	letters[15].text.setPosition(sf::Vector2f(x - 185, y - 235+50));
	letters[15].text.setFont(font);

	letters[16].text.setString("Q");
	letters[16].text.setCharacterSize(40);
	letters[16].text.setPosition(sf::Vector2f(x - 125, y - 235+50));
	letters[16].text.setFont(font);

	letters[17].text.setString("R");
	letters[17].text.setCharacterSize(40);
	letters[17].text.setPosition(sf::Vector2f(x - 65, y - 235+50));
	letters[17].text.setFont(font);

	letters[18].text.setString("S");
	letters[18].text.setCharacterSize(40);
	letters[18].text.setPosition(sf::Vector2f(x - 545, y - 165+50));
	letters[18].text.setFont(font);

	letters[19].text.setString("T");
	letters[19].text.setCharacterSize(40);
	letters[19].text.setPosition(sf::Vector2f(x - 485, y - 165+50));
	letters[19].text.setFont(font);

	letters[20].text.setString("U");
	letters[20].text.setCharacterSize(40);
	letters[20].text.setPosition(sf::Vector2f(x - 425, y - 165+50));
	letters[20].text.setFont(font);

	letters[21].text.setString("V");
	letters[21].text.setCharacterSize(40);
	letters[21].text.setPosition(sf::Vector2f(x - 365, y - 165+50));
	letters[21].text.setFont(font);

	letters[22].text.setString("W");
	letters[22].text.setCharacterSize(40);
	letters[22].text.setPosition(sf::Vector2f(x - 310, y - 165+50));
	letters[22].text.setFont(font);

	letters[23].text.setString("X");
	letters[23].text.setCharacterSize(40);
	letters[23].text.setPosition(sf::Vector2f(x - 245, y - 165+50));
	letters[23].text.setFont(font);

	letters[24].text.setString("Y");
	letters[24].text.setCharacterSize(40);
	letters[24].text.setPosition(sf::Vector2f(x - 185, y - 165+50));
	letters[24].text.setFont(font);

	letters[25].text.setString("Z");
	letters[25].text.setCharacterSize(40);
	letters[25].text.setPosition(sf::Vector2f(x - 125, y - 165+50));
	letters[25].text.setFont(font);

	for (int i = 0; i < 26; i++)
	{
		letters[i].text.setFillColor(sf::Color::Black);
	}

	categ.text.setCharacterSize(40);
	categ.text.setFont(font2);
	categ.text.setFillColor(sf::Color::Black);
	categ.text.setPosition(sf::Vector2f(20, 10));
	categ.rect1.setSize(sf::Vector2f(250, 80));
	categ.rect1.setPosition(sf::Vector2f(180, 95));
	categ.rect1.setFillColor(sf::Color::White);
	categ.rect1.setOutlineThickness(2);
	categ.rect1.setOutlineColor(sf::Color::Black);

	
	limit.text.setCharacterSize(25);
	limit.text.setFont(font2);
	limit.text.setFillColor(sf::Color::Black);
	limit.text.setPosition(sf::Vector2f(360, 10));
	limit.rect1.setSize(sf::Vector2f(250, 80));
	limit.rect1.setPosition(sf::Vector2f(18, 95));
	limit.sprite1.setTexture(texture);
	limit.sprite1.setPosition(sf::Vector2f(18, 5));

	grect.setSize(sf::Vector2f(500, 50));
	grect.setOutlineThickness(2);
	grect.setPosition(sf::Vector2f(50, 600));
	grect.setFillColor(sf::Color::Transparent);
	grect.setOutlineColor(sf::Color::Black);


	//HANGMAN*******************************************************
	hang[0].texture.loadFromFile("images/HangMan (1).png");
	hang[1].texture.loadFromFile("images/HangMan (2).png");
	hang[2].texture.loadFromFile("images/HangMan (3).png");
	hang[3].texture.loadFromFile("images/HangMan (4).png");
	hang[4].texture.loadFromFile("images/HangMan (5).png");
	hang[5].texture.loadFromFile("images/HangMan (6).png");
	hang[6].texture.loadFromFile("images/HangMan (7).png");
	hang[7].texture.loadFromFile("images/HangMan (8).png");
	hang[8].texture.loadFromFile("images/HangMan (9).png");
	for (int i = 0; i < 9; i++) {
		hang[i].sprite1.setTexture(hang[i].texture);
		hang[i].sprite1.setPosition(sf::Vector2f(0, 0));
	}

}


Player::~Player()
{

}

void Player::draw(sf::RenderWindow & window)
{
	window.draw(backsprite);
	//window.draw(categ.sprite1);
	window.draw(categ.text);
	window.draw(limit.text);
	window.draw(grect);
	for (int i = 0; i < 26; i++)
	{
		window.draw(letters[i].rect1);
		window.draw(letters[i].text);
    }

}

void Player::drawH(sf::RenderWindow & window, int i)
{

	window.draw(hang[i].sprite1);
}

std::string Player::LoadWord(std::string category)
{
	std::string str;
	str = category;
	str.erase(str.length()-4);
	categ.text.setString(str);

	std::vector<std::string>v;
	std::string word;
	std::ifstream file(category);
	if (file.is_open())
	{
		while (std::getline(file, word))
		v.push_back(word);
		int randomline = rand() % v.size();
		word = v.at(randomline);
		file.close();
	}
	return std::string(word);
	//category.erase(category.begin() + 3);
}


std::string Player::letterValue(int &n)
{
	std::string c = letters[n].text.getString();
	guessedletter = c;
	return std::string(c);
}


void Player::drawLevel1(const std::string &s,sf::RenderWindow &window)
{
	
	int xx, y;
	y = 590;
    xx = (585 / 2);
	int sum = s.length() * 40;
	sum /= 2;
	xx -= sum;
	for (int i = 0; i < s.length(); i++)
	{
		Wordtoguess[i].rect1.setFillColor(sf::Color::Black);
		Wordtoguess[i].rect1.setPosition(sf::Vector2f(xx, y + 50));
		xx += 40;
		if (s[i] == ' ')
		{
			Wordtoguess[i].rect1.setSize(sf::Vector2f(0,0));
		}
		else
		{
			Wordtoguess[i].rect1.setSize(sf::Vector2f(30, 4));
		}
		window.draw(Wordtoguess[i].rect1);
	}

	for (int i = 0; i < s.length(); i++)
	{
		t[i].text.setString(s[i]);
		t[i].text.setFillColor(sf::Color::Black);
		t[i].text.setCharacterSize(40);
		t[i].text.setFont(font2);
		t[i].text.setPosition(sf::Vector2f(Wordtoguess[i].rect1.getPosition().x, Wordtoguess[i].rect1.getPosition().y-50));
		if (b[i]) {
			window.draw(t[i].text);
		}
	}
	
	for (int i = 0; i < s.length(); i++)
	{
		wordLength.insert(s[i]);
		std::string c;
		c.push_back(s[i]);
		if (c == guessedletter) {
			b[i] = true;
		}
	}

	if (wordLength.size() <= 4)
	{
		limit.text.setString("Level: EASY");
	}
	if (wordLength.size() > 4 && wordLength.size() <= 6)
	{
		limit.text.setString("Level: Medium");
	}
	if (wordLength.size() > 6)
	{
		limit.text.setString("Level: Hard");
	}

}





	

