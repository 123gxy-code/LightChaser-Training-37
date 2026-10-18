#include <stdio.h>
int main(){
    int i;
    int sum=0;
    for (i=1;i<100;i++){
        if (i%2!=0)sum+=i;
    }
    printf("1到100的奇数和为%d\n",sum);
    return 0;
}