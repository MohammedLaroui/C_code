#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define Max 2

//int **X;
//int **Y;
/*void Multiplier_ChaineMatrice(int **A,int **B,int **C,int **S,int i,int j){
    int **XX;
    int **YY;
    if(i<j){    XX=Multiplier_ChaineMatrice (**A,**B,**C,**S,i,**S[i][j]);
                YY=Multiplier_ChaineMatrice (**A,**B,**C,**S,(**S[i][j])+1,j);}
}*/
int **Multiplier_Matrice(int **X,int **Y){
           
           int a,b;
           int **C;
           C=(int**)malloc(Max*sizeof(int*));
         //  int C[2][2];
           for(int i=0;i<Max;i++){
                   for(int j=0;j<Max;j++){
                           C[i][j]=0;
                           for(int k=0;k<Max;k++){
                                   C[i][j]+=(X[i][k] * Y[k][j]);
                                              
                           }}}return C;}


main(){
       int A[2][2]={{1,5},{3,8}};
       int B[2][2]={{6,8},{1,0}};
       int C[2][2]={{9,7},{2,4}};
       
       long  M[100][100];  
       int S[100][100];
       long p[100];
       int i,j,k,l,t,q,com=0;
      
      printf("donner la dimension de p",t);
      scanf("%d",&t);
      for(i=0;i<t;i++){printf("\ndonner la  dimension de matrice = ",p[i]);scanf("%d",&p[i]);}
      t=t-1;
       for(i=1;i<=t;i++){M[i][i]=0;}
       for(l=2;l<=t;l++){
                         com=com+1;   
               for(i=1;i<=(t-l+1);i++){
                                                           
                 j=(i+l)-1;
               M[i][j]=922337203;
               com=com+1;
      
               for(k=i;k<=(j-1);k++){
                          com=com+1;   
                          q=(M[i][k] + M[k+1][j])+((p[i-1])*(p[k])*(p[j]));
                         
                       if(q < (M[i][j])){M[i][j]=q;S[i][j]=k;}
                       
                       
                       }}}

             for(i=1;i<=t;i++){for(j=i;j<=t;j++){printf("\nM[%d][%d]=%lu",i,j,M[i][j]);}}
             printf("\nLe Parenthesage optimale Cout= %lu",M[1][t]);
             printf("\n\n\n");
             for(i=1;i<=t;i++){for(j=i+1;j<=t;j++){printf("\nS[%d][%d]=%d",i,j,S[i][j]);}}
             printf("\nComplexite=%d",com);
             int **E;
            
           
             //int B1={{6,8},{1,0}};
             E= Multiplier_Matrice(A,B);
             
               for(i=0;i<2;i++){
                                printf("\n");
               for(l=0;l<2;l++){
                                printf("E[%d][%d]=%d",i,l,E[i][l]);
                                }}
                       


       getch();}
      /* 
       int[][] Multiplier_ChaineMatrice (int A[2][2],int B[2][2],int C[2][2],int S[100][100],int i,int j){
             
                XX[2][2]=Multiplier_ChaineMatrice (A,B,C,S,i,S[i][j]);
                YY[2][2]=Multiplier_ChaineMatrice (A,B,C,S,(S[i][j])+1,j);
                return Multiplier_Matrice(XX,YY);
             }
       
           return C;
           }*/
