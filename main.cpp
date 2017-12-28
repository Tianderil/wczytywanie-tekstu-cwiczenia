#include <iostream>
#include <string>
#include <limits>

using namespace std;

void Cwiczenie2()
{
    string Imie;
    string Nazwisko;
    int Wiek;

    cout << "Podaj imie: ";
    cin >> Imie;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Podaj nazwisko: ";
    getline(cin, Nazwisko);
    bool Wiektrue;
    do
    {
        cout << "Podaj wiek: ";
        cin >> Wiek;
        if (cin.good() == false)
        {
        Wiektrue = cin.good();
        cout << "Blad wprowadzania danych. Sprobuj ponownie." << endl;
        Wiek = 0;
        }
        else
        Wiektrue = true;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while (Wiektrue == false);

    cout << "Twoje imie to: " << Imie << endl;
    cout << "Twoje nazwisko to: " << Nazwisko << endl;
    cout << "Twoj wiek to: " << Wiek << endl;


}

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

    Cwiczenie2();




    return 0;
}




