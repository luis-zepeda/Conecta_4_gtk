#include <gtk/gtk.h>
#include <stdio.h>


static void clicked_1 (GtkWidget *button, gpointer data); 
static void clicked_2 (GtkWidget *button, gpointer data); 
static void clicked_3 (GtkWidget *button, gpointer data); 
static void clicked_4 (GtkWidget *button, gpointer data); 
static void clicked_5 (GtkWidget *button, gpointer data); 
static void clicked_6 (GtkWidget *button, gpointer data); 
static void clicked_7 (GtkWidget *button, gpointer data); 
static void incremento_3 (GtkWidget *button, gpointer data); 

int uno = 0;
int dos = 0;
int tres = 0;
int cuatro = 0;
int cinco = 0;
int seis = 0;
int siete = 0;
int jugador = 0;


int main(int argc, char *argv[])
{
	gtk_init(&argc,&argv);
	GtkWidget *window,  *button1,*button2,*button3,*button4,*button5,*button6,*button7,*hbox,*vbox1,*vbox2,*vbox3,*vbox4,*vbox5,*vbox6,*vbox7,*pos0,*pos1,*pos2,*pos3,*pos4,*pos5,*pos6,*pos7,*pos8,*pos9,*pos10,*pos11,*pos12,*pos13,*pos14,*pos15,*pos16,*pos17,*pos18,*pos19,*pos20,*pos21,*pos22,*pos23,*pos24,*pos25,*pos26,*pos27,*pos28,*pos29,*pos30,*pos31,*pos32,*pos33,*pos34,*pos35,*pos36,*pos37,*pos38,*pos39,*pos40,*pos41;

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(window,"delete-event",G_CALLBACK(gtk_main_quit),NULL);
	
	button1 = gtk_button_new_with_mnemonic("_1");
	pos0 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos1 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos2 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos3 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos4 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos5 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");

	if (uno == 0) {
		g_signal_connect(button1,"clicked",G_CALLBACK(clicked_1),(gpointer)pos5);
		uno+=1;
	} else if( uno == 1) {
		g_signal_connect(button1,"clicked",G_CALLBACK(clicked_1),(gpointer)pos4);
		uno+=1;
	} else if( uno == 2) {
		g_signal_connect(button1,"clicked",G_CALLBACK(clicked_1),(gpointer)pos3);
		uno+=1;
	} else if( uno == 3) {
		g_signal_connect(button1,"clicked",G_CALLBACK(clicked_1),(gpointer)pos2);
		uno+=1;
	} else if( uno == 4) {
		g_signal_connect(button1,"clicked",G_CALLBACK(clicked_1),(gpointer)pos1);
		uno+=1;
	} else if( uno == 5) {
		g_signal_connect(button1,"clicked",G_CALLBACK(clicked_1),(gpointer)pos0);
	} 
	


	button2 = gtk_button_new_with_mnemonic("_2");
	pos6 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos7 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos8 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos9 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos10 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos11 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	
	if (dos == 0) {
			g_signal_connect(button2,"clicked",G_CALLBACK(clicked_2),(gpointer)pos11);
			dos+=1;
		} else if( dos == 1) {
			g_signal_connect(button2,"clicked",G_CALLBACK(clicked_2),(gpointer)pos10);
			dos+=1;
		} else if( dos == 2) {
			g_signal_connect(button2,"clicked",G_CALLBACK(clicked_2),(gpointer)pos9);
			dos+=1;
		} else if( dos == 3) {
			g_signal_connect(button2,"clicked",G_CALLBACK(clicked_2),(gpointer)pos8);
			dos+=1;
		} else if( dos == 4) {
			g_signal_connect(button2,"clicked",G_CALLBACK(clicked_2),(gpointer)pos7);
			dos+=1;
		} else if( dos == 5) {
			g_signal_connect(button2,"clicked",G_CALLBACK(clicked_2),(gpointer)pos6);
		} 

	button3 = gtk_button_new_with_mnemonic("_3");
	pos12 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos13 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos14 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos15 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos16 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos17 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");

	if (tres == 0) {
			g_signal_connect(button3,"clicked",G_CALLBACK(clicked_3),(gpointer)pos17);
			g_signal_connect(button3,"leave",G_CALLBACK(incremento_3),NULL);
			
		} 
	if( tres == 1) {
			g_signal_connect(button3,"clicked",G_CALLBACK(clicked_3),(gpointer)pos16);
			
		} 
	if( tres == 2) {
			g_signal_connect(button3,"clicked",G_CALLBACK(clicked_3),(gpointer)pos15);
			
		} 
	if( tres == 3) {
			g_signal_connect(button3,"clicked",G_CALLBACK(clicked_3),(gpointer)pos14);
			
		} 
	if( tres == 4) {
			g_signal_connect(button3,"clicked",G_CALLBACK(clicked_3),(gpointer)pos13);
			
		} 
	if( tres == 5) {
			g_signal_connect(button3,"clicked",G_CALLBACK(clicked_3),(gpointer)pos12);
			
		} 

	
	button4 = gtk_button_new_with_mnemonic("_4");
	pos18 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos19 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos20 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos21 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos22 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos23 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	
	if (cuatro == 0) {
			g_signal_connect(button4,"clicked",G_CALLBACK(clicked_4),(gpointer)pos23);
			cuatro+=1;
		} else if( cuatro == 1) {
			g_signal_connect(button4,"clicked",G_CALLBACK(clicked_4),(gpointer)pos22);
			cuatro+=1;
		} else if( cuatro == 2) {
			g_signal_connect(button4,"clicked",G_CALLBACK(clicked_4),(gpointer)pos21);
			cuatro+=1;
		} else if( cuatro == 3) {
			g_signal_connect(button4,"clicked",G_CALLBACK(clicked_4),(gpointer)pos20);
			cuatro+=1;
		} else if( cuatro == 4) {
			g_signal_connect(button4,"clicked",G_CALLBACK(clicked_4),(gpointer)pos19);
			cuatro+=1;
		} else if( cuatro == 5) {
			g_signal_connect(button4,"clicked",G_CALLBACK(clicked_4),(gpointer)pos18);
		} 


	button5 = gtk_button_new_with_mnemonic("_5");
	pos24 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos25 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos26 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos27 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos28 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos29 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");

	if (cinco == 0) {
			g_signal_connect(button5,"clicked",G_CALLBACK(clicked_5),(gpointer)pos29);
			cinco+=1;
		} else if( cinco == 1) {
			g_signal_connect(button5,"clicked",G_CALLBACK(clicked_5),(gpointer)pos28);
			cinco+=1;
		} else if( cinco == 2) {
			g_signal_connect(button5,"clicked",G_CALLBACK(clicked_5),(gpointer)pos27);
			cinco+=1;
		} else if( cinco == 3) {
			g_signal_connect(button5,"clicked",G_CALLBACK(clicked_5),(gpointer)pos26);
			cinco+=1;
		} else if( cinco == 4) {
			g_signal_connect(button5,"clicked",G_CALLBACK(clicked_5),(gpointer)pos25);
			cinco+=1;
		} else if( cinco == 5) {
			g_signal_connect(button5,"clicked",G_CALLBACK(clicked_5),(gpointer)pos24);
		} 


	button6 = gtk_button_new_with_mnemonic("_6");
	pos30 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos31 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos32 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos33 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos34 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos35 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");

	if (seis == 0) {
			g_signal_connect(button6,"clicked",G_CALLBACK(clicked_6),(gpointer)pos35);
			seis+=1;
		} else if( seis == 1) {
			g_signal_connect(button6,"clicked",G_CALLBACK(clicked_6),(gpointer)pos34);
			seis+=1;
		} else if( seis == 2) {
			g_signal_connect(button6,"clicked",G_CALLBACK(clicked_6),(gpointer)pos33);
			seis+=1;
		} else if( seis == 3) {
			g_signal_connect(button6,"clicked",G_CALLBACK(clicked_6),(gpointer)pos32);
			seis+=1;
		} else if( seis == 4) {
			g_signal_connect(button6,"clicked",G_CALLBACK(clicked_6),(gpointer)pos31);
			seis+=1;
		} else if( seis == 5) {
			g_signal_connect(button6,"clicked",G_CALLBACK(clicked_6),(gpointer)pos30);
		} 


	button7 = gtk_button_new_with_mnemonic("_7");
	pos36 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos37 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos38 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos39 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos40 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");
	pos41 = gtk_image_new_from_file("/home/luis/Documents/C/Proyecto/blanco.png");

	if (siete == 0) {
			g_signal_connect(button7,"clicked",G_CALLBACK(clicked_7),(gpointer)pos41);
			siete+=1;
		} else if( siete == 1) {
			g_signal_connect(button7,"clicked",G_CALLBACK(clicked_7),(gpointer)pos40);
			siete+=1;
		} else if( siete == 2) {
			g_signal_connect(button7,"clicked",G_CALLBACK(clicked_7),(gpointer)pos39);
			siete+=1;
		} else if( siete == 3) {
			g_signal_connect(button7,"clicked",G_CALLBACK(clicked_7),(gpointer)pos38);
			siete+=1;
		} else if( siete == 4) {
			g_signal_connect(button7,"clicked",G_CALLBACK(clicked_7),(gpointer)pos37);
			siete+=1;
		} else if( siete == 5) {
			g_signal_connect(button7,"clicked",G_CALLBACK(clicked_7),(gpointer)pos36);
		} 


	vbox1 = gtk_vbox_new(0,0);
	vbox2 = gtk_vbox_new(0,0);
	vbox3 = gtk_vbox_new(0,0);
	vbox4 = gtk_vbox_new(0,0);
	vbox5 = gtk_vbox_new(0,0);
	vbox6 = gtk_vbox_new(0,0);
	vbox7 = gtk_vbox_new(0,0);
	hbox = gtk_hbox_new(0,0);



	

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

	gtk_container_add(GTK_CONTAINER(window),hbox);
	gtk_widget_show_all(window);
	gtk_main();
	return 0;
}


