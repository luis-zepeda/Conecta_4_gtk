#include <gtk/gtk.h>
#include <stdio.h>


static void clicked_1 (GtkWidget *button, gpointer data); 
static void clicked_2 (GtkWidget *button, gpointer data); 
static void clicked_3 (GtkWidget *button, gpointer data); 
static void clicked_4 (GtkWidget *button, gpointer data); 
static void clicked_5 (GtkWidget *button, gpointer data); 
static void clicked_6 (GtkWidget *button, gpointer data); 
static void clicked_7 (GtkWidget *button, gpointer data); 
static void empezar_nuevo (GtkWidget *button, gpointer data); 


int uno = 0;
int dos = 0;
int tres = 0;
int cuatro = 0;
int cinco = 0;
int seis = 0;
int siete = 0;
int jugador = 0;
gint handler_id;
GtkWidget *window,*principalVbox, *nuevo,*button1,*button2,*button3,*button4,*button5,*button6,*button7,*hbox,*vbox1,*vbox2,*vbox3,*vbox4,*vbox5,*vbox6,*vbox7,*pos0,*pos1,*pos2,*pos3,*pos4,*pos5,*pos6,*pos7,*pos8,*pos9,*pos10,*pos11,*pos12,*pos13,*pos14,*pos15,*pos16,*pos17,*pos18,*pos19,*pos20,*pos21,*pos22,*pos23,*pos24,*pos25,*pos26,*pos27,*pos28,*pos29,*pos30,*pos31,*pos32,*pos33,*pos34,*pos35,*pos36,*pos37,*pos38,*pos39,*pos40,*pos41;


int main(int argc, char *argv[])
{
	gtk_init(&argc,&argv);
		

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(window,"delete-event",G_CALLBACK(gtk_main_quit),NULL);

	nuevo = gtk_button_new_with_mnemonic("Empezar de _nuevo");
	g_signal_connect(nuevo,"clicked",G_CALLBACK(empezar_nuevo),NULL);
	
	button1 = gtk_button_new_with_mnemonic("_1");
	pos0 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos1 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos2 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos3 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos4 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos5 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	g_signal_connect(button1,"clicked",G_CALLBACK(clicked_1),NULL);

	button2 = gtk_button_new_with_mnemonic("_2");
	pos6 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos7 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos8 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos9 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos10 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos11 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	g_signal_connect(button2,"clicked",G_CALLBACK(clicked_2),NULL);

	button3 = gtk_button_new_with_mnemonic("_3");
	pos12 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos13 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos14 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos15 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos16 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos17 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	g_signal_connect(button3,"clicked",G_CALLBACK(clicked_3),NULL);

	button4 = gtk_button_new_with_mnemonic("_4");
	pos18 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos19 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos20 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos21 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos22 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos23 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	g_signal_connect(button4,"clicked",G_CALLBACK(clicked_4),NULL);
	
	button5 = gtk_button_new_with_mnemonic("_5");
	pos24 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos25 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos26 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos27 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos28 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos29 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	g_signal_connect(button5,"clicked",G_CALLBACK(clicked_5),NULL);
	
	button6 = gtk_button_new_with_mnemonic("_6");
	pos30 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos31 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos32 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos33 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos34 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos35 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	g_signal_connect(button6,"clicked",G_CALLBACK(clicked_6),NULL);

	button7 = gtk_button_new_with_mnemonic("_7");
	pos36 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos37 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos38 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos39 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos40 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos41 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	g_signal_connect(button7,"clicked",G_CALLBACK(clicked_7),NULL);

	vbox1 = gtk_vbox_new(0,0);
	vbox2 = gtk_vbox_new(0,0);
	vbox3 = gtk_vbox_new(0,0);
	vbox4 = gtk_vbox_new(0,0);
	vbox5 = gtk_vbox_new(0,0);
	vbox6 = gtk_vbox_new(0,0);
	vbox7 = gtk_vbox_new(0,0);
	hbox = gtk_hbox_new(0,0);
	principalVbox = gtk_vbox_new(0,0);

	gtk_box_pack_start(GTK_BOX(vbox1),button1,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox1),pos0,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox1),pos1,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox1),pos2,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox1),pos3,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox1),pos4,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox1),pos5,1,1,0);

	gtk_box_pack_start(GTK_BOX(vbox2),button2,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox2),pos6,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox2),pos7,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox2),pos8,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox2),pos9,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox2),pos10,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox2),pos11,1,1,0);	

	gtk_box_pack_start(GTK_BOX(vbox3),button3,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox3),pos12,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox3),pos13,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox3),pos14,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox3),pos15,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox3),pos16,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox3),pos17,1,1,0);	

	gtk_box_pack_start(GTK_BOX(vbox4),button4,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox4),pos18,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox4),pos19,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox4),pos20,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox4),pos21,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox4),pos22,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox4),pos23,1,1,0);	

	gtk_box_pack_start(GTK_BOX(vbox5),button5,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox5),pos24,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox5),pos25,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox5),pos26,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox5),pos27,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox5),pos28,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox5),pos29,1,1,0);	

	gtk_box_pack_start(GTK_BOX(vbox6),button6,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox6),pos30,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox6),pos31,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox6),pos32,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox6),pos33,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox6),pos34,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox6),pos35,1,1,0);	
		
	gtk_box_pack_start(GTK_BOX(vbox7),button7,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox7),pos36,1,1,0);
	gtk_box_pack_start(GTK_BOX(vbox7),pos37,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox7),pos38,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox7),pos39,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox7),pos40,1,1,0);	
	gtk_box_pack_start(GTK_BOX(vbox7),pos41,1,1,0);	

	gtk_box_pack_start(GTK_BOX(hbox),vbox1,1,1,0);
	gtk_box_pack_start(GTK_BOX(hbox),vbox2,1,1,0);
	gtk_box_pack_start(GTK_BOX(hbox),vbox3,1,1,0);
	gtk_box_pack_start(GTK_BOX(hbox),vbox4,1,1,0);
	gtk_box_pack_start(GTK_BOX(hbox),vbox5,1,1,0);
	gtk_box_pack_start(GTK_BOX(hbox),vbox6,1,1,0);
	gtk_box_pack_start(GTK_BOX(hbox),vbox7,1,1,0);

	gtk_box_pack_start(GTK_BOX(principalVbox),nuevo,1,1,0);
	gtk_box_pack_start(GTK_BOX(principalVbox),hbox,1,1,0);

	gtk_container_add(GTK_CONTAINER(window),principalVbox);
	gtk_widget_show_all(window);
	gtk_main();
	return 0;
}


