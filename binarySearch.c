/*
 * @Author: q1lon<keyron.zhang@gmail.com>
 * @Date: 2020-11-24 11:09:00
 * @LastEditTime: 2021-01-07 20:13:55
 * @FilePath: /frist/binarySearch.c
 */
#include <stdio.h>
/* 函数声明 */
int binarySearch(int nums[], size_t i, int target);

int main()
{
    int arr[] = {2, 3, 4, 6, 8, 9, 10};
    int n;
    size_t len = sizeof(arr) / sizeof(int);
    n = binarySearch(arr, len, 10);
    printf("%d\n", n);
    return 0;
}

/**
 * @description: 二分查找
 * @param {int []} nums 有序数组
 * @param {size_t} len 有序数组长度
 * @param {int} target 要定位的数据
 * @return {*} 返回数组的位置
 */
int binarySearch(int nums[], size_t len, int target)
{
    int left = 0;
    int right = len;
    int min = (left + right) / 2;

    while (left <= right)
    { // 注意
        int mid = (right + left) / 2;
        if (nums[mid] == target)
            return mid + 1;
        else if (nums[mid] < target)
            left = mid + 1; // 如果查找的值大于中间位置的值 说明要查找的值在中间值的右侧
        else if (nums[mid] > target)
            right = mid - 1;
    }
    return -1;
}