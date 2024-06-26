#ifndef FUNC_H
#define FUNC_H

#include <stdlib.h>

// 遞迴法
int FibRec(int n){
    return (n <= 1)? n : FibRec(n - 1) + FibRec(n - 2);
}

// 陣列法
int FibArr(int n){
    if(n <= 2){
        return 1;
    }
    
    // 輸入參數多大 就申請 "參數 + 1" 的陣列空間
    int *tmpArr = (int *)malloc(sizeof(int) * (n + 1));

    tmpArr[0] = 0; tmpArr[1] = 1;

    for(int i = 2; i <= n; i++){
        tmpArr[i] = tmpArr[i - 1] + tmpArr[i - 2];
    }

    int sum = tmpArr[n];
    free(tmpArr);

    return sum;
}

#endif