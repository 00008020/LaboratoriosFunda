#include <iostream>

using namespace std;

bool bi(int ano) 
{
    {
    if (ano % 400 == 0)
    {
        return true;
    } else if ((ano % 4 == 0) && (ano % 100 != 0))
        {
           return true; 
        } else {
            return false;
        }
    }
}

int main(void)
{
    int ano;

    cout << "Introduzca un año: " << endl;
    cin >> ano;

    int bis = bi(ano);

    if (bis == 1)
    {
        cout << "El año " << ano << " si es bisiesto";
    } else 
    {
        cout << "El año " << ano << " no es bisiesto";
    }
    return 0;
}