#include<conio.h>
#include<stdio.h>
#include<math.h>

main(){
       int n;
      int existe;
        
      
       printf("la dimension= ");
       scanf("%d",&n);
       
       int i,j;
       int t[10][10];
       int t1[10][10];
       int t2[10][10];
 
        
                         for(i=1;i<=n;i++){
                         for(j=1;j<=n;j++){
                                               printf("donner t[%d][%d]=",i,j);
                                               scanf("%d",&t[i][j]);}}
      int cp,cn,k,p;
                             
       k=1;
       for(i=1;i<=n;i++){
       for(j=1;j<=n;j++){t1[i][j]=0;t2[i][j]=t[i][j];}}
       existe=0;
 
                           cp=1;p=n;
                          
                               while((existe==0)&&(cp<n)){
                                                    
                               for(i=1;i<=n;i++){
                               for(j=1;j<=n;j++){
                               for(k=1;k<=n;k++){
                                                 
                                     t1[i][j]=t1[i][j]+((t2[i][k])*(t[k][j]));}}}
                                     cp=cp+1;
                                     p=p-1;
                                     k=1;
                               for(cn=1;cn<=n;cn++){if(t1[k][k]!=0){k=k+1;existe=1;}else{k=k+1;}}
                                    
                                    
                                    if(existe==0){for(i=1;i<=n;i++){
                                         for(j=1;j<=n;j++){t2[i][j]=t1[i][j];
                                                           t1[i][j]=0;}}}}
                          if(existe==1){printf("existe un circuit de longeur %d dans ce graphe",cp);}
                          if(existe==0){printf("n'existe pas un circuit dans ce graphe");}
            


                                            
                         



                                  
                                          

                                                          
                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                    getch();}               
