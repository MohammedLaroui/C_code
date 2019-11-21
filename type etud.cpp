#include<conio.h>
#include<stdio.h>
#include<math.h>
typedef struct etudiant
{
        int num;
        char nom[20];
        int age;
        float moy,note[4],som;};
      
        main(){ 
                
                
                etudiant e;
                 int i,j,num;
        
                FILE *x;
                x=fopen("c:\\groupe6.dat","w");
                
                 
        
       
              
            
                printf("donner le numero ");
                scanf("%d",&e.num);
                printf("donner le nom ");
                scanf("%s",e.nom);
                printf("donner l'age de l'etudiant ");
                scanf("%d",&e.age);
                e.som=0;
               
               for(i=1;i<=3;i++){
                                 printf("donner la note\n");
                                scanf("%f",&e.note[i]);
               
                                 e.som=e.som+e.note[i];}
                                 e.moy=e.som/3;
                                  

                printf(" le nom:%s \n l'age de l'etudiant:%d\n le numero:%d\n\n",e.nom,e.age,e.num);
                printf(" la moyenne= %2.2f\n\n",e.moy);
                
                fwrite(&e,sizeof(etudiant),1,x);
                                 
                
                fclose(x);
               
                
                fread(&e,sizeof(etudiant),1,x);
                
                
                
                printf("le numero %d ",e.num);
                printf(" le nom %s ",e.nom);
                printf(" l'age de l'etudiant %d \n",e.age);
                for(i=1;i<=3;i++){
                                 printf(" la note: %2.2f\n",e.note[i]);}
                                 printf(" la moyenne= %2.2f\n",e.moy);
                                 j=1;
                                 int a;
                                 int cp;
                                 printf("ajouter un etudiant tape 1\n",a);
                                 printf("affiche les resultat des etudiants tape 2\n\n",a);
                                 scanf("%d",&a);
                                
                cp=1;
                while(a==1){
                
                           printf("donner le numero ");
                scanf("%d",&e.num);
                printf("donner le nom ");
                scanf("%s",e.nom);
         
                
               printf("donner l'age de l'etudiant ");
               scanf("%d",&e.age);
               e.som=0;
               for(i=1;i<=3;i++){
                                 printf("donner la note\n");
                                 scanf("%f",&e.note[i]);
                                 e.som=e.som+e.note[i];}
                                 e.moy=e.som/3;

                printf(" le nom:%s \n l'age de l'etudiant:%d\n le numero:%d\n\n",e.nom,e.age,e.num);
                printf(" la moyenne= %2.2f\n\n",e.moy);
                
                fwrite(&e,sizeof(etudiant),1,x);
                                 
                
                fclose(x);
               cp=cp+1;
               j=j+1;
                printf("ajouter un etudiant tapé 1\n",a);
                                 printf("affiche les resultat des etudiants tape 2\n\n",a);
                                 scanf("%d",&a);
                
                 
                }
                if(a==2){
                     for(j=1;j<=cp;j++){
                  fread(&e,sizeof(etudiant),j,x);
                
                
                
                printf("le numero %d \n",e.num);
                printf("le nom %s \n",e.nom);
                printf("l'age de l'etudiant %d \n",e.age);
                for(i=1;i<=3;i++){
                                 printf(" la note %2.2f\n",e.note[i]);}
                                 printf("  la moyenne= %2.2f\n\n\n",e.moy);}}
                
                
                
                
                
                
                getch();
                }
