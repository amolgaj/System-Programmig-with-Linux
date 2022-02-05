#this is a comment
myexe : sub.o prog.o add.o  div.o mul.o
	gcc  prog.o add.o sub.o div.o mul.o -o myexe
add.o: add.c
	gcc -c add.c 
sub.o: sub.c
	gcc -c sub.c 
div.o: div.c
	gcc -c div.c
mul.o: mul.c
	gcc -c mul.c
prog.o: prog.c mymath.h
	gcc -c -I.  prog.c 
clean:
	rm -f *.o
install: myexe
	@cp myexe /usr/bin
	@chmod a+x /usr/bin/myexe
	@chmod og-w /usr/bin/myexe
	@echo "myexe successfully installed in /usr/bin"
uninstall:
	@rm -f /usr/bin/myexe
	@echo "myexe successfully un-installed from /usr/bin"
