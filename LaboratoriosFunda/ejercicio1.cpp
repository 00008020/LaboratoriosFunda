#include <iostream>

using namespace std;

int main(void)
{
    double numero1;
    double numero2;
    double numero3;

    cout << "introduzca el primer numero:" << endl;
    cin >> numero1;
    cout << "Introduzca el segundo numero:" << endl;
    cin >> numero2;
    cout << "Introduzca el tercer numero:" << endl << endl;
    cin >> numero3;

    double promedio = (numero1+numero2+numero3)/3;

    cout << "El promedio de los 3 numeros es:" << endl;
    cout << promedio;

    return 0;
}
