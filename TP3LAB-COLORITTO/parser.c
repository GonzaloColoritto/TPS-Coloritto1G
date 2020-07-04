#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE *pFile, LinkedList *pArrayListEmployee) {

	Employee *pEmployee;

	char id[100];
	char nombre[128];
	char horasTrabajadas[100];
	char sueldo[100];

	int todoOk = 0;
	int flag = 1;

	if (pFile != NULL) {
		while (!feof(pFile)) {
			if (flag) {
				fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, nombre,horasTrabajadas,sueldo);

				flag = 0;
			}
			fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, nombre,horasTrabajadas,sueldo);

			pEmployee = employee_newParametros(id, nombre, horasTrabajadas,sueldo);

			if (pEmployee != NULL) {
				ll_add(pArrayListEmployee, pEmployee);
				todoOk = 1;
			}
		}
	}
	return todoOk;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    Employee* lista;
    int paso=-1;

    if(pFile!=NULL)
    {

        while(!feof(pFile))
        {
            lista = employee_new();

            if(fread(lista,sizeof(Employee),1,pFile)==1)
            {
                ll_add(pArrayListEmployee,lista);
            }
        }


        paso=0;

    }



    return paso;
}

