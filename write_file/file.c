/*
 * @Author: q1lon<keyron.zhang@gmail.com>
 * @Date: 2021-01-04 13:59:22
 * @LastEditTime: 2021-01-04 22:40:13
 * @FilePath: /frist/file.c
 */
#include <stdio.h>
#include <string.h>
#include "write_log.h"
#define CFG_DEBUG 1
 
#if CFG_DEBUG 
#define CFG_TRACE(a,b,...) printf(__VA_ARGS__);fflush(stdout);
#else
#define CFG_TRACE(a,b,...) write_log_file(a,b,__VA_ARGS__)
#endif

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
   // CFG_TRACE("log.txt",FILE_MAX_SIZE,"%s,%s() %d\n",__FILE__,__FUNCTION__,__LINE__);
   write_log_file("log.txt", FILE_MAX_SIZE, buffer, strlen(buffer));
   // fp = fopen("test.txt", "a+");
   // fprintf(fp,buff);
   // fclose(fp);
}
