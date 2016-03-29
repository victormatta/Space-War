#ifndef BIBFIS_H
#define BIBFIS_H

struct Forca {
  double x, y;
};

typedef struct Forca forca;

// A funcao atracao retorna a forca gravitacional causada em A por B
forca atracao (double xa, double ya, double ma, double xb, double yb, double mb);

// A funcao resultante retorna a soma das forcas a e b
forca resultante (forca a, forca b);

// A funcao velocidade altera a velocidade (vx, vy) de um corpo de massa massa
// sofrendo acao da forca aplicada por t segundos
void velocidade (forca aplicada, double massa, double t, double *vx, double *vy);
#endif
