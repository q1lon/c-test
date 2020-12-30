/*
 * @Author: q1lon<q1lon.zhang@gmail.com>
 * @Date: 2020-11-24 11:09:00
 * @LastEditTime: 2020-12-30 09:39:01
 * @FilePath: /frist/binarySearch.c
 */
#include <stdio.h>
/* 函数声明 */
int binarySearch(int *nums[], int target);

int main()
{
    int arr[] = {0, 2, 3, 4, 6, 8, 9, 10};
    int n;
    // int right = sizeof(arr) / sizeof(*arr);
    // printf("%d\n",right);
    n = binarySearch(*arr, 2);

    // printf("%d\n", n);
    return 0;
}

//二分查找
int binarySearch(int *nums[], int target)
{
    int left = 0;
    int tem[]={} ; // 注意
    
    int right = sizeof(tem) / sizeof(*tem);
    printf("%d\n",right);
    // while (left <= right)
    // { // 注意
    //     int mid = (right + left) / 2;
    //     if (nums[mid] == target)
    //         return mid;
    //     else if (nums[mid] < target)
    //         left = mid + 1; // 注意
    //     else if (nums[mid] > target)
    //         right = mid - 1; // 注意
    // }
    return -1;
}