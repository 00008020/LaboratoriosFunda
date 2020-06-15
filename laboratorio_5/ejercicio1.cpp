#include <iostream>
using namespace std;

int funcion_mcd(int a,int b){
    int final;

    for (int i = 1; i <= a; i++)
    {
        if ((a%i == 0) && (b%i == 0))
        {
            final = i;
        }
        
    }
    
    return final;

}
int main(void)
{
    int a, b;

    cout << "Introduce el primer numero: " << endl;
    cin >> a;
    cout << "Introduce el segundo numero: " << endl;
    cin >> b;

    int final = funcion_mcd(a,b);
    cout << "El MCD de " << a << " y " << b << " es " << final;

    return 0;
}