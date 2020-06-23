#include <iostream>

using namespace std;

int leer(int n, int arreglo []) {
    for(int i = 0; i < n; i++) {
        int n = i + 1;
        cout << "Ingrese el valor " << n << " del arreglo: " << endl;
        cin >> arreglo [i];
    }

    return arreglo [0];
}

void recorrer(int x, int arreglo []) {
    for(int i = 0; i < x; i++) {
        int n = i + 1;
        cout << "El valor " << n << " del arreglo es : " << arreglo [i] << endl;
    }
}

int coincidencia(int x, int num, int arreglo []) {
    int matchs = 0;
    for (int i = 0; i < x; i++) {
        if (arreglo [i] ==  num) {
            matchs++;
        }
    }

    return matchs;
}

int main()
{   
    int n, x, num, coincidir;
    
    cout << "Ingrese el numero total de elementos del arreglo: " << endl;
    cin >> n; 

        int arreglo [n];

        cout << "Ingrese los valores del arreglo: " << endl;
        leer(n, arreglo);
        cout << "Ingrese el numero a buscar: " << endl;
        cin >> num; 

        x = sizeof(arreglo) / sizeof(arreglo [0]);
        coincidir = coincidencia(x, num, arreglo);
        cout << "El numero de coincidencias en el arreglo es: " << coincidir << endl;
    
    return 0;
}