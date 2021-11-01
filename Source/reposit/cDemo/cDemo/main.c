#include <stdlib.h>
#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
	int nums1[4] = { 11, 2, 7, 15 };
	int numsSize1= 4;
	int target1 = 9;
    int returnSize1;
	int* corners1 = NULL;
	corners1 = twoSum(nums1, numsSize1, target1, &returnSize1);
    printf("%d, %d", corners1[0], corners1[1]);
    system("pause");
	return 0;
}

