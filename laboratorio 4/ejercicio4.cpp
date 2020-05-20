#include <iostream>
using namespace std;

int main(void)
{
    string palabra;

    cout << "Introduce una palabra: ";
    cin >> palabra;
    
    if (palabra.length() > 10)
    {
        cout << "La palabra " << palabra << " posee mas de 10 caracteres, posee " << palabra.length();
    } else if (palabra.length() == 10)
    {
        cout << "La palabra " << palabra << " posee 10 caracteres";
    } else 
    {
        cout << "La palabra " << palabra << " posee menos de 10 caracteres, posee " << palabra.length();
    }
    
    return 0;
}