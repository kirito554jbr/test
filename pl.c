#include<stdio.h>
#include<stdlib.h>

int main(){
   int sells=0;
   int price=0;
   int CA=0;
   int A;

    printf("enter the number of sells:");
    scanf("%d",&sells);

    printf("enter the price:");
    scanf("%d",&price);

       CA = sells*price;
      printf("%d\n",CA);
      

if(CA > 50){
        printf("you won ");
        printf("%d;\n",A =CA-50);
 } else if(CA < 50)
    {
        printf(" you lost ");
        printf("%d;\n",A = 50-CA);
    }  else if(CA == 50)
    { 
  
         printf("neither ");
  
}


    return 0;

}

