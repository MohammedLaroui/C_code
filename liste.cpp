#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct liste
{int v;
liste * suiv;};
main(){
       liste *tete,*nouveaux,*p;
       tete=(liste*)malloc(sizeof(liste));
       tete->v=5;
       tete->suiv=NULL;
       
       nouveaux=(liste*)malloc(sizeof(liste));
       nouveaux->v=3;
       nouveaux->suiv=NULL;
       tete->suiv=nouveaux;
       p=tete;
       while(tete!=NULL){
                         printf("%d\n",tete->v);
                         tete=tete->suiv;}
                         getch();
                         }
       
