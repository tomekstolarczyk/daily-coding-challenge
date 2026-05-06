
#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    
    if(target == )
    int mid = nums[numsSize/2];
    int left = nums[0];
    int right = nums[numsSize-1];

    if (left > mid) 
    {

    }

    if(right > mid) {}
}

int main(void)
{
    int nums1[] = {4,5,6,7,0,1,2};
    int numssize1 = sizeof(nums1)/sizeof(int);

    int target11 = 0;
    int res11 = search(nums1,numssize1, target11);
    printf("case 1 : ex = 4 : result = %d\n", res11);

    int target12 = 3;
    int res12 = search(nums1,numssize1, target12);
    printf("case 2 : ex = -1 : result = %d\n", res12);

    int nums2[] = {1};
    int numssize2 = sizeof(nums2)/sizeof(int);

    int target21 = 0;
    int res21 = search(nums2,numssize2, target21);
    printf("case 3 : ex = -1 : result = %d\n", res21);

    int nums3[] = {6, 7, 0, 1, 2, 4, 5};
    int numssize3 = sizeof(nums3)/sizeof(int);

    int target31 = 0;
    int res31 = search(nums2,numssize2, target31);
    printf("case 3 : ex = -1 : result = %d\n", res31);
    

}