#include <iostream>
#include<stdio.h>

using namespace std;

void llenar(int notas[][5], int n)
{
    for (int j = 0; j < n; j++)
    {    
        for (int i = 0; i < 5; i++)
        {
            cout << "Ingrese la nota " << i+1 << " del estudiante " << j+1 << endl;
            cin >> notas[j][i];
        }
    }
}

void nota(int notas[][5], int n)
{
    float final[n];

        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < 5; i++)
            {
                final[j] += (notas[j][i])*0.20;
            }
        } 
    

    for (int i = 0; i < n; i++)
    {
        if (final[i]>=7)
        {
            cout << "La nota final del estudiante " << i+1 << " es " <<final[i] << ", ha aprobado" << endl;
        } else 
        {
            cout << "La nota final del estudiante " << i+1 << " es " <<final[i] << ", ha reprobado" << endl;
        }
        
        
    }
     
}

int main(void)
{
    int n;

    cout << "Ingrese la cantidad de alumnos: " << endl;
    cin >> n;

    int notas[n][5];

    llenar(notas, n);

    for (int j = 0; j < n; j++)
    {
        cout << "Las notas del estudiante " << j+1 << " son " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << notas[j][i] << endl;
        }
    }
    
    nota(notas, n);

    
    return 0;
}