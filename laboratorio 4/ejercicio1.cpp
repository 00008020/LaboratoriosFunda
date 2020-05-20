#include <iostream>
using namespace std;

int main(void)
{
    int numero1, numero2, division;
    division = numero1/numero2;

    cout << "Introduce el primer numero: ";
    cin >> numero1;
    cout << "Introduce el segundo numero: ";
    cin >> numero2;
    if(numero1/numero2){
        cout << "El resultado de la division exacta de " << numero1 << " entre " << numero2 << " es " << division;
    } else {
        cout << "No es posible una division exacta entre " << numero1 << " entre " << numero2;
    }

    return 0;
}