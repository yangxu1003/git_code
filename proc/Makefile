file_list=main.o proc.o
bin = proc 

$(bin):$(file_list)
	gcc -o $@ $^
%.o:%.c
	gcc -c $<

.PHONY:clean
clean:
	rm -f $(file_list) $(bin)

