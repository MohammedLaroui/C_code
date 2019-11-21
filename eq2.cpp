#include<conio.h>
#include<stdio.h>
#include<math.h>




main()
{
 
float a,b,c,det,x,x1,x2,x3;
 
printf("donner la valeur de a");
scanf("%f",&a);
printf("donner la valeur de b");
scanf("%f",&b);
printf("donner la valeur de c");
scanf("%f",&c);
if((a==0)&&(b==0)){printf("pas de solution");}
else{
if(a==0){(x=(-c)/b) ;printf("%f",x);}

else{
     det=(b*b-4*a*c);
     printf("%1.1f",det);
     if(det==0){x1=(-b)/(2*a);printf("%f",x1);}
     if(det<0){printf("pas de solution");}
     if(det>0){x2=(-b-sqrt(det))/(2*a);x3=(-b+sqrt(det))/(2*a);printf("%1.1f",x2);printf("%1.1f",x3);}
     
}


}



                                              getch();
                                              
                                              }                                    
