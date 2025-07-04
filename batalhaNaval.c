#include <stdio.h>

int main(){

            int h=3;

    //cria a matriz 10x10.

            int tab[10][10];

    /criar as letras de cima A a L     

            char letras[10]={'A','B','C','D','E','F','G','H','J','I'};

    //Criar o mar com 0 nas matrizes.

    for(int i=0;i<10;i++){

         for(int j=0;j<10;j++){
    

        tab[i][j]=0;

        
        }  
    }

    //Cria barco na horizontal e vertical.

        while(h<6){

        tab[0][h-1]=3;
        tab[1][h-1]=3;
        tab[h][2]=3;
        tab[h][0]=3;
    
        h++;

    }

    //Criar os barcos na diagonal.
    int n=-1;
    for (int d=0;d<2;d++){
    for(int m=7;m<10;m++){
    
        n++;
     
            tab[m][n]=3;
       
     
      
        }
    }
   
    //cria o cone.

        for(int t=5;t<10;t++){
        

          tab[2][t]=1;
           if(t>5&&t<9){

                tab[1][t]=1;  

                if(t==7){

                    tab[0][t]=1; 
                }
                
            }

        }
    //criar cruz.

        for(int t2=4;t2<9;t2++){
            
            tab[5][t2]=1;
            
            if(t2==6){
                
                    tab[6][t2]=1;
                  
                    tab[4][t2]=1;

           }
                
        }

//criar octaedro.

        for(int t1=7;t1<10;t1++){
            
            tab[8][t1]=1;
            
            if(t1==8){
                    tab[7][t1]=1;
                    tab[9][t1]=1;
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