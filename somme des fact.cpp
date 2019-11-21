#include<conio.h>
#include<stdio.h>
#include<math.h>

main()
{
      int a,i,f,s;
      i=1;
      f=1;
      s=0;
      
      printf("donner la valeur de a ");
      scanf("%d",&a);
      
      while(i<=a){
                  f=f*i;
                  i=i+1;
                  s=s+f;
                  }
                  printf("le factoriele est : %d\n",f);
                  printf("la somme des factorielle est : %d",s);
                  
                  
                  
                  getch();
}
