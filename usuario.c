#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_usuario()
{
    int opcion;
    printf("Ingrese Opcion: \n");
    printf("1.Ver Catalogo por Artista \n");
    printf("2.Ver Canciones por Album: \n");
    printf("3.Ver Informacion Detallada de Canción\n");
    printf("4.Calificar Canción\n");
    printf("5.Ver Mis Calificaciones\n");
    printf("0.Para Finalizar\n");
    scanf("%d",&opcion);
    while(opcion!=0)
    {
        switch(opcion)
        {
            case 1:
                {
                    //llamar funcion
                    break;
                }
            case 2:
                {
                    //llamar funcion
                    break;
                }
            case 3:
                {
                    //llamar funcion
                    break;
                }
            case 4:
                {
                    //llamar funcion
                    break;
                }
            case 5:
                {
                    //llamar funcion
                    break;
                }
            default:
                {
                    printf("Opcion Incorrecta\n");
                }
            printf("Ingrese Opcion: \n");
            printf("1.Ver Catalogo por Artista \n");
            printf("2.Ver Canciones por Album: \n");
            printf("3.Ver Informacion Detallada de Canción\n");
            printf("4.Calificar Canción\n");
            printf("5.Ver Mis Calificaciones\n");
            printf("0.Para Finalizar\n");
            scanf("%d",&opcion);
        }
    }

}
