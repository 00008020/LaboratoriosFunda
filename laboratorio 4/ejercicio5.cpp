#include <iostream>
using namespace std;

int main(void)
{
    string palabra;

    cout << "Introduce una palabra: ";
    cin >> palabra;

    string palabra1 = palabra;
    
    for (int i = 0; i < palabra1.length(); i++) {
    palabra1[i] = tolower(palabra1[i]);
    }

    if (palabra1[0] == palabra1.back())
    {
        cout << "La primera letra y la ultima detra de " << palabra << " son las mismas";
    } else
    {
        cout << "La primera letra y la ultima detra de " << palabra << " no son las mismas";
    }
    
    
    return 0;
}