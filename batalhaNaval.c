#include <stdio.h>

int main(){

    int h=3;

//cria a matriz 10x10.

   int tab[10][10];

 //criar as letras de cima A a L     

   char letras[10]={'A','B','C','D','E','F','G','H','J','I'};

//Criar o mar com 0 nas matrizes.

    for(int i=0;i<10;i++){

         for(int j=0;j<10;j++){
    

        tab[i][j]=0;

        
    }  
    }

//Cria barco na horizontal e vertical.

while(h<6){

    tab[0][h]=3;
    tab[1][h]=3;
    tab[h][5]=3;
    tab[h][0]=3;
    
    h++;

}

//Criar os barcos na diagonal.

int n=1;
int g,d;
for(int m=7;m<10;m++){
    n++;
     for(d=0;d<3;d++){
     
        tab[m][n]=3;
         tab[m][n+1]=3;
     }
      
    }
     
        
//Cria o print do tabulheiro.
    printf("  "); 

    for(int l=0;l<10;l++){

         printf(" %c",letras[l]);  

    }
        printf("\n  =====================");  
        printf("\n");  

    for(int i=0;i<10;i++){

        printf("%d|",i);

         for(int j=0;j<10;j++){
    
        printf(" %d",tab[i][j]);
  
    }
        printf(" |\n");  
    }
        printf("  =====================\n");  



 
    return 0;
}
  