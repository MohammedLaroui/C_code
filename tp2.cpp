#include<conio.h>
#include<stdio.h>
#include<math.h>

main()

{    
     
      int a,s,cp;
      

 
      
  printf("donner la taille de tableau ",a);
  scanf("%d",&a);
  int i;
  int t[a];
 
  for(i=1;i<=a;i++){printf("donner la valeur",t[i]);
  scanf("%d",&t[i]);}
  s=a/2;
  cp=0;
  for(i=1;i<=s;i++){
                    if(t[i]!=t[a-i+1]){cp=cp+1;}}
                    if(cp==0){
                   printf("le tableau est palaindromme");}
                   else
                   {printf("tab n'est pas palaindromme");}
                   
                    
      
                    
                            

                
                 getch();
                 
                 
                 
                 }
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
