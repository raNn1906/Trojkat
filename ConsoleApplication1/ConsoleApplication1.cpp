#include <iostream>
#include <Windows.h>
#include <math.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;

bool mozliwy;
bool czy_mozliwy(int x, int y, int z);

int main(int a, int b, int c)
{

    cout << "Podaj dlugosci bokow trojkata (w cm)\n";
    cout << "Bok 1: ";
    cin >> a;
    cout << "Bok 2: ";
    cin >> b;
    cout << "Bok 3: ";
    cin >> c;
    

    if (czy_mozliwy(a, b, c) == true)
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, 2);
        cout << "\nTen trojkat jest mozliwy do stworzenia!\n";
        SetConsoleTextAttribute(hConsole, 7);
        double p = ((double)a + (double)b + (double)c) / 2;
        double pole = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "\nPole tego trojkata wynosi: " << pole << "cm^2\n";
        return 0;
    }
    else{
        SetConsoleTextAttribute(hConsole, 4);
        cout << "Takiego trojkata nie mozna stworzyc!\n";
        SetConsoleTextAttribute(hConsole, 7);
        }
    return 0;
}

bool czy_mozliwy(int x, int y, int z)
{
    if ((x + y) >= z)
    {
        if ((y + z) >= x)
        {
            return true;
        }
        else
        {
            return false;
        };
    }
    else
    {
        return false;
    }
}
