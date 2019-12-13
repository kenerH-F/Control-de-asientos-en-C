#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
void pintar(void);
void logo(void)
{
	clrscr();

	textcolor(1);
	gotoxy(25,9);
	cprintf("€€€€€ €€€€€€€€€€€€€€€€€ €€€€€");
	gotoxy(25,10);
	cprintf("€€€€€ €€€€€€€€€€€€€€€€€ €€€€€");
	gotoxy(25,11);
	cprintf("€€€€€ €€€€€       €€€€€  ");
	gotoxy(25,12);
	cprintf("€€€€€ €€€€€ €€€€€ €€€€€ €€€€€");
	gotoxy(25,13);
	cprintf("€€€€€ €€€€€ €€€€€ €€€€€ €€€€€");
	gotoxy(25,14);
	cprintf("€€€€€ €€€€€ €€€€€ €€€€€ €€€€€");
	gotoxy(25,15);
	cprintf("€€€€€       €€€€€ €€€€€ €€€€€");
	gotoxy(25,16);
	cprintf("€€€€€€€€€€€€€€€€€ €€€€€€€€€€€");

	textcolor(7);
	gotoxy(23,17);cprintf("UNIVERSIDAD NACIONAL DE INGENIERIA");
	gotoxy(35,6);cprintf("CINEPOLIS");
	gotoxy(54,22);cprintf("Kener Joan Hern†ndez Flores");
	gotoxy(71,23);cprintf("2019-0021U");
	gotoxy(75,24);cprintf("1M3-CO");
	gotoxy(73,25);cprintf("22/11/19");
	gotoxy(70,26);cprintf("Presione una tecla para continuar");


getch();
}
void pintar2(void){
int i;

for(i=1;i<=78;i++){
		textcolor(5);delay(8);
		gotoxy(i,2);cprintf("%c",205);
		gotoxy(i,23);cprintf("%c",205);
		gotoxy(i,4);cprintf("%c",205);
		gotoxy(i,12);cprintf("%c",205);}
/*Verticales*/
for(i=3;i<=22;i++){delay(8);
		gotoxy(1,i);textcolor(5);cprintf("%c",186);
		gotoxy(78,i);cprintf("%c",186);}
for(i=13;i<=22;i++){delay(8);
	 gotoxy(20,i);cprintf("%c",186);
	 gotoxy(42,i);cprintf("%c",186);}
 /*Genero horizontal*/
for(i=2;i<=19;i++)
{                 delay(8);
	gotoxy(i,15);cprintf("%c",205);
	gotoxy(i,18);cprintf("%c",205);}}
	void pintar4(void){
	int i;
	clrscr();
				for(i=3;i<=22;i++){delay(8);
					gotoxy(1,i);textcolor(7);cprintf("%c",186);gotoxy(78,i);cprintf("%c",186);}
							/*Lineras horizontales*/for(i=1;i<=78;i++){delay(8);
					gotoxy(i,2);cprintf("%c",205);gotoxy(i,23);cprintf("%c",205);}}


void pintar(void) /*Funcion pintar cartelera*/{
int i;
clrscr();
/*Lineras horizontales*/
	for(i=1;i<=78;i++){
		textcolor(5);
		delay(8);

		gotoxy(i,2);cprintf("%c",205);

		gotoxy(i,23);cprintf("%c",205);

		gotoxy(i,4);cprintf("%c",205);
}
	for(i=3;i<=22;i++){
		 delay(8);
		gotoxy(1,i);textcolor(5);cprintf("%c",186);
		gotoxy(78,i);cprintf("%c",186);

	   }
	for(i=5;i<=22;i++){
		 delay(8);
	 gotoxy(25,i);cprintf("%c",186);

	}

	for(i=26;i<=77;i++){
		delay(8);
		gotoxy(i,19);cprintf("%c",205);
	}

}/*Fin de funcion  pintar*/

void texto1(void)
{
	textcolor(3);
	gotoxy(29,3);cprintf("Bienvenido a Cinepolis");
	gotoxy(10,12);cprintf("CARTELERA");
	gotoxy(30,7);cprintf("1. DRAGON BALL SUPER BROLY ");
	gotoxy(30,10);cprintf("2. TERMINATOR: DESTINO OCULTO");
	gotoxy(30,13);cprintf("3. MALEFICA: DUE•A DEL MAL");
	gotoxy(30,16);cprintf("4. SALIR");
	gotoxy(30,20);cprintf("Ingrese el n£mero de la pelicula que desea ver:");
}

