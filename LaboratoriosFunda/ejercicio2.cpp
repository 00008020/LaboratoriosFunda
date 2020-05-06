#include <iostream>

using namespace std;

int main(void)
{
    float radio;
    float pi = 3.1416;

    cout << "Introduzca el valor del radio del circulo:" << endl;
    cin >> radio;

    float area = pi * (radio * radio);
    float diametro = 2 * area;

    cout << "El area del circulo es " << area << " y el diametro del circulo es " << diametro;

    return 0;
}