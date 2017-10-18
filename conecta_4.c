#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <glib.h>

static void clicked_1 (GtkWidget *button, gpointer data); 

int uno = 0;
int dos = 0;
int tres = 0;
int cuatro = 0;
int cinco = 0;
int seis = 0;
int siete = 0;
int jugador = 1;


int main(int argc, char *argv[])
{
	gtk_init(&argc,&argv);
	GtkWidget *window,  *button, *blanco, *rojo, *negro,*table;
	
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(window,"delete-event",G_CALLBACK(gtk_main_quit),NULL);
	table = gtk_table_new(7,7,0);
	blanco = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	negro = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/negro.png");
	rojo = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/rojo.png");



	button = gtk_button_new_with_mnemonic("_1");
	gtk_table_attach(GTK_TABLE(table),button,0,1,6,7,GTK_FILL,GTK_FILL,0,0);
	g_signal_connect(button,"clicked",G_CALLBACK(clicked_1),NULL);
	button = gtk_button_new_with_mnemonic("_2");
	gtk_table_attach(GTK_TABLE(table),button,1,2,6,7,GTK_FILL,GTK_FILL,0,0);
	button = gtk_button_new_with_mnemonic("_3");
	gtk_table_attach(GTK_TABLE(table),button,2,3,6,7,GTK_FILL,GTK_FILL,0,0);
	button = gtk_button_new_with_mnemonic("_4");
	gtk_table_attach(GTK_TABLE(table),button,3,4,6,7,GTK_FILL,GTK_FILL,0,0);
	button = gtk_button_new_with_mnemonic("_5");
	gtk_table_attach(GTK_TABLE(table),button,4,5,6,7,GTK_FILL,GTK_FILL,0,0);
	button = gtk_button_new_with_mnemonic("_6");
	gtk_table_attach(GTK_TABLE(table),button,5,6,6,7,GTK_FILL,GTK_FILL,0,0);
	button = gtk_button_new_with_mnemonic("_7");
	gtk_table_attach(GTK_TABLE(table),button,6,7,6,7,GTK_FILL,GTK_FILL,0,0);

	for(int i = 0; i < 6; i++) {
		for(int k = 0; k < 7; k++) {
			gtk_table_attach(GTK_TABLE(table),blanco,k,k+1,i,i+1,GTK_FILL,GTK_FILL,0,0);
			blanco = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
		}
	}
		
	gtk_container_add(GTK_CONTAINER(window),GTK_WIDGET(table));
	gtk_widget_show_all(window);
	gtk_main();
	return 0;
}


static void clicked_1 (GtkWidget *button, gpointer data) {
	
}
