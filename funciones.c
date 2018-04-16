
void initStruct(evideo arrayPelicula[],eDirector arrayDirector,eNacion arrayNacion[],eRelacion arrayRelacion,int cantidad)
{
    int i;

    for(i=0;i<cantidad;i++)
    {
        arrayDirector[i].idEstado='E';
        arrayNacion[i].idEstado='E';
        arrayPelicula[i].idEstado='E';
        arrayRelacion[i].idDirector='E';
        arrayRelacion[i].idPelicula='E';
    }
}

int upVideo(eVideo arrayVideo[],eDirector arrayDirector[],eNacion arrayNacion[],eRelacion arrayRelacion[],int cantidad)
{
    system("cls");
    char auxTitulo[255];
    char auxAno[255];
    char auxDirec[255];
    int flagDate=0;

    int empty;
    int flagTitulo=0;
    int flagAno=0;
    int flagNacio=0;
    int flagDirec=0;
    int flagId=0;
    int retorno=-1;
    int id_pelicula;
    char opcion_pais;
    int id_nacion;
    int id_director;
    char seguir='n';
    int indice_relacion;

    ///hacerlo con getvalidstringalphanum
    getValidString("ingrese titulo de la pelicula","error, ingresele un titulo correcto",auxTitulo);

    auxAno=getValidInt("ingrese anio","error,ingrese un anio correcto",1915,2018);

    id_nacion=upNacionHc(arrayNacion,cantidad);

    id_pelicula=recorreEstadoPelicula(arrayVideo,cantidad);

    printf("\nse encuentra el director en la lista 1-<s>/2-<n>\n");
    opcion_pais=getValidInt("\nse encuentra el director en la lista 1-<s>/2-<n>\n","error elija una opcion correcta",1,2);
    if(opcion_pais!=1)
    {

    }











}



int upNacionHc(eNacion arrayNacion[],int cantidad)
{
            int opcionPais;
            char auxNacio[50];
            //int atoi_id_pais;
            int flagnacion=0;
            int empty;
            int id_nacion;

            printf("\nOPCIONES DE PAISES PARA LA PELICULA:\n");
            imprimirListaPais(arrayNacion,cantidad);
            fflush(stdin);
            opcionPais=getValidInt("se encuentra el pais en la lista ingrese 1:<SI>  2:<NO>\n","error,elija una opcion correcta",1,2);

            if(opcionPais==1)
            {
//                if(get_string_numero("ingrese la opcion del pais:",auxNacio))
//                {
//                    id_nacion=atoi(auxNacio);
//                }
            }
            else
            {
                id_nacion=recorreEstadoNacion(arrayNacion,cantidad);

                empty=searchEmptyNacion(arrayNacion,cantidad);

                getValidString("ingrese el nuevo pais a la lista","error, ingrese un pais con letras",auxNacio);

                strcpy(arrayNacion[empty].destPais,auxNacio);
                arrayNacion[empty].idEstado='F';
                arrayNacion[empty].idNacionalidad=id_nacion;
            }


            return id_nacion;
}


int recorreEstadoNacion(eNacion arrayNacion[],int cantNacion)
{
    int i;
    int mayor=0;

    for(i=0;i<cantNacion;i++)
    {
        if(arrayNacion[i].idEstado=='E')
        {
            mayor=max_id_nacion(arrayNacion,cantNacion)+1;
            break;
        }

    }

    return mayor;

}

int maxIdNacion(eNacion arrayNacion,int cantidad)
{
    int i;
    int mayor=0;
    for(i=0;i<cantidad;i++)
    {
        if(arrayNacion[i].idEstado=='F')
        {
            if(arrayNacion[i].idNacionalidad>mayor)
            {
                mayor=arrayNacion[i].idNacionalidad;
            }
        }
    }

    return mayor;
}

int searchEmptyNacion(eNacion arrayNacion[],int cantidad)
{
    int retorno=-1;
    int i;

    for(i=0;i<cantidad;i++)
    {
        if(arrayNacion[i].idEstado=='E')
        {
            retorno=i;
            break;
        }
    }

    return retorno;
}



void imprimirListaPais(eNacion arrayPais[],int cantidad)
{
    int i;

    for(i=0;i<cantidad;i++)
    {
        if(arrayPais[i].idEstado=='F')
        {
            printf("%d-%s\n",arrayPais[i].idNacionalidad,vectorpais[i].destPais);
        }
    }
}





int recorreEstadoPelicula(eVideo arrayVideo[],int cantidad)
{
    int i;
    int mayor=0;
    for(i=0;i<cantidad;i++)
    {
        if(arrayVideo[i].idEstado=='E')
        {
            mayor=
        }
    }

}


int maxIdPelicula(eVideo arrayVideo[],int cantidad)
{
    int i;
    int mayor=0;
    for(i=0;i<cantidad;i++)
    {
        if(arrayVideo[i].idEstado=='F')
        {
            if(arrayVideo[i].idPelicula>mayor)
            {
                mayor=arrayVideo[i].idPelicula;
            }
        }
    }

    return mayor;
}


void imprimirListaDirector(eDirector arrayDirector[],int cantidad)
{
    int i;

    for(i=0;i<cantidad;i++)
    {
        if(arrayDirector[i].idEstado=='F')
        {
            printf("%d-%s\n",arrayDirector[i].idDirector,arrayDirector[i].destNombre);
        }
    }


}


