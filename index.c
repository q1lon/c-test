#include <stdio.h>

int main() {
//  char strName[10];
//  printf( "你叫什么:");
//  scanf("%s",strName);
//  printf("你好,%s\n",strName);

    char *p;
    char a = 'z';
    p = &a;
    printf("%p\n", p);
    printf("aaa:%c", a);
    // printf("%s",&a);

    return 0;
}