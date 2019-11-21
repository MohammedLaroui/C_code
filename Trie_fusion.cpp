#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int complexite=0;
void Fusionner(int * A, int p, int q, int r)
{
     complexite=complexite+1;
  int i, j, k;
  int C[r+1];


  i = p;
  j = q+1;
  k = 1;

  while ((i <= q) && (j <= r))
    {
      if (A[i] < A[j])
	{ 
	  C[k] = A[i];
	  i = i+1;
	}
      else
	{
	  C[k] = A[j];
	  j = j+1;
	}
      k = k + 1;
    }

  while (i <= q)
    {
      C[k] = A[i];
      i = i+1;
      k = k + 1;
    }

  while (j <= r) 
    {
      C[k] = A[j];
      j = j+1;
      k = k + 1;
    }

  for(k = 1; k <=r-p+1; k++) A[p+k-1] = C[k];

  
}


void TriFusion(int * A, int p, int r)
{
  int q;

  if (p < r)
    {
      q = (p+r)/2;
      TriFusion(A, p, q);
      TriFusion(A, q+1, r);
      Fusionner(A, p, q, r);
    }
}


int main(){
    
      
      int *A; 
      int i,j,n;
       
     //A=TriFusion(A,1,5);
    // for(j=1;j<=5;j++){printf("%d\n",A[j]);}
    printf("           Tri Fusion\n\n");
     printf("donner la dimension de tableau ",n);
     scanf("%d",&n);
     A=(int*)malloc(n*sizeof(int));
     for(j=1;j<=n;j++){printf("donner la valeur de A[%d]= ",j,A[j]);scanf("%d",&A[j]);}
     TriFusion(A,1,n);
     printf("Tableau Finale Trier :\n");
     for(j=1;j<=n;j++){printf("A[%d]=%d\n",j,A[j]);}
     printf("Complexite  = %d",complexite);
     getch();}
