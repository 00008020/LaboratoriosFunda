#include <iostream>
using namespace std;

int main(void)
{
    int numero1;

    cout << "Introduce cualquier numero: ";
    cin >> numero1;
    if(numero1%2 == 0){
        cout << "El numero es par";
    } else {
        cout << "El numero es impar";
    }
    
    return 0;
}