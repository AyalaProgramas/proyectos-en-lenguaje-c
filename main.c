#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <ctype.h>

#define QTY 20

int main()
{

    eNacion arrayNacion[200];
    eDirector arrayDirector[200];

    eVideo arrayVideo[200];
    eRelacion arrayRelacion[200];

    eCantDirector arrayCantDirector[200];
    eCantPelicula arrayCantPelicula[200];

    int opcion;
    int continuar=1;
    int empty;
    int i;
    int flagVideo;
    int flagDirector;

    initStruct(arrayVideo,arrayDirector,arrayNacion,arrayRelacion,QTY);


    do
    {
        flagVideo=0;
        for(i=0;i<QTY;i++)
        {
            if(arrayVideo[i].idEstado=='F')
            {
                flagVideo=1;
                break,
            }
        }
        flagDirector=0;
        for(i=0;i<QTY;i++)
        {
            if(arrayDirector[i].idEstado=='F')
            {
                flagDirector=1;
                break,
            }
        }

        opcion=getValidInt("\n1-alta\n2-baja\n3baja pelicula-\n4-nuevo director\n5-eliminar director\n6-informar\n7-mostrar\n","error ingrese una cion valida",1,7);

        switch(opcion)
        {
            case 1:

                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;
        }



    }



    return 0;
}
