test: test_heap.run
	valgrind --leak-check=full --undef-value-errors=no ./test_heap.run

test_novg: test_heap.run
	./test_heap.run

test_heap.run: test_heap.c heap.c heap.h
	gcc -g -Wall -o test_heap.run heap.c test_heap.c cutest/CuTest.c

insert: insert.run
	valgrind --leak-check=full --undef-value-errors=no ./insert.run

insert.run: insert.c insert_main.c
	gcc -Wall -g insert.c insert_main.c -o insert.run

struct_of_picture: struct_of_picture.run
	valgrind --leak-check=full --undef-value-errors=no ./struct_of_picture.run

struct_of_picture.run: struct_of_picture.c
	gcc -Wall -g struct_of_picture.c -o struct_of_picture.run
