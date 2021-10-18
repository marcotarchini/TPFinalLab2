#ifndef CONTENIDOS_H_INCLUDED
#define CONTENIDOS_H_INCLUDED

typedef struct {
   int idContenido;           // auto incremental
   char titulo[30];
   char descripcion[300];
   char categoria[30];
   int likes;
   int puntosPorCompartir;
   int activo;                /// indica 1 o 0 si el contenido está activo
}Contenido;

typedef struct
{
    Contenido c;
    struct nodoListaContenido * sig;
} nodoListaContenido ;

typedef struct
{
    Contenido c;
    struct nodoArbolContenido * izq;
    struct nodoArbolContenido * der;
} nodoArbolContenido ;


#endif // CONTENIDOS_H_INCLUDED
