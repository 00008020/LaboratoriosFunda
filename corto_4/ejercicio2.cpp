#include <iostream>
#include <stdio.h>

using namespace std;

float promedio(int arreglo[])
{
    float sumatoria, total_promedio;

    for (int i = 0; i < 25; i++)
    {
        sumatoria += arreglo[i];
    }

    total_promedio = sumatoria/25;
    
    return total_promedio;
}

int mayor(int arreglo[], int final)
{
    int match = 0;

    for (int i = 0; i < 25; i++)
    {
        if (arreglo[i]>final)
        {
            match++;
        }
        
    }

    return match;
}

int menor(int arreglo[], int final)
{
    int match = 0;

    for (int i = 0; i < 25; i++)
    {
        if (arreglo[i]<final)
        {
            match++;
        }
        
    }

    return match;
}

int main(void)
{
    int arreglo[25];
    cout << "Introduce la altura de 25 alumnos en cm:" << endl;
    for (int i = 0; i <25; i++)
    {
        cout << "Ingrese la altura del alumnno " << i+1 << ": " << endl;
        cin >> arreglo[i];
    }

    float final = promedio(arreglo);
    int mayor_que = mayor(arreglo, final);
    int menor_que = menor(arreglo, final);

    cout << "La altura promedio es " << final << ", existen " << mayor_que << " alumnos arriba del promedio y " << menor_que << " alumnos abajo del promedio.";
    
            
    return 0;
}