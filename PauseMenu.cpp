#include "PauseMenu.hpp"
#include "Game.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/
PauseMenu::PauseMenu(Game *pg)
{
    setText();
    setBackground();
    pGame = pg;
    level = 0;
}
PauseMenu::~PauseMenu()
{
    pGame = nullptr;
}

/*SETTERS & GETTERS*/
sf::RectangleShape PauseMenu::getRectangleShape() const
{
}
void PauseMenu::setText()
{
    if(!font.loadFromFile("Font/PIXEARG_.TTF")) {cout << "error" << endl; exit(1);}

    text[0].setFont(font);
    text[0].setCharacterSize(35);
    text[0].setFillColor(sf::Color::White);
    text[0].setString("Return"); // 1 item
    text[0].setPosition(sf::Vector2f(500, 220));

    text[1].setFont(font);
    text[1].setCharacterSize(35);
    text[1].setFillColor(sf::Color::White);
    text[1].setString("Save"); // 2 item ...
    text[1].setPosition(sf::Vector2f(500, 320)); // Janela 1280 x 720.

    text[2].setFont(font);
    text[2].setCharacterSize(35);
    text[2].setFillColor(sf::Color::White);
    text[2].setString("Menu");
    text[2].setPosition(sf::Vector2f(500, 420));
}

/*METHODS*/
void PauseMenu::drawThis(Graphic_Manager *pGM)
{   
    pGM->getWindow()->draw(backgroundRectangle);

    for(int i = 0; i < ITENS_PAUSE_MENU; i++)
    {
        pGM->getWindow()->draw(text[i]);   
    }
}   
void PauseMenu::init()
{

}
void PauseMenu::draw()
{
    drawThis(pGM);
}
void PauseMenu::setBackground()
{
    backgroundTexture.loadFromFile("Images/backgroundPauseMenu.jpg");
    backgroundRectangle=sf::RectangleShape(sf::Vector2f(1280, 720)); 
    backgroundRectangle.setTexture(&backgroundTexture);
    backgroundRectangle.setPosition(sf::Vector2f(0, 0));
}
void PauseMenu::update(double timeFraction)
{

}
void PauseMenu::input()
{
    sf::Event event;
    while ((pGM->getWindow())->pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
        {
            (pGM->getWindow())->close();
        }
        break;

        case sf::Event::KeyPressed:
        {
            keyPressedAction(event);
        }
        break;

        default:
        {
        }
        break;
        }
    }
}
void PauseMenu::keyPressedAction(sf::Event event)
{
    switch (event.key.code)
    {
    case sf::Keyboard::Num1:
    {
        pGame -> popState();
    }
    break;
    }
}
