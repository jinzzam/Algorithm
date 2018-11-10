//
//  181111_2_2.c
//  Algorithm
//
//  Created by jinzzam on 11/11/2018.
//  Copyright © 2018 jinzzam. All rights reserved.
//

#include <stdio.h>

void swapArr(int arr[], int i, int j){
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(){
    int arr[5] = {0, 1, 2, 3, 4};
    swapArr(arr, 0, 4);
    for(int i=0; i<5; i++){
        printf("%d", arr[i]);
    }
    return 0;
}

