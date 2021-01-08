//所谓"位域"是把一个字节中的二进位划分为几个不同的区域，并说明每个区域的位数。每个域有一个域名，允许在程序中按域名进行操作。这样就可以把几个不同的对象用一个字节的二进制位域来表示。
#include <stdio.h>
#include <string.h>

#define TRUE  1
#define FALSE  0
typedef struct {
    /* data */
    int book_id;
    char title[50];
    char author[20];
    unsigned int is_show: 1; //位域 只占用一个二进制位
} Book;

int main() {
    Book book1;
    book1.book_id = 111;
    strcpy(book1.title, "测试标题");
    strcpy(book1.author, "测试");
    book1.is_show = 1;
    printf("%d,%s,%d\n", book1.book_id, book1.title, book1.is_show); /* 以整型量格式输出三个域的内容 */
    return 0;
}