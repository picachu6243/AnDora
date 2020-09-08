
#include<conio.h>
#include<stdio.h>
int main(){
    int n,i,so;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(i=0;n>=i;i++){
        so = n % 10;
        s =s+ so;
        n =n/ 10;
    }    
    s++;
    printf("%d",s);
}
