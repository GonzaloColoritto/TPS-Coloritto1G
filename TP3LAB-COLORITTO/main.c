#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "menu.h"
#include "parser.h"
#include <ctype.h>
#include <string.h>

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{

    char seguir = 's';
    char confirmacion;

    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(menuOpciones())
        {
                 case 1:

                if(controller_loadFromText("data.csv",listaEmpleados)==0)
                {
                    printf("Datos Cargados con exito\n");
                system("pause");
                }else{

                printf("Error en la carga de datos\n");
                system("pause");
                }

                break;

                  case 2:

                 if(controller_loadFromBinary("data.bin",listaEmpleados)==0)
                {
                    printf("Datos Cargados con exito\n");
                system("pause");
                }else{

                printf("Error en la carga de datos\n");
                system("pause");
                }
                break;

                  case 3:
                controller_addEmployee(listaEmpleados);

                break;

                  case 4:
                controller_editEmployee(listaEmpleados);

                break;

                  case 5:
                controller_removeEmployee(listaEmpleados);
                break;

                  case 6:
                controller_ListEmployee(listaEmpleados);

                system("pause");
                break;

                  case 7:

                controller_sortEmployee(listaEmpleados);
                break;

                  case 8:
                 if(!controller_saveAsText("data2.csv",listaEmpleados))
                             {
                                 printf("Guardado con exito\n");
                             }else
                                {
                                printf("ERROR al guardar\n");
                                }


                break;

                  case 9:
                      if(!controller_saveAsBinary("data2.bin",listaEmpleados))
                         {
                             printf("Guardado con exito\n");
                         }else
                            {
                            printf("ERROR al guardar\n");
                            }


                break;

                  case 10:


                printf(" ¿Desea salir? S/N: ");
                fflush(stdin);
                scanf("%c",&confirmacion);

                confirmacion=tolower(confirmacion);

                if(confirmacion=='s')
                {
                    seguir = 'n';
                }
                            break;
                system("pause");
        }
    }while(seguir=='s');
    return 0;
}
