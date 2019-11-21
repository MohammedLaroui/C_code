#include<conio.h>
#include<stdio.h>
#include<math.h>

main()
{
      float a,b,c,s,moy;
      printf("programme calculer la moyenne de l'etudiant\n");
      printf("donner la valeur de a ");
      scanf("%f",&a);
      printf("donner la valeur de b ");
      scanf("%f",&b);
      printf("donner la valeur de c ");
      scanf("%f",&c);
      
      s=(a+b+c);
    
      moy=(s/3);
        printf("la somme des notes est %3.2f\n",s);
      printf("la moyenne de l'ètudiant est %2.4f",moy);
      
      
      
      getch();
      
      }
