#include<conio.h>
#include<stdio.h> 
#include<math.h>

main()
{
int a,b,i,s;
printf("donner la valeur de a: ");
scanf("%d",&a);
printf("donner la valeur de b: ");
scanf("%d",&b);

if(b>0){s=0;
i=1;
while(i<=b){s=s+a;i++;}
printf("%d*%d=%d",a,b,s);}

else{b=b*-1;
s=0;
i=1;
while(i<=b){s=s+a;i++;}
printf("%d*%d=-%d",a,b,s);}






getch();
}
