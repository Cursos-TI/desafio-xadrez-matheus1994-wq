#include <stdio.h> 

int cavalo1;

void movimento_da_torre(int torre) { 

if(torre == 0) { 

return;

}

printf("\ntorre casa a direita\n");

movimento_da_torre (torre - 1);

}

void movimento_do_bispo(int bispo) { 

if (bispo == 0) { 

return;

}

printf("\nbispo moveu na diagonal a esquerda!\n");

movimento_do_bispo(bispo - 1);

}

void movimento_do_cavalo(int cavalo) { 

for(cavalo = 1; cavalo <= 1; cavalo++) { 

for(cavalo1 = 0; cavalo1 <= 1; cavalo1++) { 

printf("\n cavalo moveu cima\n");

}

printf("direita...\n");

}

}

void movimento_da_rainha(int rainha) { 

if(rainha == 0) { 

return;

}

printf("\nrainha moveu casa a esquerda!\n");

movimento_da_rainha(rainha - 1);

}

int main() { 

int torre = 5;
movimento_da_torre(5);

int bispo = 5;
movimento_do_bispo(5);

movimento_do_cavalo(5);

int rainha = 8;
movimento_da_rainha(8);

return 0;

}