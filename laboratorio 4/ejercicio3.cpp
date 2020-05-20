#include <iostream>
using namespace std;

int main(void)
{
    int numero1;

    cout << "Introduce cualquier numero: ";
    cin >> numero1;
    if(numero1 > 0){
        cout << "El numero es positivo";
    } else if(numero1 == 0) {
        cout << "El numero es cero";
    } else {
        cout << "El numero es negativo";
    }

    return 0;
}