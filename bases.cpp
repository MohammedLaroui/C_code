#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
       
   int a,x,c,k,e,l,b,y,z;
       
       
       printf("bienvenue dans le programme de systeme numeration\n\n");
       printf("choisi la base\n1-la base binaire\n2-la base octet\n",z);
       scanf("%d",&z);      
       if(z==1){
   x=2;
   k=0;  
       
        printf("DONNER LE NUMERO ");
        scanf("%d",&a);
        if(a<=2){printf("erreur:Doit etre un nombre que vous avez donne  plus grande  completement que la base  vous avez choisi.");}
        else{
      int i;
       int t[i];  
       i=1;
       while(a/2!=0){
      t[i]=(a % 2);
      a=a/2;
      i=i+1;
      k=k+1;
}     
if (a/2==0){c=(a% 2);
printf("%d",c);}

for(i=k;i>=1;i--){printf("%d",t[i]);
}}}

if(z==2){
         y=0;         
             
        printf("DONNER LE NUMERO ",e);
        scanf("%d",&e);
        
       int j;
       int f[j];  
       j=1;
            
      while(e/8!=0){
      f[j]=(e % 8);
      e=e/8;
      j=j+1;
      y=y+1;
      
if (e/8==0){l=(e% 8);
printf("%d",l);}

for(j=y;j>=1;j--){printf("%d",f[j]);
}
}}
          
getch();
}