static void clicked_1 (GtkWidget *button, gpointer data) {
	switch(uno) {
		case 0:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos5), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos5), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 1:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos4), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos4), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;			
		case 2:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos3), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos3), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 3:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos2), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos2), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 4:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos1), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos1), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 5:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos0), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos0), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
	}

	jugador+=1;
	uno+=1;
}
	
static void clicked_2 (GtkWidget *button, gpointer data) {
	switch(dos) {
		case 0:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos11), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos11), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 1:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos10), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos10), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;			
		case 2:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos9), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos9), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 3:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos8), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos8), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 4:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos7), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos7), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 5:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos6), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos6), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
	}

	jugador+=1;
	dos+=1;
}

static void clicked_3 (GtkWidget *button, gpointer data) {
	switch(tres) {
		case 0:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos17), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos17), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 1:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos16), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos16), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;			
		case 2:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos15), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos15), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 3:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos14), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos14), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 4:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos13), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos13), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 5:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos12), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos12), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
	}

	jugador+=1;
	tres+=1;
}

static void clicked_4 (GtkWidget *button, gpointer data) {
	switch(cuatro) {
		case 0:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos23), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos23), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 1:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos22), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos22), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;			
		case 2:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos21), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos21), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 3:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos20), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos20), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 4:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos19), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos19), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 5:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos18), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos18), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
	}

	jugador+=1;
	cuatro+=1;
}
static void clicked_5 (GtkWidget *button, gpointer data) {
	switch(cinco) {
		case 0:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos29), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos29), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 1:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos28), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos28), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;			
		case 2:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos27), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos27), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 3:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos26), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos26), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 4:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos25), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos25), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 5:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos24), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos24), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
	}

	jugador+=1;
	cinco+=1;
}
static void clicked_6 (GtkWidget *button, gpointer data) {
	switch(seis) {
		case 0:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos35), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos35), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 1:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos34), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos34), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;			
		case 2:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos33), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos33), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 3:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos32), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos32), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 4:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos31), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos31), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 5:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos30), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos30), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
	}

	jugador+=1;
	seis+=1;

}

static void clicked_7 (GtkWidget *button, gpointer data) {
	switch(siete) {
		case 0:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos41), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos41), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 1:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos40), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos40), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;			
		case 2:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos39), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos39), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 3:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos38), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos38), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 4:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos37), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos37), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
		case 5:
				if (jugador % 2 != 0) {
					gtk_image_set_from_file(GTK_IMAGE(pos36), "/home/luis/Documents/C/Proyecto/rojo.png");
				} else {
					gtk_image_set_from_file(GTK_IMAGE(pos36), "/home/luis/Documents/C/Proyecto/negro.png");
				}
				break;
	}

	jugador+=1;
	siete+=1;
}

static void empezar_nuevo (GtkWidget *button, gpointer data) {
	gtk_image_set_from_file(GTK_IMAGE(pos0), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos1), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos2), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos3), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos4), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos5), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos6), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos7), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos8), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos9), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos10), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos11), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos12), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos13), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos14), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos15), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos16), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos17), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos18), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos19), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos20), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos21), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos22), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos23), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos24), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos25), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos26), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos27), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos28), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos29), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos30), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos31), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos32), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos33), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos34), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos35), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos36), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos37), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos38), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos39), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos40), "/home/luis/Documents/C/Proyecto/blanco.png");
	gtk_image_set_from_file(GTK_IMAGE(pos41), "/home/luis/Documents/C/Proyecto/blanco.png");

	jugador = 0;
	uno = 0;
	dos = 0;
	tres = 0;
	cuatro = 0;
	cinco = 0;
	seis = 0;
	siete = 0;
}