#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *arr;
    double avg = 0;
    double sum = 0.0;

    printf("请输入数组元素个数");
    scanf("%d", &n);

    if(n<=0) return 1;

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL){
        printf("内存申请失败\n");
        return 1;
    }
    printf("请输入 %d 个整数：\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;

    printf("平均值 = %.2f\n", avg);
    free(arr);
    arr = NULL;

    return 0;
}