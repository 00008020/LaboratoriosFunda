#include <iostream>
#include <iomanip>

using namespace std;

double funcion_salario_total(int horas, int extra)
{
    float salario_normal, salario_extra, salario_total;

    salario_normal = horas * 1.75;
    salario_extra = extra * 2.50;
    salario_total = salario_extra + salario_normal;

    return salario_total;
}

float funcion_salario_descuento(int extra, float total)
{
    float salario_descuento;

    salario_descuento = total - ((total * 0.04) + (total * 0.0625));

    if (total >= 500)
    {
        salario_descuento = total - ((total * 0.04) + (total * 0.0625) + (total * 0.10)); 
    }

    return salario_descuento;
}

int main(void)
{
    int horas, extra, cantidad;

    cout << "Introduzca la cantidad de empleados: " << endl;
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++)
    {
        do
    {
        cout << "Introduzca la cantidad de horas trabajadas por el empleado " << i << ": " << endl;
        cin >> horas;
        cout << "Introduzca la cantidad de horas extras trabajadas por el empleado " << i << ": " << endl;
        cin >> extra;
        
        float total = funcion_salario_total(horas, extra);
        float descuento = funcion_salario_descuento(extra, total);

        cout << "Su salario total del empleado " << i << " es " << fixed << setprecision(2) << total << " y con el descuento aplicado, su salario es de " << fixed << setprecision(2)<< descuento << endl;
        i++;
    } while (i <= cantidad);
    }
    
    
    
    

    return 0;
}