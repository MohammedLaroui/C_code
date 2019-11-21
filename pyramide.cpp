#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
     int t[5],j[4],s[3],l[2],p[1],i;
    
  
                      
                      
                      
printf("             0.0\n",p[1]);   
printf("          0.0   0.0\n",l[1],l[2]);
printf("       0.0   0.0   0.0\n",s[1],s[2],s[3]);
printf("    0.0   0.0   0.0   0.0\n",j[1],j[2],j[3],j[4]);
printf(" 0.0   0.0   0.0   0.0   0.0\n",t[1],t[2],t[3],t[4],t[5]);

printf("donner la tete de pyramide:  ",p[1]);
scanf("%d",&p[1]);
printf("donner les valeur de cotè de 3eme classe:\n",s[1],s[3]);
scanf("%d""%d",&s[1],&s[3]);
printf("donner les valeur de cotè de 5eme classe:\n",t[1],t[3],t[5]);
scanf("%d""%d""%d",&t[1],&t[3],&t[5]);

         
printf("             %d\n",p[1]);    
printf("         0.0   0.0\n",l[1],l[2]);
printf("        %d   0.0   %d\n",s[1],s[3]);
printf("    0.0  0.0   0.0  0.0\n",j[1],j[2],j[3],j[4]);
printf("  %d   0.0   %d   0.0   %d\n",t[1],t[3],t[5]);



 t[4]=(s[3]-t[3]-t[5])/2;
 t[2]=(s[1]-t[1]-t[3])/2;
 if((p[1]-s[1]-s[3])/2==t[3]*2+t[2]+t[4]){
                                          j[1]=t[1]+t[2];
                                          j[2]=t[2]+t[3];
                                          j[3]=t[3]+t[4];
                                          j[4]=t[4]+t[5];
                                          s[2]=j[2]+j[3];
                                          l[1]=s[1]+s[2];
                                          l[2]=s[2]+s[3];         
           



printf("les position sont : %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",t[1],t[2],t[3],t[4],t[5],j[1],j[2],j[3],j[4],s[1],s[2],s[3],l[1],l[2],p[1]);   
scanf("%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d",&t[1],&t[2],&t[3],&t[4],&t[5],&j[1],&j[2],&j[3],&j[4],&s[1],&s[2],&s[3],&l[1],&l[2],&p[1]);}
else{printf("pas");}

    scanf("%d",&p[1]);
scanf("%d""%d",&s[1],&s[3]);       
scanf("%d""%d""%d",&t[1],&t[3],&t[5]);
    


    
    
    
                                                                      
     
     









getch();
}
