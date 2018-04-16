typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    char destNombre[51];
    eFecha fechaNacimiento;
    int idNacionalidad;
    char idEstado;
    int idDirector;

}eDirector;

typedef struct
{
    int idNacionalidad;
    char destTitulo[51];
    int destAnio;
    int idPelicula;
    char idEstado;
}eVideo;

typedef struct
{
    int idDirector;
    int idPelicula;
}eRelacion;

typedef struct
{
    int idNacionalidad;
    char destPais[51];
    char idEstado;
}eNacion;

typedef struct
{
    int idDirector;
    int cantPelicula;
}eCantPelicula;

typedef struct
{
    int idPelicula;
    int cantDirectores;
}eCantDirector;

