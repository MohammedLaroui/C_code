#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int complexite,taille,valeur,valeurr,max,g=0,d=0;

int gauche(int i){return (2*i);}
int droite(int i){return (2*i)+1;}

void ENTASSER(int * A,int i){
     
complexite=complexite+1;
    

d=droite(i);
g=gauche(i);
max=i;

          if((g <= taille)&&(A[g] > A[max])){max=g;}   
          if((d <= taille)&&(A[d] > A[max])){max=d;}
          
          if(max != i){
                 valeur=A[i];
                 A[i]=A[max];
                 A[max]=valeur;
                 ENTASSER(A,max);} 
          
             }

void CONSTRUIRE_TAS(int * A,int n){
     
             int l,k=n/2;
             complexite=complexite+1;
             
             taille=n;
    
     for(l=k;l>=1;l--){ENTASSER(A,l);}
     }

void TRIER_TAS(int * A,int n){
     
             int h,s=n;
             
     
             CONSTRUIRE_TAS(A,s);
     
     
     for(h=s;h>=2;h--){
     
     valeurr=A[h];
     A[h]=A[1];
     A[1]=valeurr;
     taille=taille-1;
     ENTASSER(A,1);}
     
     
     }




int main(){
    
      int *A; 
      int i,j,n;
     
     printf("                         Tri-Par-Tas\n\n");
      printf("donner la dimension de tableau ",n);
      scanf("%d",&n);
      
      A=(int*)malloc(n*sizeof(int));
      
      for(j=1;j<=n;j++){printf("donner la valeur de A[%d]= ",j,A[j]);
      scanf("%d",&A[j]);}
    
     TRIER_TAS(A,n);
     printf("Tableau Finale Trier :\n");
     
     for(i=1;i<=n;i++){printf("A[%d]=%d\n",i,A[i]);}
     printf("Complexite = %d",complexite);
     
     getch();}
