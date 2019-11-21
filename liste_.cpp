#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct liste
{
        int v; 
        liste *suiv;
};
 

main(){
       liste *tete,*p,*nouveaux,*f;
       
       tete=(liste*) malloc(sizeof(liste));
       tete->v=10;
       tete->suiv=NULL;
       printf("%d\n",tete->v);
       
       nouveaux=(liste*)malloc(sizeof(liste));
       nouveaux->v=5;
       tete->suiv=nouveaux;
       nouveaux->suiv=NULL;
       printf("%d\n",nouveaux->v);
       int i;
       p=nouveaux;
       for(i=1;i<=3;i++){
                         
                         nouveaux=(liste*)malloc(sizeof(liste));
                         
                         printf("donner la valeur de la case %d:",i,p->v);
                         scanf("%d",&p->v);
                         p->suiv=nouveaux;
                         nouveaux->suiv=NULL;
                          p=p->suiv;
                        }
       p=tete;
       while(p!=NULL){
                      printf("%d\n",p->v);
                      p=p->suiv;}
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       getch();
       }
