GST = $(shell pkg-config --cflags --libs gstreamer-1.0)
gst_test:
	gcc -o ../bin/hello_world hello_world.c $(GST)