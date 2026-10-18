#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    float b;
    char ch;
    printf("请输入你需要的计算方式\n");
    scanf("%c",&ch);
    printf("请输入第一个数字\n");
    scanf("%f",&a);
    printf("请输入第二个数字\n");
    scanf("%f",&b);
    switch(ch){
        case '+':
        printf("a+b=%f\n,a+b");
        break;
         case '-':
        printf("a-b=%f\n,a-b");
        break;
         case '*':
        printf("a*b=%f\n,a*b");
        break;
         case '/':
         if(b==0){
            printf("除数不能为0");
         }else{
            printf("a/b=%f\n",a/b);
         }
        
        break;
    }
return 0;
}