//Ejercicio 1 Semana 6 Bim IV
//Fecha:19/09/2023
/*TAREA:Realizar un programa en C++ que gestione un registro de empleados de la empresa "El Caldazo". El programa debe
permitir al usuario realizar las siguientes acciones: -Ingresar los datos de N empleados, incluyendo: su nombre, identificación y salario
-Encontrar y mostrar los datos*/

//Declaración de Librerias
#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

const int MAX_EMPLEADOS = 100; // Máximo número de empleados

// Estructura para almacenar los datos de un empleado
struct Empleado {
    char nombre[50];
    char identificacion[9];
    double salario;
};

int main() {
    Empleado empleados[MAX_EMPLEADOS];
    int numEmpleados;

    cout << "Ingrese el número de empleados que desea agregar a la base de datos (máximo " << MAX_EMPLEADOS << "): ";
    cin >> numEmpleados;

    // Validar el número de empleados
    if (numEmpleados <= 0 || numEmpleados > MAX_EMPLEADOS) {
        cout << "Número de empleados no válido. Debe estar entre 1 y " << MAX_EMPLEADOS << ".\n";
        return 1; // Salir del programa con código de error
    }

    cin.ignore(); // Limpiar el buffer de entrada

    // Ingresar los datos de los empleados
    for (int i = 0; i < numEmpleados; i++) {
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        cin.getline(empleados[i].nombre, sizeof(empleados[i].nombre));

        cout << "Ingrese la identificación del empleado " << i + 1 << " (código de 8 dígitos): ";
        cin.getline(empleados[i].identificacion, sizeof(empleados[i].identificacion));

        cout << "Ingrese el salario del empleado " << i + 1 << ": ";
        cin >> empleados[i].salario;
        cin.ignore(); // Limpiar el buffer de entrada
    }

    while (true) {
        cout << "\nMenú de opciones:\n";
        cout << "1. Encontrar y mostrar los datos del empleado con el salario más alto.\n";
        cout << "2. Encontrar y mostrar los datos del empleado con el salario más bajo.\n";
        cout << "3. Buscar un empleado por nombre o número de identificación.\n";
        cout << "4. Salir del programa.\n";
        cout << "Seleccione una opción (1/2/3/4): ";

        int opcion;
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1: {
                Empleado empleadoSalarioMasAlto = empleados[0];
                for (int i = 1; i < numEmpleados; i++) {
                    if (empleados[i].salario > empleadoSalarioMasAlto.salario) {
                        empleadoSalarioMasAlto = empleados[i];
                    }
                }
                cout << "Empleado con el salario más alto:\n";
                cout << "Nombre: " << empleadoSalarioMasAlto.nombre << endl;
                cout << "Identificación: " << empleadoSalarioMasAlto.identificacion << endl;
                cout << "Salario: " << empleadoSalarioMasAlto.salario << endl;
                break;
            }
            case 2: {
                Empleado empleadoSalarioMasBajo = empleados[0];
                for (int i = 1; i < numEmpleados; i++) {
                    if (empleados[i].salario < empleadoSalarioMasBajo.salario) {
                        empleadoSalarioMasBajo = empleados[i];
                    }
                }
                cout << "Empleado con el salario más bajo:\n";
                cout << "Nombre: " << empleadoSalarioMasBajo.nombre << endl;
                cout << "Identificación: " << empleadoSalarioMasBajo.identificacion << endl;
                cout << "Salario: " << empleadoSalarioMasBajo.salario << endl;
                break;
            }
            case 3: {
                char clave[50];
                cout << "Ingrese el nombre o identificación a buscar: ";
                cin.getline(clave, sizeof(clave));
                bool empleadoEncontrado = false;
                for (int i = 0; i < numEmpleados; i++) {
                    if (strcmp(empleados[i].nombre, clave) == 0 || strcmp(empleados[i].identificacion, clave) == 0) {
                        cout << "Empleado encontrado:\n";
                        cout << "Nombre: " << empleados[i].nombre << endl;
                        cout << "Identificación: " << empleados[i].identificacion << endl;
                        cout << "Salario: " << empleados[i].salario << endl;
                        empleadoEncontrado = true;
                        break; // Salir del bucle
                    }
                }
                if (!empleadoEncontrado) {
                    cout << "El empleado ingresado no se encuentra en la base de datos. Intenta nuevamente.\n";
                }
                break;
            }
            case 4:
                cout << "Saliendo del programa.\n";
                return 0;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida (1/2/3/4).\n";
                break;
        }
    }
	getch();
    return 0;
}

