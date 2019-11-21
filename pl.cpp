#include<conio.h>
#include<stdio.h>
#include<math.h>
float t[100][100];
int t1[100][1];
float t2[100];
int t3[100];
float t4[100];
main(){
       float grand,d=0,r=0;
       int m,n,k,p,c,w=0,q,y=0,u=0,a=0;
       int i,j;
     
       
       
       //la dimension de la matrice//
       printf("donner le nombre de ligne: ",n);
       scanf("%d",&n);
       printf("donner le nombre de colonne: ",m);
       scanf("%d",&m);
      
      printf("choisir pour les inequations:\n <= taper 1\n >= taper 2 \n =  taper 3 \n");
      for(i=1;i<=(n-1);i++){printf("donner la condition pour inequation %d : ",i,t1[i][1]);
      scanf("%d",&t1[i][1]);}
      
      m=m-1;
      for(i=1;i<=n;i++){
      for(j=1;j<=m;j++){                 
           t[i][j]=-5;}}
      
      
   for(i=1;i<=(n-1);i++){if(t1[i][1]==1){m=m+1;t3[i]=m;t[i][m]=1;for(c=1;c<=n;c++){if(t[c][m]!= 1){t[c][m]=0;printf("t[%d][%d]=%1.0f",c,m,t[c][m]);}}}
                         if(t1[i][1]==2){m=m+1;t[i][m]=-1;y=y+1;t2[i]=i;for(c=1;c<=n;c++){if(t[c][m]!= -1){t[c][m]=0;printf("t[%d][%d]=%1.0f",c,m,t[c][m]);}}
                                     m=m+1;t3[i]=m;t[i][m]=1;for(c=1;c<=n;c++){if(t[c][m]!= 1){if(c==n){t[c][m]=-2;printf("t[%d][%d]=%1.0f",c,m,t[c][m]);}if(c<n){t[c][m]=0;printf("t[%d][%d]=%1.0f",c,m,t[c][m]);}}}}
                                                                                    
                         if(t1[i][1]==3){m=m+1;t3[i]=m;t[i][m]=1;y=y+1;t2[i]=i;for(c=1;c<=n;c++){if(t[c][m]!= 1){if(c==n){t[c][m]=-2;printf("t[%d][%d]=%1.0f",c,m,t[c][m]);}if(c<n){t[c][m]=0;printf("t[%d][%d]=%1.0f",c,m,t[c][m]);}}}}}
                         
                        
      m=m+1;
      for(i=1;i<=n;i++){
           t[i][m]=-5;}
      
      
      for(i=1;i<=n;i++){
           for(j=1;j<=m;j++){
                printf("t[%d][%d]=%1.0f\n",i,j,t[i][j]);}}
       
      
      
      
      //chargement de la matrice//
      
      
       for(i=1;i<=n;i++){
           for(j=1;j<=m;j++){if(t[i][j]==-5){
                printf("donner la valeur de t[%d][%d]= ",i,j,t[i][j]);scanf("%f",&t[i][j]);}}if(t[i][j]!=-5){}}   
      if(y==0){}  
             
      if(y!=0){
               grand=t[n][1];
               for(j=1;j<=m;j++){if(t[n][j]>grand){grand=t[n][j];}}
               d=grand*10;
               for(i=1;i<n;i++){if(t2[i]!=0){t2[i]=-d;}}
               for(j=1;j<=m-1;j++){r=0;if(t[n][j]==-2){t[n][j]=0;printf("t[%d][%d]=%2.2f\n",n,j,t[n][j]);j++;}
               for(i=1;i<=n-1;i++){r=r+((t2[i])*(t[i][j]));}t[n][j]=t[n][j]-r;printf("t[%d][%d]=%2.2f\n",n,j,t[n][j]);}
               for(i=1;i<=n-1;i++){if(t2[i]!=0){t[n][m]=t[n][m]+t[i][m];}}t[n][m]=(t[n][m])*(-d);printf("t[%d][%d]f=%2.2f\n",n,m,t[n][m]);}
      
       
      for(i=1;i<=n;i++){printf("\n");
               for(j=1;j<=m;j++){  printf("  |%2.2f| ",t[i][j]);}}
      
      printf("\n\n\n");
      
      
      
      //critère//
      int cn=0;
      
           for(j=1;j<=m-1;j++){if(t[n][j]>0){cn=cn+1;for(i=1;i<=n-1;i++){if(t[i][j]<0){w=w+1;}}
                             if(w==(n-1)){printf("\n            ***solution non borne***   ");j=m;cn=0;}
                             if(w!=n-1){w=0;}}}
           
         
      
      if(cn==0){}
      
      while(cn!=0){
      
      
      
       //detection de max// 
      
       float max;
        max=t[n][1];
        k=1;          
        for(i=n;i<=n;i++){
           for(j=1;j<=m-1;j++){ if(t[i][j]> max){max=t[i][j];k=j;}}}  
             
       //detection de valeur sortant//  
      float x,min=0;int po=0,s=0;
     for(i=1;i<=n-1;i++){
                          if((t[i][m]/t[i][k])>0){min=(t[i][m]/t[i][k]);p=i;i=n;}}
                          
       for(i=p;i<=n-1;i++){if((t[i][m]/t[i][k]>0)&&(t[i][m]/t[i][k]<min)){min=(t[i][m]/t[i][k]);p=i;}}
       
      for(i=p;i<=n-1;i++){if((t[i][m]/t[i][k])== min){po=po+1;printf("po=%d\n",po);}}
                                      
      
                       
                       
     
      
                                  
      a=k;
              while(po>1){min=0;
                          po=0;
                          k=t3[s+1];
                          printf("k=%d\n",k);
                          
                          
              for(i=1;i<=(n-1);i++){if((t[i][k])>0){min=t[i][m]/t[i][k];p=i;i=n;}}
      for(i=p;i<=(n-1);i++){if((t[i][m]/t[i][k]>0)&&(t[i][m]/t[i][k]>min)){min=t[i][m]/t[i][k];p=i;}}
      for(i=p;i<=(n-1);i++){if(t[i][m]/t[i][k]==min){po=po+1;}}
               
                          
                          }
                         
      
      k=a;
      
      
      
      
      
      
      
      
      
      
      
      
        
        
        //changement des valeurs de la matrice//
        float h;
        int cp=0;
        for(i=1;i<=n;i++){
               for(j=1;j<=m;j++){h=(t[i][k]*t[p][j]);if((i==n)&&(j==m)){(t[i][j]=t[i][j]+(h/t[p][k]));cp=1;}
                                                     if((i!=p)&&(j!=k)&&(cp==0)){(t[i][j]=t[i][j]-(h/t[p][k]));}}}
                                
                                 
                                 
                                 
           //changement des valeur du pivot://
        //ligne://
         float f=t[p][k];
          
         for(j=1;j<=m;j++){t[p][j]=t[p][j]/f;}         
        //colonne://
        for(i=1;i<=n;i++){t[i][k]=0;t[p][k]=1;}    
        
             
                
                
                
                
             
            cn=0;
           
            for(j=1;j<=m-1;j++){if(t[n][j]>0){cn=cn+1;for(i=1;i<=n-1;i++){if(t[i][j]<0){w=w+1;}}
                             if(w==(n-1)){printf("\n           *** solution non borne***");j=m;cn=0;}
                             if(w!=n-1){w=0;}}}
                             printf("\n\n\n");
                             for(i=1;i<=n;i++){printf("\n");
               for(j=1;j<=m;j++){  printf("  |%2.2f| ",t[i][j]);}}
                           
                           
                                               }
                                               
              //test//
              

             
              
              if(w!=n-1){
                        
              for(i=1;i<=n;i++){printf("\n");
               for(j=1;j<=m;j++){  printf("  |%2.2f| ",t[i][j]);}}
               printf("\n\nLA VALEUR OPTIMAL DE Z C'EST: MAX(Z)=%4.2f",t[n][m]);
               for(j=1;j<=m;j++){if(t[n][j]==0){u=u+1;}}
               if(u=n-1){printf("\n          *** solution non unique ***");}
               
               
                }
                
          
                
                
                
                getch();}       
