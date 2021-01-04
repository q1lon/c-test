CC = gcc #CC 表示选择的编译器（也可以改成 gcc）
CFLAGS = -c -Wall #CFLAGS 表示编译选项，-c 即 g++ 中的 -c，-Wall 表示显示编译过程中遇到的所有 warning
LFLAGS = -Wall #LFLAGS 表示链接选项，它就不加 -c 了
NAME = test_write_log_file #编译后的名称
index:file.o write_log.o
	$(CC) $(LFLAGS) file.o write_log.o -o $(NAME)
file.o:file.c
	gcc -c file.c -o file.o
write_log.o:write_log.c
	gcc -c write_log.c -o write_log.o
.PHONY:clean
clean:
		rm -rf *.o $(NAME)
