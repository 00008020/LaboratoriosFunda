#include <iostream>
#include <string>

using namespace std;

char cifrar(int i, string oracion) {
    char x = oracion[i];

    char murcielago [10] = {'m', 'u', 'r', 'c', 'i', 'e', 'l', 'a', 'g', 'o'};
    char codigo [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int j = 0; j < 10; j++) 
    {
        if (x == murcielago [j]) 
        {
            return codigo [j];
        }
    }

    return x;
}

int main()
{   
    string oracion, codificar;
    char str[100];
    
    cout << "Ingrese la oracion a codificar: " << endl;
    cin.getline(str, 100, '\n');

    oracion = str;

    for(int i = 0; i < oracion.length(); i++) 
    {
        codificar = codificar + cifrar(i, oracion);
    }

    cout << codificar << endl;

    return 0;
}