#include<conio.h>
#include<stdio.h>
main()
{
      int a,b,cp,s,k;
      
      printf("donner la valeur de a est b:\n");
      scanf("%d\n%d",&a,&b);
      if(b!=0){
     
    { s=a;
     cp=0;
     k=0;
      while(s>=b){s=s-b;
      cp=cp+1;}
     k=a-cp*b;
      printf("%d/%d=%d\n",a,b,cp);
      printf("le rest est:%d ",k);}
      
if((a<0)&&(b<0)){a=a*-1;
b=b*-1;
   
     s=a;
     cp=0;
     k=0;
      while(s>=b){s=s-b;
      cp=cp+1;}
     k=a-cp*b;
      printf("-%d/-%d=%d\n",a,b,cp);
      printf("le rest est:%d ",k);}
      
     

      
      }
      
      
      
      
      
      
      
      
      getch();
      }
