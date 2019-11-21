#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
  FILE*x;
typedef struct etudiant{char nom[20];
                        char prenom[20];
                        float note1;float note2;float moyenne;}etudiant;
                       etudiant E1;
                     
 main(){
         x=fopen("tp.dat","a+");
                 
            
printf("donner le nom de l'etudiant : ");
 scanf("%s",&E1.nom);
 printf ("donner le prenom de l'etudiant : ");
                                  scanf("%s",&E1.prenom);
                         printf("donner la note1 de l'etudiant : ");
 scanf("%f",&E1.note1);
 printf("donner la note2 de l'etudiant : ");
 scanf("%f",&E1.note2); 
   

            
 E1.moyenne=(E1.note1+E1.note2)/2;

 printf(" la moyenne est %f\n ",E1.moyenne );
                    
                   fwrite(&E1,sizeof(etudiant),1,x);
           fclose(x);             
            
 
 x=fopen("tp.dat","r");
 fread(&E1,sizeof(etudiant),1,x);
while(!feof(x))
{ 

                           
 printf(" le nom     de l'etudiant : %s\n",E1.nom);
 printf(" le prenom  de l'etudiant : %s\n ",E1.prenom);                           
 printf(" la note1   de l'etudiant : %f\n ",E1.note1);
 printf(" la note2   de l'etudiant : %f\n ",E1.note2);
 printf(" la moyenne de l'etudiant : %f\n ",E1.moyenne );
 fread(&E1,sizeof(etudiant),1,x);
} 
            fclose(x);               
                 
                 
                 
                 
          getch();}                           