static void clicked_1 (GtkWidget *button, gpointer data) {
	gtk_image_set_from_file(GTK_IMAGE(data), "/home/luis/Documents/C/Proyecto/negro.png");
}
static void clicked_2 (GtkWidget *button, gpointer data) {
	gtk_image_set_from_file(GTK_IMAGE(data), "/home/luis/Documents/C/Proyecto/negro.png");
}
static void clicked_3 (GtkWidget *button, gpointer data) {
	gtk_image_set_from_file(GTK_IMAGE(data), "/home/luis/Documents/C/Proyecto/negro.png");
}
static void clicked_4 (GtkWidget *button, gpointer data) {
	gtk_image_set_from_file(GTK_IMAGE(data), "/home/luis/Documents/C/Proyecto/negro.png");
}
static void clicked_5 (GtkWidget *button, gpointer data) {
	gtk_image_set_from_file(GTK_IMAGE(data), "/home/luis/Documents/C/Proyecto/negro.png");
}
static void clicked_6 (GtkWidget *button, gpointer data) {
	gtk_image_set_from_file(GTK_IMAGE(data), "/home/luis/Documents/C/Proyecto/negro.png");
}
static void clicked_7 (GtkWidget *button, gpointer data) {
	gtk_image_set_from_file(GTK_IMAGE(data), "/home/luis/Documents/C/Proyecto/negro.png");
}
static void incremento_3 (GtkWidget *button, gpointer data) {
	tres+=1;
}
