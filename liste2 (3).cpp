#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct liste
{int v;
liste * suiv;};
main(){
       liste *tete,*nouveaux,*p,*f,*k;
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
                        int a,cp;
                        printf("donner la positin pour supprimer\n",a);
                        scanf("%d",&a);
                        if(a>6){printf("postion incorect");}
                        else{
                        p=tete;
                    cp=1;
                        while((p!=NULL)&&(cp<a)){cp=cp+1;p=p->suiv; }
                f=p->suiv;      
                 p->suiv=p->suiv->suiv;
                        
                        free(f);}
                        k=tete;
                        while(k!=NULL){printf("%d",k->v);k=k->suiv;}
                         getch();
                         }
       
