#include<stdio.h>

int main (){
int in;
printf("ENTER YOUR INCOME \n");
scanf("%d", &in);

if(in<250000){
    printf("Total tax amount is to be paid is ZERO\n");
}
 else if (in>=250000 && in<500000){
    printf("Total tax to be paid is %d\n" ,in/100*5 );
}
  else if(in>=500000 && in<1000000) {
    printf("Total tax to be paid is %d\n" , in/100*20);
  }

    else{
        printf("Total tax to be paid is %d\n" , in/100*30);
    }

    return 0;

}
