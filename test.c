#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[10];
    int len = 10;
    int target = 9;

    int *result = twoSum(nums, len, target, &len);

    return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
}