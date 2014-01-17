#include <glib.h>
#include <gio/gio.h>
#include <gtk/gtk.h>

int main(int argc, char* argv[]){
	gtk_init(&argc, &argv);
	gchar* filename = ("gio_test");
	GFile * file = NULL;
	gchar* buffer[2000];
	
	gsize count = 1000;
	gsize bytes_read;
	
	file = g_file_new_for_path(filename);
	if (!g_file_query_exists(file, NULL)){
		g_print("file not found");
	}else{
		g_print("The name of the other file in this directory is %s\n", g_file_get_basename(file));
	}
	
	GFileInputStream * file_text = NULL;
	file_text = g_file_read(file, NULL, NULL);
	g_input_stream_read_all(G_INPUT_STREAM(file_text), buffer, count, &bytes_read, NULL, NULL);
	g_print("%s\n", buffer);
	
	g_object_unref(file);
	g_object_unref(file_text);
	return 0;
}