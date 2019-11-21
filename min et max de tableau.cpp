#include<conio.h>
#include<stdio.h>
main()
{
int t[10];
int i,f,c,j,min;

min=t[0];
scanf("%d",&min);
for(i=0;i<10;i++){
                                    
                  printf("donner la valeur ",t[i]);
                  scanf("%d",&t[i]);
                  
                  
                  if(min>t[i]){min=t[i];}
                 
                  }
                   printf("le min de tableau est %d\n",min);
                 for(i=0;i<10;i++){
                                   for(j=1;j<=3;j++){                
                 c=t[i]+j;
                 f=t[i]-j;
                 
                 if((c==min)||(f==min)){t[i]=min;}}
                  
                  
                 
                 printf("%d\n",t[i]);}

                  
                  
                  
                  
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 getch();
}
