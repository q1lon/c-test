#ifndef WRITE_LOG_H //如果没有a.h文件，#define A_H。如果有，结束定义

#define WRITE_LOG_H //定义a.h文件

#endif //结束定义部分

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#ifdef WIN32
#include <windows.h>
#else
#include <unistd.h> // linux下头文件
#endif

// #define FILE_MAX_SIZE (1024 * 1024)
#define DEBUG 0
#include "write_log.h"
/**
 * @description: 获得当前时间字符串
 * @param {char} *buffer 时间字符串
 * @return {*}
 */
void get_local_time(char *buffer)
{
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
#if DEBUG
    printf("mon>>>>%d", timeinfo->tm_mon+1);
#endif
    sprintf(buffer, "%04d-%02d-%02d %02d:%02d:%02d",
            (timeinfo->tm_year + 1900), timeinfo->tm_mon + 1, timeinfo->tm_mday,
            timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
}

/**
 * @description: 获得文件大小
 * @param {char} *filename 文件名
 * @return {*}
 */
long get_file_size(char *filename)
{
    long length = 0;
    FILE *fp = NULL;
    //写入文件
    fp = fopen(filename, "rb");
    if (fp != NULL)
    {
        fseek(fp, 0, SEEK_END);
        length = ftell(fp);
    }
    if (fp != NULL)
    {
        fclose(fp);
        fp = NULL;
    }
    return length;
}

/**
 * @description: 写入日志文件
 * @param {char} *filename 日志文件名
 * @param {long} max_size 日志文件大小限制
 * @param {char} *buffer 日志内容
 * @param {unsigned} buf_size 日志内容大小
 * @return {*}
 */
void write_log_file(char *filename, long max_size, char *buffer, unsigned buf_size)
{
    if (filename != NULL && buffer != NULL)
    {
        // 文件超过最大限制, 删除
        long length = get_file_size(filename);
        if (length > max_size)
        {
            unlink(filename); // 删除文件
        }
        // 写日志
        {
            FILE *fp;
            fp = fopen(filename, "at+");
            if (fp != NULL)
            {
                char now[32];
                memset(now, 0, sizeof(now));
                get_local_time(now);
                fwrite(now, strlen(now) + 1, 1, fp);
                fwrite(buffer, buf_size, 1, fp);

                fclose(fp);
                fp = NULL;
            }
        }
    }
}


#if DEBUG
int main(int argc, char **argv)
{
    int i;
    // for (i = 0; i < 10; ++i)
    // {
    char buffer[32];
    // memset(buffer, 0, sizeof(buffer));
    // sprintf(buffer, "====>%s\n", "湿哒哒大");
    // CFG_TRACE("aaa","bbb","%s,%s() %d\n",__FILE__,__FUNCTION__,__LINE__);
    // write_log_file("log.txt", FILE_MAX_SIZE, buffer, strlen(buffer));
    // #ifdef WIN32
    //         Sleep(100); // 毫秒
    // #else
    // sleep(1); // 秒
    // #endif
    // }
    // system("pause");
    return 0;
}
#endif
