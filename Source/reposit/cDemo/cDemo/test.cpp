#include <stdlib.h>
#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if ((*(nums + i) + *(nums + j)) == target) {
                int* corners = (int*)malloc(2 * sizeof(int));
                corners[0] = i;
                corners[1] = j;
                *returnSize = 2;
                return corners;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}