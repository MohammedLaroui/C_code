#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
      int f,s,i,j,a;
      
      printf("donner la valeur de a: ");
      scanf("%d",&a);
     s=0;
       i=1;
     
      for (i=1;i<=a;i++){
      f=1;
      
      for(j=1;j<=i;j++){f=f*j;}
      s=s+f;}
      printf("le factoriele de %d est %d\n",a,f);
      printf("la somme de factoriele de %d est %d",a,s);
      
      
      
      
      
      getch();
      }
      
      
      
