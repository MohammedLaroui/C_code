#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct liste
{int v;
liste * suiv;};
main(){
       liste *tete,*nouveaux,*p,*f;
       tete=(liste*)malloc(sizeof(liste));
       tete->v=5;
       tete->suiv=NULL;
       
       nouveaux=(liste*)malloc(sizeof(liste));
       nouveaux->v=3;
       nouveaux->suiv=NULL;
       tete->suiv=nouveaux;
       printf("%d\n",tete->v);
       int i;
       p=tete;
      for(i=2;i<=5;i++){
                        nouveaux=(liste*)malloc(sizeof(liste));
                        printf("donner le contenu la case%d:",i,nouveaux->v);
                        scanf("%d",&nouveaux->v);
                        p->suiv=nouveaux;
                        nouveaux->suiv=NULL;
                          p=p->suiv;
                        }
                        p=tete;
                        while(p!=NULL){ printf("%d",p->v);
                        p=p->suiv;}
                         getch();
                         }
       
