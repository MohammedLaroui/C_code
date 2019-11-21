#include<conio.h>
#include<stdio.h>
main()
{
int t[5];
int cp,cn,c,i,a;



printf("donner la taille de tableau: ",a);
scanf("%d",&a);
cp=0;
cn=0;
c=0;

for(i=0;i<a;i++){
                 printf("donner la valeur: ",t[i]);
                 scanf("%d",&t[i]);
                

if(t[i]>0){cp=cp+1;}
if(t[i]<0){cn=cn+1;}
if(t[i]==0){c=c+1;}}
printf("le nombre de valeur \npositif:%d\nnegative:%d\nnul:%d\n",cp,cn,c);



























getch();
}
