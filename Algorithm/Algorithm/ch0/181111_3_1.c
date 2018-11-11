//
//  181111_3_1.c
//  Algorithm
//
//  Created by jinzzam on 11/11/2018.
//  Copyright © 2018 jinzzam. All rights reserved.
//

#include <stdio.h>

void right_rotate(int arr[], int start, int end){
    int last;
    last = arr[end];
    for(int i=end; i>=start; i--){
        arr[i] = arr[i-1];
    }
    arr[start] = last;
}

void left_rotate(int arr[], int start, int end){
    int first;
    first = arr[start];
    for(int i=start; i<end; i++){
        arr[i] = arr[i+1];
    }
    arr[end] = first;
}

int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    right_rotate(arr, 2, 6);
    for(int i=0; i<8; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    left_rotate(arr, 2, 6);
    for(int i=0; i<8; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
