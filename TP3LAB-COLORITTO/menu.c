#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "menu.h"
int menuOpciones()
{
    system("cls");
    int opcion;
    printf("<<MENU DE OPCIONES>>\n\n");
 printf("1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n");
 printf("2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n");
 printf("3. Alta de empleado\n");
 printf("4. Modificar datos de empleado\n");
 printf("5. Baja de empleado\n");
 printf("6. Listar empleados\n") ;
 printf("7. Ordenar empleados\n");
 printf("8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n");
 printf("9. Guardar los datos de los empleados en el archivo data.csv (modo binario).\n");
 printf("10. Salir\n");

 printf("Ingrese una opcion:");
 scanf("%d",&opcion);

 return opcion;


}

int menuEditarEmployee(){

int opcion;

printf("1-Editar Nombre\n");
printf("2-Editar Horas Trabajadas\n");
printf("3-Editar Sueldo\n");
printf("4-Salir\n");

printf("Ingrese una opcion:");
scanf("%d",&opcion);

return opcion;
}
