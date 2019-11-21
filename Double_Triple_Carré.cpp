#include<conio.h>
#include<stdio.h>
#include<math.h>

main()
{
      int a,b,c;
      printf("programme calculer le double,le triple,le carre d'un nombre entier\n");
      printf("donner la valeur de a: ");
      scanf("%d",&a);
      printf("choisi le choix:\n1-le double\n2-le triple\n3-le carre\n");
      scanf("%d",&b);
      
      if(b==1){c=a*2,printf("le double de %d est: %d",a,c);}
      if(b==2){c=a*3,printf("le triple de %d est: %d",a,c);}
      if(b==3){c=a*a,printf("le carre de %d est: %d",a,c);}
      if(b>3){
           printf("choix inexistant.");}














getch();
}
