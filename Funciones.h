#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
    struct nodo2*inicio;
    struct nodo2*fin;
}Fila;

typedef struct
{
    ///persona dato;
    struct nodoArbol *izq;
    struct nodoArbol *der;
}nodoArbol;

typedef struct
{
    ///persona dato;
    struct NodoB * ste;
    struct NodoB * ante;
} nodoB;

///FUNCIONES DE LISTA///

nodoPersona * inicLista ();
nodoPersona * crearPersona (persona p);
nodoPersona * agregarAlPrincipio (nodoPersona * lista, nodoPersona * nuevoNodo);
void mostrar (nodoPersona * lista);
void mostrarNodo (nodoPersona * aux);
nodoPersona * agregarEnOrden (nodoPersona * lista, nodoPersona * nuevoNodo);
int buscarNodo (nodoPersona * lista,char nom[20]);
nodoPersona * buscarUltimo (nodoPersona * lista);
void recorrerYmostrar(nodoPersona * lista);
nodoPersona * agregarAlFinal (nodoPersona * lista, nodoPersona * nuevoNodo);
nodoPersona * borrarNodo (nodoPersona * lista, char nombre[20]);
nodoPersona * borrarPrimeroLista(nodoPersona * lista);

///FUNCIONES DE ARBOL///

nodoArbol * inicArbol();
nodoArbol * crearNodoArbol(persona dato);
nodoArbol * insertar (nodoArbol * arbol, persona dato);
nodoArbol * buscar(nodoArbol * arbol, persona dato);
void preorder(nodoArbol * arbol);
void inorder(nodoArbol * arbol);
void postorder(nodoArbol * arbol);
///void mostrarPersona (persona dato);
persona cargarArbol();
nodoArbol * ingresaNodoOrden (nodoArbol * arbol, persona dato);
nodoArbol * buscarPorNombre(nodoArbol * arbol, persona dato);
/// FALTA FUNCIONES DE BORRAR NODO

///FUNCIONES DE LISTAS DOBLES ENLAZADAS///

nodoB * InicListaD();
nodoB * crearNodo(persona dato);
nodoB * agregarAlPio(nodoB * lista, nodoB * nuevoNodo);
nodoB * buscarUltimo(nodoB * lista);
nodoB * agregarAlFinal(nodoB * lista, nodoB * nuevoNodo);
nodoB * insertarNodo(nodoB * lista, nodoB * nuevoNodo);
void mostrarListaDoble (nodoB * lista);
void mostrarNodo(nodoB * aux);

///FUNCIONES DE FILA///

void inicFila (Fila*fila);
void mostrar(Fila*fila);
void agregarAlFinal (Fila*fila,int dato);
int extraer (Fila*fila);
void leer(Fila*fila);
int primero (Fila*fila);
nodo2 * borrarPrimero(nodo2*lista);
int verPrimero (nodoB * lista);


#endif // FUNCIONES_H_INCLUDED

