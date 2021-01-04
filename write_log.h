/*
 * @Author: q1lon<keyron.zhang@gmail.com>
 * @Date: 2021-01-04 16:01:29
 * @LastEditTime: 2021-01-04 18:42:23
 * @FilePath: /frist/write_log.h
 */
#define FILE_MAX_SIZE (1024 * 1024)
extern void *write_log_file(char *filename, long max_size, char *buffer, unsigned buf_size);