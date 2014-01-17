GIO = $(shell pkg-config --libs gio-2.0)
GTK = $(shell pkg-config --cflags --libs gtk+-3.0)
gio:
	gcc -std=c99 -o hello_world hello_world.c $(GTK) $(GIO)