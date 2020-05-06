#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    float a;
    float b;
    float c;

    cout << "Introduzca el primer numero:" << endl;
    cin >> a;
    cout << "Introduzca el segundo numero:" << endl;
    cin >> b;
    cout << "Introduzca el tercer numero:" << endl;
    cin >> c;

    float raiz = sqrt(b*b - (4*a*c));
    float formula1 =( (-b) + raiz)/2;
    float formula2 =( (-b) - raiz)/2;


    if(raiz>=1){
        cout << "El resultado de la formula cuadratica de " << a << ", " << b << " y " << c << " es " << formula1 << " y " << formula2;
    } else {
        cout << "No es posible realizar esta operacion, debido a que la raiz es negativa";
    }
    
    
    
    return 0;
}