void dragon(void)
{
						textcolor(3);
					gotoxy(28,3);cprintf("DRAGON BALL SUPER BROLY");
					gotoxy(10,6);cprintf("Sinopsis");
					gotoxy(10,7);cprintf("Goku y vegueta encuentran a Broly, un guerrero saiyajin.");
					gotoxy(10,8);cprintf("Pero, ®c¢mo sobrevivi¢ a la destrucci¢n de su planeta y donde");
					gotoxy(10,9);cprintf("estuvo todo ese tiempo?. La situaci¢n empeora todav°a m†s cuando");
					gotoxy(10,10);cprintf("Freezer vuelve al mundo de los vivos desde el infierno.");
					gotoxy(4,13);cprintf("Genero:");
					gotoxy(4,14);cprintf("Anime y acci¢n.");
					gotoxy(4,16);cprintf("Duraci¢n:");
					gotoxy(4,17);cprintf("1h:41min.");
					gotoxy(4,19);cprintf("Clasificaci¢n:");
					gotoxy(4,20);cprintf("G.");
					gotoxy(22,13);cprintf("Horarios de funci¢n");
					gotoxy(22,15);cprintf("1- 11:30am.");
					gotoxy(22,17);cprintf("2- 2:00pm.");
					gotoxy(22,19);cprintf("3- Volver cartelera");
					gotoxy(44,16);cprintf("Seleccione el horario que desee:");
}


void mensajeasientos(void)
{
								textcolor(3);
								gotoxy(29,3);cprintf("Butacas");
								gotoxy(3,12);cprintf("Opciones de asientos");
								gotoxy(30,7);cprintf("1. Solicitar asientos");
								gotoxy(30,10);cprintf("2. Mostrar asientos");
								gotoxy(30,13);cprintf("3. Volver cartelera ");
								gotoxy(30,16);cprintf("4. SALIR");
								gotoxy(30,20);cprintf("Opci¢n que desea:");

}
void terminator(void)
{
						textcolor(3);
					gotoxy(28,3);cprintf("TERMINATOR: DESTINO OCULTO");
					gotoxy(10,6);cprintf("Sinopsis");
					gotoxy(10,7);cprintf("Sarah connor une todas sus fuerzas");
					gotoxy(10,8);cprintf("con una mujer cyborg para proteger ");
					gotoxy(10,9);cprintf("a una joven de un extremadamente");
					gotoxy(10,10);cprintf("poderoso y nuevo terminator.");
					gotoxy(4,13);cprintf("Genero:");
					gotoxy(4,14);cprintf("Ciencia ficci¢n");
					gotoxy(4,16);cprintf("Duraci¢n:");
					gotoxy(4,17);cprintf("2h:08min.");
					gotoxy(4,19);cprintf("Clasificaci¢n:");
					gotoxy(4,20);cprintf("R.");
					gotoxy(22,13);cprintf("Horarios de funci¢n");
					gotoxy(22,15);cprintf("1- 12:30pm.");
					gotoxy(22,17);cprintf("2- 5:30pm.");
					gotoxy(22,19);cprintf("3- Vover cartelera");
					gotoxy(44,16);cprintf("Seleccione el horario que desee:");
}

void malefica(void)
{
						textcolor(3);
						gotoxy(28,3);cprintf("MALEFICA: DUE•A DEL MAL");
						gotoxy(10,6);cprintf("Sinopsis");
						gotoxy(10,7);cprintf("Secuela de Malefica que cuenta la vida");
						gotoxy(10,8);cprintf("de Malefica y Aurora, as° como las alianzas");
						gotoxy(10,9);cprintf("que formar†n para sobrevivir a las amenazas ");
						gotoxy(10,10);cprintf("del m†gico mundo en el que habitan.");
						gotoxy(4,13);cprintf("Genero:");
						gotoxy(2,14);cprintf("Aventura, fantasia");
						gotoxy(4,16);cprintf("Duraci¢n:");
						gotoxy(4,17);cprintf("1h:59min.");
						gotoxy(4,19);cprintf("Clasificaci¢n:");
						gotoxy(4,20);cprintf("PG");
						gotoxy(22,13);cprintf("Horarios de funci¢n");
						gotoxy(22,15);cprintf("1- 1:30am.");
						gotoxy(22,17);cprintf("2- 7:30pm.");
						gotoxy(22,19);cprintf("3- Vover cartelera");
						gotoxy(44,16);cprintf("Seleccione el horario que desee:");
}
