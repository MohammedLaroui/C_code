#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
     int t[5],j[4],s[3],l[2],p[1],i;
    int a;
  
printf("             &&&&&&&&&&&& BIENVENUS AU JEUX DE PYRAMIDE &&&&&&&&&&&&&\n\n");                     
printf("Jeu pyramide contient un ensemble des cases dans l'ordre croissant du haut vers\n le bas de sorte que la somme des nombres dans les cases adjacents egal\n au nombre dans la case ci-dessus eux.\n\n\n\n ");                    
printf("             !!!!!!!!!!!!!!!!!!!!la loi du jeu!!!!!!!!!!!!!!!!!!!!\n\n");
printf("  vous avez 3 possibilites pour le jeu ,si toutes les valeurs est incorrect\n dans les  possibilites alors  le jeu est finie.\n\n\n\n");   
printf("                  00\n",p[1]);   
printf("                00  00\n",l[1],l[2]);
printf("              00  00  00\n",s[1],s[2],s[3]);
printf("            00  00  00  00\n",j[1],j[2],j[3],j[4]);
printf("          00  00  00  00  00\n\n\n\n\n",t[1],t[2],t[3],t[4],t[5]);

printf("donner la valeur de la sommet de pyramide:  ",p[1]);
scanf("%d",&p[1]);
printf(" donner des valeurs des parties pour le 3eme rang de la pyramide:\n",s[1],s[3]);
scanf("%d""%d",&s[1],&s[3]);
printf(" donner des valeurs des parties pour le 5eme rang de la pyramide:\n",t[1],t[3],t[5]);
scanf("%d""%d""%d",&t[1],&t[3],&t[5]);

printf("votre valeurs est classer dans le pyramide\n\n\n");
         
printf("                 |%d|\n",p[1]);    
printf("             |00|    |00|\n",l[1],l[2]);
printf("         |%d|    |00|    |%d|\n",s[1],s[3]);
printf("     |00|    |00|    |00|    |00|\n",j[1],j[2],j[3],j[4]);
printf(" |%d|    |00|    |%d|    |00|    |%d|\n\n\n",t[1],t[3],t[5]);



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
printf("                             ***felicitation***\n");
printf("  *$*$*$ Toutes les valeurs que vous avez inscrits disposes en pyramide $*$*$*\n\n\n");           

printf("                 |%d|\n",p[1]);   
printf("             |%d|    |%d|\n",l[1],l[2]);
printf("         |%d|    |%d|    |%d|\n",s[1],s[2],s[3]);
printf("     |%d|    |%d|    |%d|    |%d|\n",j[1],j[2],j[3],j[4]);
printf(" |%d|    |%d|    |%d|    |%d|    |%d|\n\n\n",t[1],t[2],t[3],t[4],t[5]);








printf("les position sont : %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",t[1],t[2],t[3],t[4],t[5],j[1],j[2],j[3],j[4],s[1],s[2],s[3],l[1],l[2],p[1]);   
scanf("%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d",&t[1],&t[2],&t[3],&t[4],&t[5],&j[1],&j[2],&j[3],&j[4],&s[1],&s[2],&s[3],&l[1],&l[2],&p[1]);}
else{printf("Desole toutes les valeurs que vous avez inscrits dans le programme est incorrect.\n\n\n");}
printf(" 1+ENTREE ----> RESSEYER\n A+ENTREE+A---> ANNULER\n\n\n",a );
scanf("%d",&a);



