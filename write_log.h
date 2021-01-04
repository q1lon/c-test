/*
 * @Author: q1lon<keyron.zhang@gmail.com>
 * @Date: 2021-01-04 16:01:29
 * @LastEditTime: 2021-01-04 21:55:10
 * @FilePath: /frist/write_log.h
 */

/**
 * @description: 设置日志文件大小 超过后自动删除
 */
#define FILE_MAX_SIZE (1024 * 1024)
/**
* @description:写入日志文件
* @param filename [in]: 日志文件名
* @param max_size [in]: 日志文件大小限制
* @param buffer [in]: 日志内容
* @param buf_size [in]: 日志内容大小
* @return 空
*/
extern void write_log_file(char *filename, long max_size, char *buffer, unsigned buf_size);