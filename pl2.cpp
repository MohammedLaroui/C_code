#include<conio.h>
#include<stdio.h>
#include<math.h>
float t[100][100];
int t1[100][1];
main(){
       int m,n,k,p,c,w=0,q;
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
      
      
   for(i=1;i<=(n-1);i++){if(t1[i][1]==1){m=m+1;t[i][m]=1;for(c=1;c<=n;c++){if(t[c][m]!= 1){t[c][m]=0;}}}
                         if(t1[i][1]==2){m=m+1;t[i][m]=-1;for(c=1;c<=n;c++){if(t[c][m]!= -1){t[c][m]=0;}}}}
      m=m+1;
      for(i=1;i<=n;i++){
           t[i][m]=-5;}
      
      
   

      //chargement de la matrice//
      
      
       for(i=1;i<=n;i++){
           for(j=1;j<=m;j++){if(t[i][j]==-5){
                printf("donner la valeur de t[%d][%d]= ",i,j,t[i][j]);scanf("%f",&t[i][j]);}}if(t[i][j]!=-5){}}   
      
      //critère//
      int cn=0;
      
           for(j=1;j<=m-1;j++){if(t[n][j]>0){cn=cn+1;for(i=1;i<=n-1;i++){if(t[i][j]<0){w=w+1;}}
                             if(w==(n-1)){printf("\n*** solution non borne ***");j=m;cn=0;}
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
       float min=0;
       for(i=1;i<=n-1;i++){
                          if((t[i][k])>0){min=(t[i][m]/t[i][k]);p=i;i=n;}}
                          
       for(i=p;i<=n-1;-i++){if(t[i][m]/t[i][k]<min){min=t[i][m]/t[i][k];p=i;}}
                                              
       
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
                             if(w==(n-1)){printf("\n*** solution non borne ***");j=m;cn=0;}
                             if(w!=n-1){w=0;}}}
           }
          
              //test//
              if(w!=n-1){
              for(i=1;i<=n;i++){printf("\n");
               for(j=1;j<=m;j++){  printf("  |%2.2f| ",t[i][j]);}}
                 
                printf("\n\nLA VALEUR OPTIMAL DE Z C'EST: MAX(Z)=%4.2f",t[n][m]);} 
                
          
                
                
                
                getch();}       
