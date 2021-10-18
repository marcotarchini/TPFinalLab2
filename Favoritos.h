#ifndef FAVORITOS_H_INCLUDED
#define FAVORITOS_H_INCLUDED

typedef struct {
   int idUsuarioEmisor;
   int idUsuarioReceptor;
   int idContenidoEnviado;
   char mensaje[300];
   int leido;                      // 1:si 0:no
}Mensajeria;

typedef struct
{
    int idFavorito;
    int idUsuario;
    int idContenido;
}Favorito;

#endif // FAVORITOS_H_INCLUDED
