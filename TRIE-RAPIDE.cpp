#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int complexite;
int PARTITIONNEMENT(int * A,int p,int r){
    
     complexite=complexite+1;
      int x=A[p];
      int i=p-1;
      int j=r+1;
      int valeur;
            while (true){
                  do {j=j-1;} while(A[j]>x);
                  do {i=i+1;} while(A[i]<x);
            
            if (i < j) { valeur = A[i]; A[i] = A[j]; A[j] = valeur; }
            else{return j;}}
     
     }
void TRIE_RAPIDE(int * A,int p,int r){
    
        int q;
        if(p<r){
                      q =PARTITIONNEMENT(A,p,r);
                      TRIE_RAPIDE(A,p,q);
                      TRIE_RAPIDE(A,q+1,r);
                                            }
     
     }
     
int main(){
    
      int *A; 
      int i,j,n;
     printf("               Tri Rapide\n\n");
      printf("donner la dimension de tableau ",n);
      scanf("%d",&n);
      
      A=(int*)malloc(n*sizeof(int));
      
      for(j=1;j<=n;j++){printf("donner la valeur de A[%d]= ",j,A[j]);scanf("%d",&A[j]);}
    
     TRIE_RAPIDE(A,1,n);
     printf("Tableau Finale Trier :\n");
     
     for(j=1;j<=n;j++){printf("A[%d]=%d\n",j,A[j]);}
     printf("Complexite = %d",complexite);
     
     getch();}