if(a==1){
printf("               00\n",p[1]);   
printf("             00  00\n",l[1],l[2]);
printf("           00  00  00\n",s[1],s[2],s[3]);
printf("         00  00  00  00\n",j[1],j[2],j[3],j[4]);
printf("       00  00  00  00  00\n",t[1],t[2],t[3],t[4],t[5]);

printf("donner la valeur de la sommet de pyramide:  ",p[1]);
scanf("%d",&p[1]);
printf(" donner des valeurs des parties pour le 3eme rang de la pyramide:\n",s[1],s[3]);
scanf("%d""%d",&s[1],&s[3]);
printf("donner des valeurs des parties pour le 5eme rang de la pyramide:\n",t[1],t[3],t[5]);
scanf("%d""%d""%d",&t[1],&t[3],&t[5]);

         

printf("votre valeurs est classer dans le pyramide\n\n\n");
         
printf("            %d\n",p[1]);    
printf("         00    00\n",l[1],l[2]);
printf("      %d    00    %d\n",s[1],s[3]);
printf("    00   00    00   00\n",j[1],j[2],j[3],j[4]);
printf("  %d   00   %d    00   %d\n\n\n",t[1],t[3],t[5]);



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
printf("                             ***felicitation***\n");
printf("  *$*$*$ Toutes les valeurs que vous avez inscrits disposes en pyramide*$*$*$*\n\n\n");           

printf("             %d\n",p[1]);   
printf("          %d    %d\n",l[1],l[2]);
printf("       %d    %d    %d\n",s[1],s[2],s[3]);
printf("    %d    %d    %d    %d\n",j[1],j[2],j[3],j[4]);
printf("  %d    %d     %d    %d    %d\n\n\n",t[1],t[2],t[3],t[4],t[5]);








printf("les position sont : %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",t[1],t[2],t[3],t[4],t[5],j[1],j[2],j[3],j[4],s[1],s[2],s[3],l[1],l[2],p[1]);   
scanf("%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d",&t[1],&t[2],&t[3],&t[4],&t[5],&j[1],&j[2],&j[3],&j[4],&s[1],&s[2],&s[3],&l[1],&l[2],&p[1]);}
else{printf("Desole toutes les valeurs que vous avez inscrits dans le programme est incorrect.\n\n\n");}}
printf(" 1+ENTREE ----> RESSEYER\n A+ENTREE+A---> ANNULER\n\n\n",a );
scanf("%d",&a);

if(a==1){
printf("               00\n",p[1]);   
printf("             00  00\n",l[1],l[2]);
printf("           00  00  00\n",s[1],s[2],s[3]);
printf("         00  00  00  00\n",j[1],j[2],j[3],j[4]);
printf("       00  00  00  00  00\n",t[1],t[2],t[3],t[4],t[5]);

printf("donner la valeur de la sommet de pyramide:  ",p[1]);
scanf("%d",&p[1]);
printf("donner des valeurs des parties pour le 3eme rang de la pyramide:\n",s[1],s[3]);
scanf("%d""%d",&s[1],&s[3]);
printf("donner des valeurs des parties pour le 5eme rang de la pyramide:\n",t[1],t[3],t[5]);
scanf("%d""%d""%d",&t[1],&t[3],&t[5]);

         

printf("votre valeurs est classer dans le pyramide\n\n\n");
         
printf("             %d\n",p[1]);    
printf("          00    00\n",l[1],l[2]);
printf("       %d    00    %d\n",s[1],s[3]);
printf("     00    00    00    00\n",j[1],j[2],j[3],j[4]);
printf("  %d    00    %d     00    %d\n\n\n",t[1],t[3],t[5]);



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
printf("                             ***felicitation***\n");
printf("  *$*$*$ Toutes les valeurs que vous avez inscrits disposes en pyramide*$*$*$*\n\n\n");           

printf("             %d\n",p[1]);   
printf("          %d    %d\n",l[1],l[2]);
printf("       %d    %d    %d\n",s[1],s[2],s[3]);
printf("    %d    %d    %d     %d\n",j[1],j[2],j[3],j[4]);
printf(" %d     %d     %d     %d     %d\n\n\n",t[1],t[2],t[3],t[4],t[5]);








printf("les position sont : %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",t[1],t[2],t[3],t[4],t[5],j[1],j[2],j[3],j[4],s[1],s[2],s[3],l[1],l[2],p[1]);   
scanf("%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d""%d",&t[1],&t[2],&t[3],&t[4],&t[5],&j[1],&j[2],&j[3],&j[4],&s[1],&s[2],&s[3],&l[1],&l[2],&p[1]);}
else{printf("Desole toutes les valeurs que vous avez inscrits dans le programme est incorrect\n\n\n\n\n\n\n\n");
      printf(" $$$$$$$$$$ FIN DU JEUX CAR TOUTE LES 3 POSSIBILITE N'EST PAS JUSTE $$$$$$$$$$");}}
  
     scanf("%d",&p[1]);
scanf("%d""%d",&s[1],&s[3]);       
scanf("%d""%d""%d",&t[1],&t[3],&t[5]);

getch();
}
