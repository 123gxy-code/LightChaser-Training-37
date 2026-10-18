#include <stdio.h>
void swap(int *a,int *b){
    int i;
    i=*a;
    *a=*b;
    *b=i;
}

int main(){
    int a=1;
    int b=2;
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}