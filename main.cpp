#include <iostream>
#include <cstring>
#include <limits>

using namespace std;

int main()
{
    string Obiekt;
    int Liczba;

    cout << "Podaj obiekt: ";
    cin >> Obiekt;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl << "Podaj liczbe: ";
    cin >> Liczba;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl << "Obiekt: " << Obiekt.c_str() << endl;
    cout << "Liczba: " << Liczba << endl;


    cout << "Podaj obiekt jeszcze raz! ";
    getline(cin, Obiekt); // Getline nie wymaga cin.clear() i cin.ignore() - wrecz cin.ignore generuje problem bo trzeba wcisnac dodatkowy raz enter;

    cout << endl << "Podaj liczbe jeszcze raz! ";
    cin >> Liczba;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl << "Obiekt: " << Obiekt.c_str() << endl;
    cout << "Liczba: " << Liczba << endl;


    return 0;
}
