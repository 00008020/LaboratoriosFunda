#include <iostream>
#include <string>

using namespace std;

bool bis(int); 
void evaluarErrorEnDatos(int, int, int);
bool validar(int, int, int);
bool validar_dias(int, int, bool);
string String_Fecha(int, int, int, bool);

int main()
{   
    int dia, mes, ano;
    string fecha;

    cout << "Programa que indica la fecha del dia sigueinte." << endl;
    cout << "Ingrese el dia: " << endl;
    cin >> dia;
    cout << "Ingrese el mes: " << endl;
    cin >> mes;
    cout << "Ingrese el año: " << endl;
    cin >> ano;

    if (bis(ano)) {
        if (validar(dia, mes, ano)) {
            if (validar_dias(dia, mes, true)) {
                fecha = fecha = String_Fecha(dia, mes, ano, true);
                cout << "La fecha del dia de manana sera: " << fecha << endl; 
            } else {
                cout << "El dia no corresponse al mes seleccionado" << endl; 
            }
        }
    } else {
        if (validar(dia, mes, ano)) {
            if (validar_dias(dia, mes, false)) {
                fecha = String_Fecha(dia, mes, ano, false);
                cout << "La fecha del dia de manana sera: " << fecha << endl; 
            } else {
                cout << "El dia no corresponse al mes seleccionado" << endl; 
            } 
        }
    }

    return 0;
}

bool bis(int num) {
    if (num % 400 == 0) {
        return true;
    } else if (num % 4 == 0 && num % 100 !=0) {
        return true;
    } else {
        return false;
    }   
}

bool validar(int dia, int mes, int ano) {
    if (ano != 0) {
        if (mes != 0 || mes <= 12) {
            if (dia <= 31) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool validar_dias(int dia, int mes, bool bis) {
    if (bis) {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            return true;
        } else if (mes == 2 && dia <= 29) {
            return true;
        } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia <= 30) {
            return true;
        } else {
            return false;
        }
    } else {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            return true;
        } else if (mes == 2 && dia <= 28) {
            return true;
        } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia <= 30) {
            return true;
        } else {
            return false;
        }
    }
}

string String_Fecha(int dia, int mes, int ano, bool bis) {
    string dia_str, mes_str, ano_str, str;
    if (bis) {
        if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10) && dia == 31) {
            mes += 1;
            dia = 1;
        } else if (mes == 2 && dia == 29) {
            mes += 1;
            dia = 1;
        } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30) {
            mes += 1;
            dia = 1;
        } else if (mes == 12 && dia == 31) {
            ano += 1;
            mes = 1;
            dia = 1;
        } else {
            dia += 1;
        }
    } else {
       if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10) && dia == 31) {
            mes += 1;
            dia = 1;
        } else if (mes == 2 && dia == 28) {
            mes += 1;
            dia = 1;
        } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30) {
            mes += 1;
            dia = 1;
        } else if (mes == 12 && dia == 31) {
            ano += 1;
            mes = 1;
            dia = 1;
        } else {
            dia += 1;
        }
    }
    dia_str = to_string(dia);
    mes_str = to_string(mes);
    ano_str = to_string(ano);
    
    str = dia_str + " de " + mes_str + " del " + ano_str;
    return str;
}