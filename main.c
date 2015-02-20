#include <stdio.h>
#include <stdlib.h>

int const N=6;

int main(int argc, char** argv) {
    
    int i;
    int conta=0;
    int vet[N];
    int media;
    int somma,max,min;
    
    
    i=0;
    while(i<N){
        
          printf("inserisci eta' della %d a persona: \n",i);
          scanf("%d",&(vet[i]));
          
         
          
          if(vet[i]>=50){
              
              conta=conta+1;
          }
          i=i+1;
    }
    min=0;
    max=0;
    i=1;
    while(i<N){
        
        if(max<vet[i]){
            
            max=vet[i];
           
        }
      if(min>vet[i]){
          
          min=vet[i];
      }  
        i=i+1;
    }
    
    i=0;
    while(i<N){
        
        somma=somma+vet[i];
        i=i+1;
        
    }
   
   media=somma/N;
   
   printf("l'eta' massima e': %d",max);
   printf("\nl'eta' minima e': %d",min);
   printf("\nla media e': %d",media);
   printf("\nNumero di potenziali Presidenti della Reppubblica: %d ",conta);
    
    
    
    
    
    

    return (EXIT_SUCCESS);
}

