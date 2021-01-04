/*
 * @Author: q1lon<keyron.zhang@gmail.com>
 * @Date: 2021-01-04 13:59:22
 * @LastEditTime: 2021-01-04 18:45:46
 * @FilePath: /frist/file.c
 */
#include <stdio.h>
#include <string.h>
#include "write_log.h"


int main()
{
   // FILE *fp = NULL;
   char buff[255];
   char buffer[255];

   printf("请输入要写入文件的内容:");

   gets(buff);
   printf("输入的内容是：%s\n", buff);

   // memset(buff, 0, sizeof(buff));
   sprintf(buffer, "====>%s\n", buff);
   // printf("输入的内容是：%s\n", buffer);
   write_log_file("log.txt", FILE_MAX_SIZE, buffer, strlen(buffer));
   // fp = fopen("test.txt", "a+");
   // fprintf(fp,buff);
   // fclose(fp);
}
