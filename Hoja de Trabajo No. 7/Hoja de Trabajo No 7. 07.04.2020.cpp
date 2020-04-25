/* 
Una empresa necesita llevar el control de los datos personales de sus 10 empleados contratados, por la 
motivo la empresalo ha contratado para la implementacion de este proyecto, los datos a almacenar son:

Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario.

Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion.  El programa debera de desplegar 
la lista de empleados almacenados y el total de la planilla.
*/

#include <iostream>
#include <fstream>
#include <string>

//Reservación para los nombres
using namespace std;

//Creación de estructura
struct empleados{
	int codigoEmpleado;
	string nombreEmpleado;
	string puestoEmpleado;
	string departamento;
	float salario;
};

void registroempleado(){
	//Variable para el total de planilla
	float totalPlanilla = 0.00;
	
	
	//Declaración de variable
	empleados *baseEmpleados;
	
	//Variable para la elección del departamento
	int departamento;
	
	//Asignación de espacio en memoria
	baseEmpleados = new empleados[10];

	//Ciclo para el registro de empleado
	for(int i = 0; i< 10; i++){
		fflush(stdin);
		
		cout << "Ingrese codigo del empleado No. " << i+1 << endl;
		cin >> baseEmpleados[i].codigoEmpleado;
		cin.ignore();
		
		cout << "Ingrese nombre del empleado No. " << i+1 << endl;
		getline(cin, baseEmpleados[i].nombreEmpleado);
		cin.ignore();
		
		cout << "Ingrese puesto del empleado No. " << i+1 << endl;
		cin >> baseEmpleados[i].puestoEmpleado;
		cin.ignore();
		
		//Ingreso de departamento
		cout << "************** Departamento **************" << endl; 
		cout << "\nIngrese departamento del empleado No. " << i+1 << endl;
		cout << "1. Gerencia" << endl; 
		cout << "2. Administracion" << endl; 
		cout << "3. Produccion" << endl;
		cin >> departamento; 
		cin.ignore();
		
		if (departamento == 1 ){
			baseEmpleados[i].departamento = "Gerencia";
		}else if (departamento == 2){
			baseEmpleados[i].departamento = "Administracion";
		}else if (departamento == 3){
			baseEmpleados[i].departamento = "Produccion";
		}else{
			baseEmpleados[i].departamento = "Gerencia";		
		}
		
		//Ingreso de salario
		cout << "Ingrese el salario del empleado No. " << i+1 << endl;
		cin >> baseEmpleados[i].salario;
		cin.ignore();
		
		//Suma de la Planilla
		totalPlanilla += baseEmpleados[i].salario;
		
		cout << "--SE HA REGISTRADO AL EMPLEADO EXITOSAMENTE--" << endl;
		
		//Pausar ejecución
		system("Pause");
		
		//Limpiar consola
		system("CLS");
	}
	
	cout << "************* EMPLEADOS REGISTRADOS *****************" << endl;
	for (int i = 0; i< 10; i++){
		cout << "*** EMPLEADO NO. ***" << i+1 << endl;
		cout << "\nCodigo     :" << baseEmpleados[i].codigoEmpleado << endl;
		cout << "Nombre       :" << baseEmpleados[i].nombreEmpleado << endl;
		cout << "Puesto       :" << baseEmpleados[i].puestoEmpleado << endl;
		cout << "Departamento :" << baseEmpleados[i].departamento << endl;
		cout << "Salario      :" << baseEmpleados[i].salario << endl;
	}

	cout << "\n\n---------------------------------------------------" << endl;
	cout << "      EL TOTAL PARA PAGAR EN PLANILLA ES DE: Q. " << totalPlanilla << endl;
	cout << "---------------------------------------------------" << endl;
}
//Función principal
int main(){
	
	registroempleado();
	
	return 0;
}

