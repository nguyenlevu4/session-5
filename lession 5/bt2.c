#include <stdio.h>

int main(){
   int a;
   while(1){
       printf("nhap a: ");
       scanf("%d",&a);
       if(a==9){
       }else
       printf("sai roi,vui long nhap lai: ");
       scanf("%d",&a);
       break;
   }
   
   printf("ban da chon dung");
   
   return 0;
}