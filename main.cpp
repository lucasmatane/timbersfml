
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>



using namespace sf;
int main()
{
    RenderWindow window(VideoMode(1920, 1080), "My window");
    
    CircleShape shape(30);
    shape.setFillColor(sf::Color(100, 250, 50));
    shape.setPosition(50, 50);
    Texture textureBackground;
    textureBackground.loadFromFile("/Users/lucassehairi/Documents/SFML/background.png");
    int changeX =0;
    int changeY =0;
    
    Sprite spriteBackground;
    spriteBackground.setTexture(textureBackground);
    spriteBackground.setPosition(0, 0);
    

    Texture textureTree;
    textureTree.loadFromFile("/Users/lucassehairi/Documents/SFML/tree.png");
    Sprite spriteTree;
    spriteTree.setTexture(textureTree);
    spriteTree.setPosition(810, 0);
    
    Texture textureBee;
    textureBee.loadFromFile("/Users/lucassehairi/Documents/SFML/bee.png");
    Sprite spriteBee;
    spriteBee.setTexture(textureBee);
    spriteBee.setPosition(0, 800); 
    
    bool beeActive = false;
    float beeSpeed = 0.1f;
    
    Texture textureCloud;
    textureCloud.loadFromFile("/Users/lucassehairi/Documents/SFML/cloud.png");
    Sprite SpriteCloud1;
    Sprite SpriteCloud2;
    Sprite SpriteCloud3;
    
    SpriteCloud1.setTexture(textureCloud);
    SpriteCloud2.setTexture(textureCloud);
    SpriteCloud3.setTexture(textureCloud);
    
    SpriteCloud1.setPosition(0, 100);
    SpriteCloud2.setPosition(0, 200);
    SpriteCloud3.setPosition(0, 300);
    
    bool cloud1Active = false;
    bool cloud2Active = false;
    bool cloud3Active = false;
    
    float cloud1Speed = 0.1f;
    float cloud2Speed = 0.1f;
    float cloud3Speed = 0.1f;
    
    
    
    
    
    
    
    
    // on fait tourner le programme jusqu'à ce que la fenêtre soit fermée
    while (window.isOpen())
    {
        window.draw(spriteBackground);
        window.draw(shape);
        window.draw(spriteTree);
        window.draw(spriteBee);
        window.draw(SpriteCloud1);
        window.draw(SpriteCloud2);
        window.draw(SpriteCloud3);
        
        window.display();
        
        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        Event event;
        while (window.pollEvent(event))
        {
            // évènement "fermeture demandée" : on ferme la fenêtre
            if(sf::Keyboard::isKeyPressed(Keyboard::Up))
            {
                changeY = -10;
                changeX = 0;
            }
            if(sf::Keyboard::isKeyPressed(Keyboard::Down))
            {
                changeY = 10;
                changeX = 0;
            }
            if(sf::Keyboard::isKeyPressed(Keyboard::Left))
            {
                changeX = -10;
                changeY = 0;
            }
            if(sf::Keyboard::isKeyPressed(Keyboard::Right))
            {
                changeX = 10;
                changeY = 0;
            }
            if (event.type == Event::Closed)
                window.close();
            if(Keyboard::isKeyPressed(Keyboard::Escape))
                window.close();
            shape.move(changeX, changeY);

        }
        
    }
    
    return 0;
}

/*

// Anything after // is a comment not actual C++ code
// Comments are important and I use them to explain things
// Why not read the comments in this code

// These "include" code from the C++ library and SFML too
#include <SFML/Graphics.hpp>

// This is the main C++ program- Duh!
// It is where our game starts from
int main()
{
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "Variables Demo");
    
    // Make three circles with 50 pixels radius
    // called circleRed, circle Green and circleBlue
    sf::CircleShape circleRed(50);
    sf::CircleShape circleGreen(50);
    sf::CircleShape circleBlue(50);
    
    // Color the circles appropriately
    circleRed.setFillColor(sf::Color(255, 0, 0));
    circleGreen.setFillColor(sf::Color(0, 255, 0));
    circleBlue.setFillColor(sf::Color(0, 0, 255));
    
    // Here's the variables stuff
    float xGreen = 20
    float yGreen = 200;
    
    float xBlue = 300;
    float yBlue = 300;
    
    // Position the red circle at x,y 100,100 "Hard-coded"
    circleRed.setPosition(100, 100);
    
    // Position the green circle at the postion -
    // stored in xGreen and yGreen
    circleGreen.setPosition(xGreen, yGreen);
    
    // Position the blue circle at the postion -
    // stored in xBlue and yBlue
    circleBlue.setPosition(xBlue, yBlue);
    
    // Now all our circles are ready to draw -
    // we can enter the main game loop
    // This "while" loop goes round and round...
    // until player closes window
    while (window.isOpen())
    {
        // The next 6 lines of code detect if the window is closed
        // And then shuts down the program
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                // Someone closed the window- bye
                window.close();
        }
        // End user input detection
        
        // Clear everything from the last run of the while loop
        window.clear();
        
        // Process game logic, AI, movement etc
        // We will add some new code here in a minute!!!!!!
        
        // End of new code
        
        // Draw our game scene here
        //Draw the cirlces
        window.draw(circleRed);
        window.draw(circleGreen);
        window.draw(circleBlue);
        
        // Show everything on the screen
        window.display();
        
    }// This is the end of the "while" loop
    
    return 0;
}
*/
