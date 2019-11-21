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
 

        
                         for(i=1;i<=n;i++){
                         for(j=1;j<=n;j++){
                                               printf("donner t[%d][%d]=",i,j);
                                               scanf("%d",&t[i][j]);}}
int cp,k;
int g;
int m[10];

 for(g=1;g<=n;g++){m[g]=0;}                                           
 int s[10];
 
cp=1;                             
k=1;
            


                                          
                         


while(k<=n){
                             existe=1;
        for(g=1;g<=n;g++){s[g]=0;}

        g=1;
        for(j=1;j<=n;j++){
                          for(i=1;i<=n;i++){s[g]=s[g]+t[i][j];}if((s[g]==0)&&(m[g]==0)){existe=0;}g=g+1;}
                          
                      
       for(g=1;g<=n;g++){
                          if((s[g]==0)&&(m[g]==0)){
                                                 
                                                 
                                                 m[g]=cp;
                                                 printf("m[%d]=%d\n",g,m[g]);
                                                 
                                                 k=k+1;
                                                 
                                      for(i=g;i<=g;i++){
                                      for(j=1;j<=n;j++){t[i][j]=0;}}}
                              
                                    
                                      
                                
                               if((existe==1)){k=k+1;}}
                                                     
                                                                           
  
                               if(existe==0){cp=cp+1;}}
                                    
                               if(existe==1){printf("existe un circuit dans le niveau %d",cp);}   
                                      
  
                                  
                                          

                                                          
                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                   
                                                    getch();}               
