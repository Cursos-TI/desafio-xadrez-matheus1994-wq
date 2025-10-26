#include <stdio.h> 

int torre, bispo, rainha, cavalo;
int opcao;
int opcaotorre, opcaobispo, opcaorainha, opcaocavalo;

int main () {

do { 

printf("\n\n1. para torre\n"); 
printf("2. para bispo\n");
printf("3. para rainha\n");
printf("4. para o cavalo\n");
printf("faça sua escolha (1, 2, 3 ou 4):\n");
scanf("%d", &opcao);

if (opcao == 1) {  

printf("\n1. para andar 5 casas acima\n");
printf("6. para andar 5 casas abaixos\n");
printf("12. para andar 5 casas a direita\n");
printf("18. para andar casas 5 a esquerda\n");
printf("faça uma escolha (1, 6, 12 ou 18):\n");
scanf("%d", &opcaotorre);

}

else if (opcao == 2) { 

printf("\n1. para o bispo subir 5 casas na diagonal há direita\n");
printf("6. para o bispo descer 5 casas na diagonal há direita\n");
printf("11. para o bispo subir 5 casas na diagonal há esquerda\n");
printf("16. para o bispo descer 5 casas na diagonal há esquerda\n");
printf("faça sua escolha (1, 6, 11, ou 16):\n");
scanf("%d", &opcaobispo);

} else if (opcao == 3) { 

printf("\n1. para a rainha subir 5 casas\n");
printf("6. para a rainha descer 5 casas\n");
printf("11. para a rainha mover 5 casas a direita\n");
printf("16. para a rainha mover 5 casas a esquerda\n");
printf("20. para a rainha subir 5 casa na diagonal a direita\n");
printf("25. para a rainha descer 5 casas na diagonal a direita\n");
printf("30. para a rainha subir 5 casas na diagonal a esquerda\n");
printf("35. para a rainha descer 5 casas na diagonal a esquerda\n");
printf("faça sua escolha: (1, 6, 11, 16, 20, 25, 30, ou 35):\n");
scanf("%d", &opcaorainha);

} else if (opcao == 4) { 

printf("\n1: para mover duas casas acimas e uma a direita\n");
printf("6. para mover duas casas acimas e uma a esquerda\n");
printf("11. para mover duas casas abaixo e uma a direita\n");
printf("16. para mover duas casas abaixos e uma a esquerda\n");
scanf("%d", &opcaocavalo);

}

if (opcao == 1) { 

if(opcaotorre >= 1 && opcaotorre <= 5) { 
torre+=5;

printf("\n torre andou 5 casas acimas...\n");

} else if (opcaotorre <=11 && opcaotorre >=6 ) { 
torre-=5;

printf("\n a torre andou 5 casas abaixos...\n");

}

else if (opcaotorre >=12  && opcaotorre <= 17) { 
torre+=5;

printf("\n a torre andou 5 casas a direita...\n");

}

else if(opcaotorre <=23 && opcaotorre >= 18) { 
torre-=5;

printf("\n a torre andou 5 casas a esquerda...\n");

} 

else { 

printf("\n movimentos invalido!\n");

}

printf("\nse deseja continuar digite 1, senão, digite 0:\n");
scanf("%d", &opcao);

if(opcao == 0) { 

printf("\n encerrando o jogo...\n");

} 

}

if (opcao == 2) { 
 
if(opcaobispo >= 1 && opcaobispo <= 5) { 
bispo+=5;

printf("\n o bispo subiu 5 casas na diagonal direita\n");

} else if (opcaobispo >= 6 && opcaobispo <=10) { 
bispo-=5;

printf("\n o bispo desceu 5 casas na diagonal direita\n");

} else if (opcaobispo >= 11 && opcaobispo <=15) { 
bispo+=5;

printf("\n o bispo subiu 5 casas na diagonal esquerda\n");

} else if (opcaobispo >= 16 && opcaobispo <= 20) { 
bispo-=5;

printf("\n o bispo desceu 5 casas na diagonal esquerda\n");

} else { 

printf("\n movimento invalido. tente novamente!\n");

} 

printf("\nse deseja continuar, digite 1, se deseja sair, digite 0:\n");
scanf("%d", &opcao);

if (opcao == 0) { 

printf("\n encerrando o jogo...\n");

}

}

if (opcao == 3) {  

if(opcaorainha >= 1 && opcaorainha <=5) { 
rainha+=5;

printf("\n a rainha andou 5 cinco casas acimas\n");

} else if (opcaorainha >= 6 && opcaorainha <= 10) { 
rainha-=5;

printf("\n a rainha andou 5 casas abaixo\n");

} else if (opcaorainha >= 11 && opcaorainha<= 15) { 
rainha+=5;

printf("\n a rainha andou 5 casas a direita\n");

} else if (opcaorainha >= 16 && opcaorainha <= 19) { 
rainha-=5;

printf("\n a rainha andou 5 casas a esquerda\n");

} else if (opcaorainha >= 20 && opcaorainha < 25) { 
rainha+=5;

printf("\n a rainha subiu 5 casas diagonal a direita\n");

} else if (opcaorainha >= 25 && opcaorainha < 30 ) { 
rainha-=5;

printf("\n a rainha desceu 5 casas na diagonal a direita\n");

} else if (opcaorainha >= 30 && opcaorainha < 35) { 
rainha+=5;

printf("\n a rainha subiu 5 casas na diagonal a esquerda\n");

} else if (opcaorainha >= 35 && opcaorainha <= 40) { 

printf("\n a rainha desceu 5 casas na diagonal a esquerda\n");

} else { 

printf("\n movimento invalido. tente novamente!\n");

}

printf("\nse deseja continuar, digite 1, se não digite 0:\n");
scanf("%d", &opcao);

if(opcao == 0) { 

printf("\n encerrando o jogo...\n");

}

}

if (opcao == 4) { 

if(opcaocavalo >= 1 && opcaocavalo <= 5) { 
cavalo++;

printf("\n o cavalo andou duas casas acimas e virou uma a direita\n");

} else if (opcaocavalo >= 6 && opcaocavalo <= 10) { 
cavalo++;

printf("\n o cavalo andou duas casas acimas e virou uma a esquerda\n");

} else if (opcaocavalo >= 11 && opcaocavalo <= 15) { 
cavalo--;

printf("\n o cavalo andou duas casas abaixo e virou uma a direita\n");

} else if (opcaocavalo >= 16 && opcaocavalo <= 20) { 
cavalo--;

printf("\n o cavalo andou duas casas abaixo e virou uma a esquerda\n");

} else { 

printf("\n movimento invalido! tente novamente.\n");

}

printf("\nse deseja continuar, digite 1, se não digite 0:\n");
scanf("%d", &opcao);

if(opcao == 0) { 

printf("\n encerrando o jogo...\n");

}

}

} while (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4);


}