//
//  181111_1_2.c
//  Algorithm
//
//  Created by jinzzam on 11/11/2018.
//  Copyright © 2018 jinzzam. All rights reserved.
//

#include <stdio.h>
#define max(x, y) ((x)>(y)?(x):(y))

int main(){
    int arr[10] = {1, 5, 2, 8, 4, 9, 10, 23, 12, 2};
    
    printf("%d\n", max_arr(arr));
    printf("%d\n", use_macro(arr));
    printf("%d\n", use_recursion(arr, 10));
    return 0;
}

int max_arr(int arr[]){
    int maxp = arr[0];
    for(int i=1; i<10; i++){
        if(arr[i]>maxp)
            maxp = arr[i];
    }
    return maxp;
}

int use_macro(int arr[]){
    int maxp = arr[0];
    for(int i=1; i<10; i++){
        maxp = max(arr[i], maxp);
    }
    return maxp;
}

// 매크로와 리커젼을 함께 사용하면서 인자 배열이 단조 감소하는 수열이라면
// 굉장히 느려지는 방법
int use_recursion(int arr[], int arr_len){
    if(arr_len == 1)
        return arr[0];
    else
        return max(arr[arr_len - 1], use_recursion(arr, arr_len - 1));
}
