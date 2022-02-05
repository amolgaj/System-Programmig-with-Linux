INCLUDES=.
LIBS = -lc
OBJS= add.o prog.o sub.o div.o mul.o ./mymod/mymod.o
INSTDIR = /usr/bin

myexe: $(OBJS)
	$(CC) -o myexe $(OBJS)  $(LIBS)
add.o: add.c 
	$(CC) -c add.c  $(CFLAGS)
sub.o: sub.c
	$(CC) -c sub.c  $(CFLAGS)
div.o: div.c
	$(CC) -c div.c  $(CFLAGS)
mul.o: mul.c
	$(CC) -c mul.c  $(CFLAGS)
prog.o: prog.c mymath.h ./mymod/mymod.h
	$(CC) -c prog.c -I$(INCLUDES) $(CFLAGS)

include: ./mymod/makefile

clean:
	-@rm -f $(OBJS)

install: myexe
	@if [ -d $(INSTDIR) ]; \
	then \
		cp myexe $(INSTDIR) && \
		chmod a+x $(INSTDIR)/myexe && \
		chmod og-w $(INSTDIR)/myexe && \
		echo "myexe installed successfully in $(INSTDIR)"; \
	fi

uninstall:
	@rm -f $(INSTDIR)/myexe
	@echo "myexe successfully un-installed from $(INSTDIR)"

