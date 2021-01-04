index:file.o write_log.o
	gcc file.o write_log.o -o test_write_log_file
file.o:file.c
	gcc -c file.c -o file.o
write_log.o:write_log.c
	gcc -c write_log.c -o write_log.o
.PHONY:clean
clean:
		rm -rf *.o test_write_log_file
