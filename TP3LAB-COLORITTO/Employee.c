#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "menu.h"
#include "string.h"

Employee* employee_new(){

    return (Employee*)malloc(sizeof(Employee));
}

int employee_delete(Employee* this)
{
    int retorno = -1;
    if(this != NULL)
    {
        free(this);
        retorno = 0;
    }
    return retorno;
}

int employee_setId(Employee* this,int id)
{

    int retorno = -1;
	if(this != NULL && id > 0)
	{

	    this->id = id;

		retorno = 0;

	}
	return retorno;

}

int employee_setNombre(Employee* this,char* nombre)
{
    int retorno = -1;
	if(this != NULL && nombre != NULL)
	{
		retorno = 0;
		strcpy(this->nombre,nombre);
	}
	return retorno;

}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int retorno = -1;
	if(this != NULL && horasTrabajadas >= 0)
	{

	    this->horasTrabajadas = horasTrabajadas;

		retorno = 0;

	}
	return retorno;

}
int employee_setSueldo(Employee* this,int sueldo)
{
    int retorno = -1;
	if(this != NULL && sueldo >= 0)
	{

	    this->sueldo = sueldo;

		retorno = 0;

	}
	return retorno;
}


Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr){


    Employee* auxEmployee = NULL;

    auxEmployee = employee_new();
    int id=atoi(idStr);
    int horasTrabajadas=atoi(horasTrabajadasStr);
    int sueldo=atoi(sueldoStr);



    if(auxEmployee!=NULL)
    {
        employee_setId(auxEmployee,id);
        employee_setNombre(auxEmployee,nombreStr);
        employee_setHorasTrabajadas(auxEmployee,horasTrabajadas);
        employee_setSueldo(auxEmployee,sueldo);

    }
    return auxEmployee;
}


int employee_getId(Employee* this,int* id)
{
    int retorno = -1;
	if(this != NULL && id != NULL)
	{

	    *id = this->id;

		retorno = 0;

	}
	return retorno;

}

int employee_getNombre(Employee* this,char* nombre)
{
    int retorno = -1;
	if(this != NULL && nombre != NULL)
	{
		retorno = 0;
		strcpy(nombre,this->nombre);
	}
	return retorno;

}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
     int retorno = -1;
	if(this != NULL && horasTrabajadas != NULL)
	{

	    *horasTrabajadas = this->horasTrabajadas;

		retorno = 0;

	}
	return retorno;


}

int employee_getSueldo(Employee* this,int* sueldo)
{

 int retorno = -1;
	if(this != NULL && sueldo != NULL)
	{

	    *sueldo = this->sueldo;

		retorno = 0;

	}
	return retorno;

}


