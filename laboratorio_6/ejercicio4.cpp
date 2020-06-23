#include <iostream>
#include <cmath>

using namespace std;

float leer(int n, float arreglo []) {
    float aux;
    for(int i = 0; i < n; i++) {
        int n = i + 1;
        cout << "Ingrese el valor " << n << ": " << endl;
        cin >> aux;
        arreglo [i] = aux;
    }

    return arreglo [0];
}

void recorrer(int x, float arreglo []) {
    for(int i = 0; i < x; i++) {
        int n = i + 1;
        cout << "El valor de la suma de los elementos de ambos arreglos en la posicion " << n << " es: " << arreglo [i] << endl;
    }
}

float sumar(int x, float arreglo_1 [], float arreglo_2 []) {
    float aux = 0;
    aux = arreglo_1 [x] + arreglo_2 [x];

    return aux;
}

int main(void)
{ 
    int n, x;
    float suma;

    cout << "Ingrese el numero de elementos de los arreglos: " << endl;
    cin >> n; 

        float arreglo_1 [n], arreglo_2 [n], final [n];
        //proceso
        cout << "Ingrese los valores del arreglo 1: " << endl;
        leer(n, arreglo_1);
        cout << "Ingrese los valores del arreglo 2: " << endl;
        leer(n, arreglo_2);
        x = sizeof(arreglo_1) / sizeof(arreglo_1 [0]);
        for (int i = 0; i < x; i++) {
            suma = sumar(i, arreglo_1, arreglo_2);
            final [i] = suma;
        }
        cout << "La suma de los arreglos 1 y 2, es: " << endl;
        recorrer(x, final);

    return 0;
}

