#include <iostream>
#include <iomanip>

using namespace std;

// Estructura del array que se utilizara a lo largo del programa
struct productos_s
{
    char nombre[50];
    int cantidad;
    float precio_u;
    float precio_t;
};

// Funcion encargada de recopilar la informacion e introducirla en el array
void llenar_arreglo(int n, productos_s productos[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Introduce el nombre del producto " << i+1 << ": " << endl;
        cin >> productos[i].nombre;
        cout << "Introduce la cantidad de " << productos[i].nombre << ": " << endl;
        cin >> productos[i].cantidad;
        cout << "Introduce el precio unitario de " << productos[i].nombre << ": " << endl;
        cin >> productos[i].precio_u;
    }
}

// Funcion encargada del calculo del valor total por producto y de introducir dicho dato al array
void calculo(int n, productos_s productos[])
{
    for (int i = 0; i < n; i++)
    {
        productos[i].precio_t = productos[i].precio_u * productos[i].cantidad;
    }
    
}

// Funcion encargada de mostrar los datos almacenados en el array
void mostrar_arreglo(int n, productos_s productos[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Unidades " << productos[i].cantidad << "|  | Nombre " << productos[i].nombre << "|  | Precio unitario $" << fixed << setprecision(2) << productos[i].precio_u << "|  | Total por producto $" << productos[i].precio_t << endl;
    }
}

// Funcion encargada de sumar todos los valores que la funcion calculo genera, con la intencion de generar un total a la compra
void total_compra(int n, productos_s productos[])
{
    float total;

    for (int i = 0; i < n; i++)
    {
        total = total + productos[i].precio_t;
    }
 
    cout << "El valor total de la compra es $" << total;
}

// Funcion principal encargada de llamar a las demas funciones
int main(void)
{
    int n;

    cout << "Introduce la cantidad de productos a ingresar: " << endl;
    cin >> n;

    struct productos_s productos[n];
    
    llenar_arreglo(n, productos);
    calculo(n, productos);

    mostrar_arreglo(n, productos);
    total_compra(n, productos);

    return 0;
}