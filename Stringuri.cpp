// Stringuri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include  <string>

int main()
{

    char c = 'c';
    std::cout << c << std::endl;
    std::string nume;
    nume = "Voicu";
    std::cout << nume << std::endl;
    std::string prenume = "Librimir";
    std::cout << prenume << std::endl;
    std::string nume_complet = nume + " "  + prenume; //concatenare

    std::cout <<"Numele meu este " << nume_complet << std::endl;

    //std::string nume_utlizator, prenume_utilizator;

    //std::cout << "Cum te cheama ? " << std::endl;
    //std::cin >> prenume_utilizator;
    //std::cout << "Care este numele de familie \n";
    //std::cin >> nume_utlizator;

   // std::cout << "Salutare " << nume_utlizator + "  "  + prenume_utilizator << std::endl;

    std::cout << "Care este numele tau complet ?" << std::endl;
    std::string nume_user_complet;
    std::getline(std::cin, nume_user_complet);
    std::cout << nume_user_complet << std::endl;



}


