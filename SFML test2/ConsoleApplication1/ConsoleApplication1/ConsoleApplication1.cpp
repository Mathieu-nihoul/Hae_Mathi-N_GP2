// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream> // inclut un entete/header appelé iostream
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;
#include <SFML/Window/Keyboard.hpp>

int main()
{
    std::cout << "Hello World!\n";
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!"); //fenetre de visuel en 200 sur 200
    sf::Font font;
    sf::Text text;
    sf::VertexArray line;
	line.setPrimitiveType(sf::PrimitiveType::LinesStrip);
    std::vector<Vector2f> myPoints;

	/*if (!font.loadFromFile("res/AdobeMingStd-Light.otf")) {
		std::cout << "ERROR NO FONT" << std::endl;
		return 1;
	}*/
	

    while (window.isOpen()) //tant que la fenetre est ouverte
    {
        sf::Event event;//crée event( intéraction pour les touches )
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Key::BackSpace)
					myPoints.clear();
			}
			if (event.type == sf::Event::MouseButtonPressed)
				line.append(sf::Vertex(sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y), sf::Color(0x5DFFA3ff)));
        }
		/*text.setString("Touche Backspace pour supprimer les points");
		text.setCharacterSize(24);
		text.setPosition(0, 0);
		text.setFillColor(sf::Color::White);*/
		/*for (Vertex& vtx: myPoints)
		{
			line.append(vtx);
		}*/
		//line.append(sf::Vertex(sf::Vector2f(50, 50), sf::Color(0x5DFFA3ff)));
		//line.append(sf::Vertex(sf::Vector2f(100, 100), sf::Color(0xF5363Cff)));
        
        
		
        window.clear();//clear l'image
		window.draw(text);
        window.draw(line);
        window.display();//synchronise les 2 buffeur pour pas cisaller l'image
    }

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
