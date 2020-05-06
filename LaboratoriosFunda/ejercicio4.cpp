#include <iostream>
using namespace std;

int main(void)
{
    string nombre;
    float valor;
    int cantidad;

    cout << "Introduzca el nombre del producto:" << endl;
    cin >> nombre;
    cout << "Introduzca el valor del producto:" << endl;
    cin >> valor;
    cout << "Introduzca la cantidad de productos:" << endl;
    cin >> cantidad;

    float precio_total = valor * cantidad;

    cout << "El precio por " << cantidad << " " << nombre << " por un valor unitario de $" << valor << " es igual a " << precio_total;
}