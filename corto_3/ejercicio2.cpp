#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int aleatorio, numero;
    srand (time(NULL));
    aleatorio = rand() % 100 + 1;

    do
    {
    cout << "Introduce un numero entre 1 y 100: " << endl;
    cin >> numero;

    if (numero > aleatorio)
    {
        cout << "El numero secreto es menor, prueba de nuevo" << endl;
    } else if (numero < aleatorio)
    {
        cout << "El numero secreto es mayor, prueba de nuevo" << endl;
    }
    } while (numero != aleatorio);
    
    cout << "adivinaste!, el numero secreto era " << aleatorio;
    
    

    return 0;
}