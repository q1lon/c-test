/*
 * @Author: q1lon<keyron.zhang@gmail.com>
 * @Date: 2020-12-30 09:39:31
 * @LastEditTime: 2020-12-30 11:26:13
 * @FilePath: /frist/callback.c
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * @description: 回调函数
 * @param {int} *array 数组
 * @param {size_t} arraySize 数组大小
 * @param {int} callback 回调函数
 * @return {*}
 */
void populate_arr(int *array,size_t arraySize,int (*callback)(void)){
    for(size_t i=0;i<arraySize;i++)
        array[i]=callback();
}
int getNextRandomValue(void){
    return rand();
}
int main(void){
    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_arr(myarray,10,getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d",myarray[i]);
    }
    printf("\n");
    return 0;
}