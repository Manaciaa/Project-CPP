#include <iostream>
#include <string>

// D�finition de la classe Pokemon

class Pokemon {
private:
    std::string Name;
    int Level;
    std::string Type;

public:
    // Constructeur de la classe Pokemon

    Pokemon(std::string name, std::string type, int level) : Name(name), Type(type), Level(level) {}

    // M�thode pour afficher les informations du Pok�mon

    void afficherPokemon() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Type: " << Type << std::endl;
        std::cout << "Level: " << Level << std::endl;
    }
};

    // D�finition de la classe CT

class CT {
private:
    std::string Name;
    std::string Type;
    int Puissance;

public:
    // Constructeur de la classe CT

    CT(std::string name, std::string type, int puissance) : Name(name), Type(type), Puissance(puissance) {}

    // M�thode pour afficher les informations de la CT

    void afficherCT() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Type: " << Type << std::endl;
        std::cout << "Puissance: " << Puissance << std::endl;
    }
};

// Fonction principale

int main() {

    // Cr�ation d'un Pok�mon nomm� Garshomp

    Pokemon garshomp("Garshomp", "Dragon", 60);

    // Affichage des informations de Garshomp

    garshomp.afficherPokemon();

    // Saut de ligne pour rendre plus visible 

    std::cout << std::endl;

    // Cr�ation d'une CT nomm�e Ultralaser

    CT ultralaser("Ultralaser", "Normal", 150);

    // Affichage des informations de la CT Ultralaser

    ultralaser.afficherCT();


    return 0;

}

    