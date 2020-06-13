#include <iostream>

using namespace std;

int main(void)
{
    int ano;

    cout << "Introduce un año de tu eleccion: " << endl;
    cin >> ano;

    if (ano%400 == 0)
    {
        cout << "El año " << ano << " es biciesto";
    } else if ((ano%400 != 0) && (ano%4 == 0) && (ano%100 != 0))
    {
        cout << "El año " << ano << " es biciesto";
    } else {
        cout << "El año " << ano << " no es biciesto";
    }
    

    return 0;
}