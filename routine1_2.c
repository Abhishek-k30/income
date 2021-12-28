#include<stdio.h>

int main(){
     printf("NUMBER CODE FOR DAYS\n");
     printf("  MONDAY   =1\n");
     printf("  TUESDAY  =2\n");
     printf("  WEDNESDAY=3\n");
     printf("  THRUSDAY =4\n");
     printf("  FRIDAY   =5\n");
 printf("ENTER TODAY`S DAY CODE\n ");

 int a;

 scanf("%d", &a);
 if(a==1){
    printf("TODAYS ROUTINE\n");
    printf("       9-10AM    --- \n");
    printf("       10-11AM   Basic Electrical Engg. (J. Das)\n");
    printf("       11-12AM   Basic Electrical Engg. (J. Das)\n");
    printf("       12-1PM    Basic Electrical Engg. (J. Das)\n");
    printf("       1-2PM     BRREKKK                        \n");
    printf("       2-3PM     CHEMISTRY                      \n");
    printf("       3-4PM     CHEMISTRY LAB                  \n");
    printf("       4-5PM     CHEMISTRY LAB                  \n");

 }
else if(a==2){
    printf("TODAYS ROUTINE\n");
    printf("       9-10AM    ---\n");
    printf("       10-11AM   Basic Electrical Engg. (J. Das)\n");
    printf("       11-12AM   Basic Electrical Engg. Lab (S. Sharma,P. Majumder)\n");
    printf("       12-1PM    Basic Electrical Engg. Lab (S. Sharma,P. Majumder)\n");
    printf("       1-2PM     BRREKKK                                           \n");
    printf("       2-3PM     LIBRARY VISIT                                     \n");
    printf("       3-4PM     LIBRARY VISIT                                     \n");
    printf("       4-5PM     LIBRARY VISIT                                     \n");

}
else if(a==3){
   printf("TODAYS ROUTINE\n");
   printf("        9-10AM    PHYSICS (SKP)\n");
   printf("        10-11AM   WOPK SHOP PRACTICE (JDB)\n");
   printf("        11-12AM   WOPK SHOP PRACTICE (JDB)\n");
   printf("        12-1PM    E. MECHANICS(RKBM)      \n");
   printf("        1-2PM     BRREKKK                 \n");
   printf("        2-3PM     ENG(JT)                 \n");
   printf("        3-4PM     ENG(JT)                 \n");
   printf("        4-5PM     PHYSICS (TKD)           \n");


}
else if(a==4){
   printf("        TODAYS ROUTINE                    \n");
   printf("        9-10AM    CHEMISTRY               \n");
   printf("        10-11AM   Engg Math. 1            \n");
   printf("        11-12AM   Engg Math. 1            \n");
   printf("        12-1PM    E. MECHANICS(RKBM)      \n");
   printf("        1-2PM     BRREKKK                 \n");
   printf("        2-3PM     CHEMISTRY               \n");
   printf("        3-4PM     ENG(JT)                 \n");
   printf("        4-5PM     ---                     \n");

}
else if(a==5){
     printf("        TODAYS ROUTINE                  \n");
   printf("        9-10AM    PHYSICS (SPM)           \n");
   printf("        10-11AM   Engg Math. 1            \n");
   printf("        11-12AM   E.MECHANICS (RKBM)      \n");
   printf("        12-1PM    E. MECHANICS(RKBM)      \n");
   printf("        1-2PM     BRREKKK                 \n");
   printf("        2-3PM     Phy Edu & Sports/NSS/NCC)\n");
   printf("        3-4PM     Phy Edu & Sports/NSS/NCC)\n");
   printf("        4-5PM     ---                       \n");
}
return 0;
}



