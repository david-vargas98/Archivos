#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    //Campos que conforman un registro.
    int cuenta; //Número de cuenta.
    char nombre[30]; //Propietario de la cuenta.
    double saldo; //Saldo de la cuenta.

    //Creación del archivo.
    ofstream archivoClientesSalida; //Archivo del registro. ofstream es una clase orientada a la escritura.
    archivoClientesSalida.open("clientes.txt", ios::out); //El modo de apertura "out" es Fichero modo escritura.

    //Validación.
    cout << "Escriba el número de cuenta, nombre y saldo" << endl;
    cout << "Escriba fin fichero para terminar la entrada\n?";

    //Leer cuenta, nombre y saldo, después colocarlos en el archivo.
    while (cin >> cuenta >> nombre >> saldo)
    {
        archivoClientesSalida << cuenta << " " << nombre << " " << saldo << endl;
        cout << "?";
    }
    //Se cierra el archivo "explícitamente" usando la función miembro close().
    archivoClientesSalida.close();

    return 0;
}