#include <iostream>
#include <iomanip>
using namespace std;

int funcion_segundo(int second)
{
    int cambio_segundos;

    for (int i = 0; i < 59; i++)
    {
        if (second == i)
        {
            cambio_segundos = second + 1;
        } else if (second == 59)
        {
            cambio_segundos = 0;
        }
    }
    
    return cambio_segundos;
}

int funcion_minuto(int minute, int seg)
{
    int cambio_minuto;

    for (int i = 0; i < 59; i++)
    {
        if ((seg == 0) && (minute == i))
        {
            cambio_minuto = minute + 1;
        } else if ((seg == 0) && (minute == 59))
        {
            cambio_minuto = 0;
        } else if ((seg < 60) && (minute == i))
        {
            cambio_minuto = minute;
        }
    }
    
    return cambio_minuto;
}

int funcion_hora(int hour, int min, int seg)
{
    int cambio_hora;

    for (int i = 0; i < 23; i++)
    {
        if ((seg == 0) && (min == 0) && (hour == i))
        {
            cambio_hora = hour + 1;
        } else if ((seg == 0) && (min == 0) && (hour == 23))
        {
            cambio_hora = 0;
        } else if ((seg < 60) && (min < 60) && (hour == i))
        {
            cambio_hora = hour;
        }
        
    }
    
    return cambio_hora;
}

int main(void)
{
    int hour, minute, second;

    cout << "Ingresa hora " << endl;
    cin >> hour;
    cout << "Ingresa minuto " << endl;
    cin >> minute;
    cout << "Ingresa segundo " << endl;
    cin >> second;
    
    int seg = funcion_segundo(second);
    int min = funcion_minuto(minute, seg);
    int hor = funcion_hora(hour, min, seg);
    
    cout << "Al sumar un segundo a la hora " << hour << ":" << minute << ":" << second << ", el resultado es " << hor << ":" << min << ":" << seg;

    return 0;
}