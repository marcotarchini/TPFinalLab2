#include "Funciones.h"

///FUNCIONES DE LISTAS///

void muestraPersona(persona a){///***

    printf("Legajo..........: %d\n", a.legajo);
    printf("DNI.............: %d\n", a.dni);
    printf("Apellido........: %s\n", a.apellido);
    printf("Nombre..........: %s\n", a.nombre);
    printf("--------------------------------------\n");
}

nodoPersona * inicLista (){
    return NULL;
}

nodoPersona * crearPersona (persona p){

    nodoPersona * aux = (nodoPersona*) malloc(sizeof(nodoPersona));

    aux ->dato = p;
    aux -> siguiente = NULL;

    return aux;
}

nodoPersona * agregarAlPrincipio (nodoPersona * lista, nodoPersona * nodoAux){

    if (lista==NULL)
        lista=nodoAux;

    else{
        nodoAux->siguiente=lista;
        lista=nodoAux;
    }
    return lista;
}
void mostrarNodo (nodoPersona * aux){///***

    muestraPersona(aux->dato);
}

void mostrar (nodoPersona * lista)
{
    nodoPersona * seg =lista;

    while (seg!=NULL){
        mostrarNodo(seg);
        seg = seg->siguiente;
    }
}

nodoPersona * agregarEnOrden (nodoPersona * lista, nodoPersona * nodoAux)///***
{
    if (lista==NULL)
        lista=nodoAux;

    else{
        if(nodoAux->dato.legajo<lista->dato.legajo ) {

           lista=agregarAlPrincipio(lista,nodoAux);
        }
        else{
            nodoPersona*nuevo=lista;
            nodoPersona*ant;
            while(nuevo && (strcmp(nuevo->dato.nombre,nodoAux->dato.nombre)!=0)) {

                ant=nuevo;
                nuevo= nuevo->siguiente;
            }
            ant->siguiente=nodoAux;
            nodoAux->siguiente=nuevo;
        }
    }
    return lista;
}

int buscarNodo (nodoPersona * lista, persona dato){///***

        int flag=0;
        nodoPersona * nuevo=lista;

        while(nuevo!=NULL) {
                if(strcmp(nuevo->dato.nombre,dato.nombre)==0) {
                    flag=1;
                }
            nuevo= nuevo->siguiente;
        }

        return flag;
}

nodoPersona * buscarUltimo (nodoPersona * lista){

        nodoPersona * buscado= lista;

        while(buscado->siguiente !=NULL){
            buscado=buscado->siguiente;

        }
    return buscado;
}

nodoPersona * agregarAlFinal (nodoPersona * lista, nodoPersona * nodoAux)
{
        if (lista==NULL)
                lista=nodoAux;

        else{
            nodoPersona * ultimo= buscarUltimo(lista);
            ultimo->siguiente= nodoAux;
        }
    return lista;
}
nodoPersona * borrarPrimeroLista(nodoPersona * lista){

   nodoPersona * proximo=NULL;
   nodoPersona * seg=lista;

   if(seg != NULL) {
      proximo = seg->siguiente;
      free(seg);
      seg = proximo;

   }
   return seg;
}
nodoPersona * borrarNodo (nodoPersona * lista, persona dato){///***

    nodoPersona * nuevo=NULL;
    nodoPersona * ant=NULL;

    if (lista && (strcmp(dato.nombre lista->dato.nombre)==0)){
        nuevo=lista;
        lista=lista->siguiente;
        free(nuevo);
        }
    else{
        nuevo=lista;
        while(nuevo && (strcmp(dato.nombre, nuevo->dato.nombre)!=0 )){
            ant=nuevo;
            nuevo=nuevo->siguiente;
        }
        if(nuevo){
            ant->siguiente=nuevo->siguiente;
            free(nuevo);
        }
    }
    return lista;
}
