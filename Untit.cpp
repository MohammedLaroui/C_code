#include<conio.h>
#include<stdio.h>
#include<math.h>
typedef struct etudiant
{
        int num;
        char nom[20];
        int age;
        float moy,note,som;};
      
        main(){ 
                etudiant e;
                
                FILE *x;
                x=fopen("c:\\groupe6.dat","w");
                
                 int i,j,z,num;
        float max;
        
              
            
                printf("donner le numero ");
                scanf("%d",&e.num);
                 printf("donner le nom ");
                scanf("%s",e.nom);
         
                
               printf("donner l'age de l'etudiant ");
               scanf("%d",&e.age);
             e.som=0;
               for(i=1;i<=3;i++){
                                 printf("donner la note\n");
                                 scanf("%f",&e.note);
                                 e.som=e.som+e.note;}
                                 e.moy=e.som/3;

                printf(" le nom:%s \n l'age de l'etudiant:%d\n le numero:%d\n\n",e.nom,e.age,e.num);
                printf(" la moyenne= %2.2f\n\n",e.moy);
                
             fwrite(&e,sizeof(etudiant),1,x);
                                 
                
                fclose(x);
               
                
                fread(&e,sizeof(etudiant),1,x);
                
                
                
                printf("le numero %d ",e.num);
                 printf(" le nom %d ",e.nom);
                 printf(" l'age de l'etudiant %d ",e.age);
                 for(i=1;i<=3;i++){
                                 printf(" la note\n",e.note);}
                                 printf(" la moyenne= %2.2f\n",e.moy);
                
                
                
                
                
                
                
                
                
                
                
                
                getch();
                }
