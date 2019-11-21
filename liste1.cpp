#include<conio.h>
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct liste{int val;struct liste*next;}liste ;
    liste*tete;liste*nouveau;liste*nouveau1;liste*p;liste*nouveau2;    
main()   
{

liste*tete; 
liste*nouveau;
tete=NULL;
nouveau=(liste*)malloc(sizeof(liste));
nouveau ->val=1;
 

nouveau ->next=NULL;
tete=nouveau;

nouveau1=(liste*)malloc(sizeof(liste));

nouveau1 ->val=2;
nouveau1 ->next=NULL;
tete ->next=nouveau1;
p=tete;
while (p!=NULL){
printf ("%d\n",p->val);p=p->next;}

int cp;
cp=0;
p=tete;
while (p!=NULL)
{cp=cp+1; p=p->next;}
printf("la longeur = %d",cp);

nouveau2 ->val=23;
nouveau2 ->next=NULL;
tete ->next=nouveau2;





getch();}
