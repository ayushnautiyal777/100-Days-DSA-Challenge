#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int slow = 0;
    for (int fast = 1; fast < numsSize; fast++) {
        if (nums[fast] != nums[slow]) {
            slow++;
            nums[slow] = nums[fast];
        }
    }
    return slow + 1;
}
int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int newLength = removeDuplicates(nums, size);
    printf("New array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nNew length: %d\n", newLength);
    return 0;
}
