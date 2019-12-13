#include<conio.h>
#include<stdio.h>
#include <Kp2.h>
int bandera20,bandera21,bandera22,bandera23,bandera24,bandera25;
int i, j;
char asiento[4][5]={'0','0','0','0','0',
		            '0','0','0','0','0',
		            '0','0','0','0','0',
		            '0','0','0','0','0'};

	int cantidad_asientos;
	int c_asientos_copy=0;
	int fila_pedida,columna_pedida;
	int asientos_libres=4*5;
	int asientos_usados=0;
	char seguir;
	int bandera1,bandera2;

char asiento2[4][5]={'0','0','0','0','0',
		             '0','0','0','0','0',
		             '0','0','0','0','0',
		             '0','0','0','0','0'};

	int cantidad_asientos2;
	int c_asientos_copy2=0;
	int fila_pedida2,columna_pedida2;
	int asientos_libres2=4*5;
	int asientos_usados2=0;
	char seguir2;
	int bandera3,bandera4;

char asiento3[4][5]={'0','0','0','0','0',
		             '0','0','0','0','0',
		             '0','0','0','0','0',
		             '0','0','0','0','0'};

	int cantidad_asientos3;
	int c_asientos_copy3=0;
	int fila_pedida3,columna_pedida3;
	int asientos_libres3=4*5;
	int asientos_usados3=0;
	char seguir3;
	int bandera5,bandera6;


char asiento4[4][5]={'0','0','0','0','0',
		             '0','0','0','0','0',
	       	         '0','0','0','0','0',
		             '0','0','0','0','0'};

	int cantidad_asientos4;
	int c_asientos_copy4=0;
	int fila_pedida4,columna_pedida4;
	int asientos_libres4=4*5;
	int asientos_usados4=0;
	char seguir4;
	int bandera7,bandera8;

	char asiento5[4][5]={'0','0','0','0','0',
			             '0','0','0','0','0',
			             '0','0','0','0','0',
			     	'0','0','0','0','0'};

	int cantidad_asientos5;
	int c_asientos_copy5=0;
	int fila_pedida5,columna_pedida5;
	int asientos_libres5=4*5;
	int asientos_usados5=0;
	char seguir5;
	int bandera9,bandera10;

	char asiento6[4][5]={'0','0','0','0','0',
		    '0','0','0','0','0',
		    '0','0','0','0','0',
		    '0','0','0','0','0'};

	int cantidad_asientos6;
	int c_asientos_copy6=0;
	int fila_pedida6,columna_pedida6;
	int asientos_libres6=4*5;
	int asientos_usados6=0;
	char seguir6;
	int bandera11,bandera12;
void pintar(void);

int cartelera(void){
	float pel,p1h,p2h,p3h;
	float as,as2,as3;

	do{
	fflush(stdin);
	clrscr();
	pintar();
	texto1();
	gotoxy(50,21);cprintf("¯");scanf("%f",&pel);
	}while((pel!=1)&&(pel!=2)&&(pel!=3)&&(pel!=4));/*Validacion si ingresa opc no validas*/

			switch(pel){
				case 1:
					do{
					fflush(stdin);
					clrscr();
					pintar2();
					dragon();
					gotoxy(58,17);cprintf("¯");scanf("%f",&p1h);
			}while((p1h!=1)&&(p1h!=2)&&(p1h!=3));

				switch(p1h)
				{
					case 1:
						do{
								fflush(stdin);
								clrscr();
								pintar();
								mensajeasientos();
								gotoxy(50,21);cprintf("¯");scanf("%f",&as);
								}while((as!=1)&&(as!=2)&&(as!=3)&&(as!=4));

									switch(as){

										case 1:

												if(asientos_libres==0)  /*Validacion nueva*/
																		{
																			bandera20=0;
																		}else{bandera20=1;}

													if(bandera20==0){clrscr();textcolor(1);gotoxy(34,10);cprintf("\nFunci¢n iniciada");
													gotoxy(27,20);cprintf("Presione una tecla para continuar");getch();cartelera();}

											if(bandera20==1)
											{
												do{fflush(stdin);
													do{clrscr();fflush(stdin);pintar4(),textcolor(3);
												gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
														gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea: ");
														gotoxy(63,5);scanf("%d",&cantidad_asientos);
														if((cantidad_asientos<=0)||(cantidad_asientos>20)){bandera1=0;}else{bandera1=1;}
													}while(bandera1==0);
												}while((asientos_libres!=0) && (cantidad_asientos>asientos_libres));
											}
											if(bandera1==1)
											{
												c_asientos_copy=cantidad_asientos;
												if((asientos_libres!=0) && (cantidad_asientos<=asientos_libres))
												{
													do{clrscr();fflush(stdin);
														textcolor(6);gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea:%i",cantidad_asientos);
														gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("                            %d   ",i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
														textcolor(12);

														gotoxy(30,6);cprintf("Asientos restantes por elegir: %d",c_asientos_copy);
														textcolor(4);
														gotoxy(26,18);cprintf("Ingrese la fila del asiento: ");
														scanf("%d",&fila_pedida);
														gotoxy(26,19);cprintf("Ingrese la columna del asiento: ");
														scanf("%d",&columna_pedida);
														/*if((fila_pedida!=1)&&(fila_pedida!=2)&&(fila_pedida!=3)&&(fila_pedida!=4)&&(columna_pedida!=1)&&(columna_pedida!=2)&&(columna_pedida!=3)&&(columna_pedida!=4)&&(columna_pedida!=5))
															{printf("Dato no valido");getch();};*/
														if(asiento[fila_pedida-1][columna_pedida-1]=='+'){
															gotoxy(25,21);textcolor(RED);cprintf("ESTE ASIENTO YA SE ENCUENTRA RESERVADO");
															gotoxy(26,22);textcolor(RED);cprintf("      INTENTE NUEVAMENTE      ");
															getch();}
														if(asiento[fila_pedida-1][columna_pedida-1]=='0'&& fila_pedida>=1 && columna_pedida<=5 && columna_pedida>=1 && fila_pedida<=4){
														asiento[fila_pedida-1][columna_pedida-1]='+';
														c_asientos_copy--;
														asientos_libres--;
														asientos_usados++;
														gotoxy(26,21);cprintf("Asientos reservado con exito");getch();}
													}while(c_asientos_copy>0);
												}
											}
												if (bandera20==1)
												{
												do{
												clrscr();textcolor(7);
												gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir);}while((seguir!='s')&&(seguir!='S')&&(seguir!='n')&&(seguir!='N'));
												if((seguir=='s') ||(seguir=='S')){bandera2=1;}if ((seguir=='n')||(seguir=='N')){bandera2=0;}
												if(bandera2==1){cartelera();}
												if(bandera2==0){clrscr();}}

										break;/*Solicitar asientos peli 1 hora 1 */

										case 2:
											clrscr();
									             pintar4();textcolor(3);
												 gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
									           
									          textcolor(6);
												 gotoxy(30,5);cprintf("Asientos disponibles: %d\n",asientos_libres);
												gotoxy(30,7);cprintf("Asientos usados: %d\n",asientos_usados);
												gotoxy(27,22);cprintf("Presione una tecla para continuar");
												getch();
												do{
													clrscr();textcolor(7);
													gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir);}while((seguir!='s')&&(seguir!='S')&&(seguir!='n')&&(seguir!='N'));
													if((seguir=='s') ||(seguir=='S')){bandera2=1;}if ((seguir=='n')||(seguir=='N')){bandera2=0;}
													if (bandera2==1){cartelera();}
													if(bandera2==0){clrscr();}

										break;/*Mostrar asientos peli 1 hora 1*/
										case 3:
										cartelera();
										break;/*Volver a cartelera desde asientos peli 1 hora 1 */
										case 4:
										clrscr();
										break;/*Salir desde asiento de pelicula 1 hora 1*/
									}/*Opciones segun asientos de pelicula 1 hora 1*/

      		      			break;/*11:30am pel 1*/

      		      			case 2:

      		      				do{
								fflush(stdin);
								clrscr();
								pintar();
								mensajeasientos();
								gotoxy(50,21);cprintf("¯");scanf("%f",&as);
								}while((as!=1)&&(as!=2)&&(as!=3)&&(as!=4));

									switch(as){

										case 1:
												if(asientos_libres2==0)  /*Validacion nueva*/
																		{
																			bandera21=0;
																		}else{bandera21=1;}

												if(bandera21==0){clrscr();textcolor(1);gotoxy(34,10);cprintf("\nFunci¢n iniciada");gotoxy(27,20);cprintf("Presione una tecla para continuar");getch();cartelera();}

											if(bandera21==1){
												do{
													do{clrscr();fflush(stdin);pintar4(),textcolor(3);
												gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento2[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
														gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea: ");
														gotoxy(63,5);scanf("%d",&cantidad_asientos2);
												if((cantidad_asientos2<=0)||(cantidad_asientos2>20)){bandera3=0;}else{bandera3=1;}
													}while(bandera3==0);
												}while((asientos_libres2!=0) && (cantidad_asientos2>asientos_libres2));
											}
											if(bandera3==1){
												c_asientos_copy2=cantidad_asientos2;
												if((asientos_libres2!=0) && (cantidad_asientos2<=asientos_libres2)){
													do{clrscr();fflush(stdin);textcolor(6);
												gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("                            %d   ",i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento2[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
														textcolor(12);
														gotoxy(30,6);cprintf("Asientos restantes por elegir: %d",c_asientos_copy2);
														textcolor(4);
														gotoxy(26,18);cprintf("Ingrese la fila del asiento: ");
														scanf("%d",&fila_pedida2);
														gotoxy(26,19);cprintf("Ingrese la columna del asiento: ");
														scanf("%d",&columna_pedida2);
														/*if((fila_pedida2!=1)&&(fila_pedida2!=2)&&(fila_pedida2!=3)&&(fila_pedida2!=4)&&(columna_pedida2!=1)&&(columna_pedida2!=2)&&(columna_pedida2!=3)&&(columna_pedida2!=4)&&(columna_pedida2!=5))
															{printf("Dato no valido");getch();};*/
														if(asiento2[fila_pedida2-1][columna_pedida2-1]=='+'){
															gotoxy(25,21);textcolor(RED);cprintf("ESTE ASIENTO YA SE ENCUENTRA RESERVADO");
															gotoxy(26,22);textcolor(RED);cprintf("      INTENTE NUEVAMENTE      ");
															getch();}
													if(asiento2[fila_pedida2-1][columna_pedida2-1]=='0'&& fila_pedida2>=1 && columna_pedida2<=5 && columna_pedida2>=1 && fila_pedida2<=4){
														asiento2[fila_pedida2-1][columna_pedida2-1]='+';
														c_asientos_copy2--;
														asientos_libres2--;
														asientos_usados2++;
														gotoxy(26,21);cprintf("Asientos reservado con exito");getch();}
													}while(c_asientos_copy2>0);
												}
											}
												if (bandera21==1)
												{
												do{
												clrscr();textcolor(7);
												gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir2);}while((seguir2!='s')&&(seguir2!='S')&&(seguir2!='n')&&(seguir2!='N'));
												if((seguir2=='s') ||(seguir2=='S')){bandera4=1;}if ((seguir2=='n')||(seguir2=='N')){bandera4=0;}
												if(bandera4==1){cartelera();}
												if(bandera4==0){clrscr();}}
										break;/*Solicitar asientos de peli 1 hora 2 */

										case 2:
												clrscr();
									             pintar4();textcolor(3);
												 gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento2[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
									           
									        		textcolor(6);
													gotoxy(30,5);cprintf("Asientos disponibles: %d\n",asientos_libres2);
													gotoxy(30,7);cprintf("Asientos usados: %d\n",asientos_usados2);
													gotoxy(27,22);cprintf("Presione una tecla para continuar");
													getch();
												do{
													clrscr();textcolor(7);
													gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir2);}while((seguir2!='s')&&(seguir2!='S')&&(seguir2!='n')&&(seguir2!='N'));
													if((seguir2=='s') ||(seguir2=='S')){bandera4=1;}if ((seguir2=='n')||(seguir2=='N')){bandera4=0;}
													if (bandera4==1){cartelera();}
													if(bandera4==0){clrscr();}
										break;/*Mostrar asientos de peli 1 hora 2*/

										case 3:
										cartelera();
										break;/*Volver a cartelera desde asientos peli 1 hora 2 */

										case 4:
										clrscr();
										break;/*Salir desde asiento de pelicula 1 hora 2*/

									}/*Opciones segun asientos de pelicula 1 hora 2*/

      		      			break;/*2:00pm pel 1*/

      		      		case 3:
      		      			cartelera();
						break;/*Volver cartelera desde horario pelicula 1*/

      		      		}/*Horario de pelicula 1*/

				break;/*Pelicula 1*/

				case 2:

						do{
					fflush(stdin);
					clrscr();
					pintar2();
					terminator();
					gotoxy(58,17);cprintf("¯");scanf("%f",&p2h);
        	    	}while((p2h!=1)&&(p2h!=2)&&(p2h!=3));


        	    		switch(p2h){

        	    			case 1:

								do{
								fflush(stdin);
								clrscr();
								pintar();
								textcolor(3);
								mensajeasientos();
								gotoxy(50,21);cprintf("¯");scanf("%f",&as2);
								}while((as2!=1)&&(as2!=2)&&(as2!=3)&&(as2!=4));

									switch(as2){

										case 1:
												if(asientos_libres3==0)  /*Validacion nueva*/
																		{
																			bandera22=0;
																		}else{bandera22=1;}

													if(bandera22==0){clrscr();textcolor(1);gotoxy(34,10);cprintf("\nFunci¢n iniciada");gotoxy(27,20);cprintf("Presione una tecla para continuar");getch();cartelera();}

												if(bandera22==1)
												{
													do{fflush(stdin);
														do{clrscr();fflush(stdin);pintar4(),textcolor(3);
												gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento3[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
															gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea: ");
															gotoxy(63,5);scanf("%d",&cantidad_asientos3);
															if((cantidad_asientos3<=0)||(cantidad_asientos3>20)){bandera5=0;}else{bandera5=1;}
														}while(bandera5==0);
													}while((asientos_libres3!=0) && (cantidad_asientos3>asientos_libres3));
												}
												if(bandera5==1)
												{
													c_asientos_copy3=cantidad_asientos3;
													if((asientos_libres3!=0) && (cantidad_asientos3<=asientos_libres3))
													{
														do{clrscr();fflush(stdin);
												gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("                            %d   ",i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento3[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
															textcolor(12);

															gotoxy(30,6);cprintf("Asientos restantes por elegir: %d",c_asientos_copy3);
															textcolor(4);
															gotoxy(26,18);cprintf("Ingrese la fila del asiento: ");
															scanf("%d",&fila_pedida3);
															gotoxy(26,19);cprintf("Ingrese la columna del asiento: ");
															scanf("%d",&columna_pedida3);
															/*if((fila_pedida!=1)&&(fila_pedida!=2)&&(fila_pedida!=3)&&(fila_pedida!=4)&&(columna_pedida!=1)&&(columna_pedida!=2)&&(columna_pedida!=3)&&(columna_pedida!=4)&&(columna_pedida!=5))
																{printf("Dato no valido");getch();};*/
															if(asiento3[fila_pedida3-1][columna_pedida3-1]=='+'){
																gotoxy(25,21);textcolor(RED);cprintf("ESTE ASIENTO YA SE ENCUENTRA RESERVADO");
																gotoxy(26,22);textcolor(RED);cprintf("      INTENTE NUEVAMENTE      ");
																getch();}
															if(asiento3[fila_pedida3-1][columna_pedida3-1]=='0'&& fila_pedida3>=1 && columna_pedida3<=5 && columna_pedida3>=1 && fila_pedida3<=4){
															asiento3[fila_pedida3-1][columna_pedida3-1]='+';
															c_asientos_copy3--;
															asientos_libres3--;
															asientos_usados3++;
															gotoxy(26,21);cprintf("Asientos reservado con exito");getch();}
														}while(c_asientos_copy3>0);
													}
												}
													if (bandera22==1)
													{
													do{
													clrscr();textcolor(7);
													gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir3);}while((seguir3!='s')&&(seguir3!='S')&&(seguir3!='n')&&(seguir3!='N'));
													if((seguir3=='s') ||(seguir3=='S')){bandera6=1;}if ((seguir3=='n')||(seguir3=='N')){bandera6=0;}
													if(bandera6==1){cartelera();}
													if(bandera6==0){clrscr();}}
										break;/*Solicitar asientos pelicula 2 */

										case 2:
												clrscr();
									             pintar4();textcolor(3);
												 gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento3[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
									           
									          textcolor(6);
												 gotoxy(30,5);cprintf("Asientos disponibles: %d\n",asientos_libres3);
												gotoxy(30,7);cprintf("Asientos usados: %d\n",asientos_usados3);
												gotoxy(27,22);cprintf("Presione una tecla para continuar");
												getch();
												do{
													clrscr();textcolor(7);
													gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir3);}while((seguir3!='s')&&(seguir3!='S')&&(seguir3!='n')&&(seguir3!='N'));
													if((seguir=='s') ||(seguir=='S')){bandera2=1;}if ((seguir=='n')||(seguir=='N')){bandera2=0;}
													if (bandera6==1){cartelera();}
													if(bandera6==0){clrscr();}

										break;/*Mostrar asientos pelicula 2*/

										case 3:
										cartelera();
										break;/*Volver a cartelera desde asientos  de pelicula 2*/

										case 4:
										clrscr();
										break;/*Salir desde asientos de pelicula 2*/

									}/*Opciones segun asientos de pelicula 2 hora 1*/

        	    			break;/*12:30pm pelicula 2*/

							case 2:

								do{
								fflush(stdin);
								clrscr();
								pintar();
								mensajeasientos();
								gotoxy(50,21);cprintf("¯");scanf("%f",&as2);
								}while((as2!=1)&&(as2!=2)&&(as2!=3)&&(as2!=4));

									switch(as2){

											case 1:
														if(asientos_libres4==0)  /*Validacion nueva*/
																			{
																				bandera23=0;
																			}else{bandera23=1;}

														if(bandera23==0){clrscr();textcolor(1);gotoxy(34,10);cprintf("\nFunci¢n iniciada");gotoxy(27,20);cprintf("Presione una tecla para continuar");getch();cartelera();}

												if(bandera23==1)
												{
													do{fflush(stdin);
														do{clrscr();fflush(stdin);pintar4(),textcolor(3);
												gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento4[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }

															gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea: ");
															gotoxy(63,5);scanf("%d",&cantidad_asientos4);
															if((cantidad_asientos4<=0)||(cantidad_asientos4>20)){bandera7=0;}else{bandera7=1;}
														}while(bandera7==0);
													}while((asientos_libres4!=0) && (cantidad_asientos4>asientos_libres4));
												}
												if(bandera7==1)
												{
													c_asientos_copy4=cantidad_asientos4;
													if((asientos_libres4!=0) && (cantidad_asientos4<=asientos_libres4))
													{
														do{clrscr();fflush(stdin);
															textcolor(12);
																											gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("                            %d   ",i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento4[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
															gotoxy(30,6);cprintf("Asientos restantes por elegir: %d",c_asientos_copy4);
															textcolor(4);
															gotoxy(26,18);cprintf("Ingrese la fila del asiento: ");
															scanf("%d",&fila_pedida4);
															gotoxy(26,19);cprintf("Ingrese la columna del asiento: ");
															scanf("%d",&columna_pedida4);
															/*if((fila_pedida!=1)&&(fila_pedida!=2)&&(fila_pedida!=3)&&(fila_pedida!=4)&&(columna_pedida!=1)&&(columna_pedida!=2)&&(columna_pedida!=3)&&(columna_pedida!=4)&&(columna_pedida!=5))
																{printf("Dato no valido");getch();};*/
															if(asiento4[fila_pedida4-1][columna_pedida4-1]=='+'){
																gotoxy(25,21);textcolor(RED);cprintf("ESTE ASIENTO YA SE ENCUENTRA RESERVADO");
																gotoxy(26,22);textcolor(RED);cprintf("      INTENTE NUEVAMENTE      ");
																getch();}
															if(asiento4[fila_pedida4-1][columna_pedida4-1]=='0'&& fila_pedida4>=1 && columna_pedida4<=5 && columna_pedida4>=1 && fila_pedida4<=4){
															asiento4[fila_pedida4-1][columna_pedida4-1]='+';
															c_asientos_copy4--;
															asientos_libres4--;
															asientos_usados4++;
															gotoxy(26,21);cprintf("Asientos reservado con exito");getch();}
														}while(c_asientos_copy4>0);
													}
												}
													if (bandera23==1)
													{
													do{
													clrscr();textcolor(7);
													gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir4);}while((seguir4!='s')&&(seguir4!='S')&&(seguir4!='n')&&(seguir4!='N'));
													if((seguir4=='s') ||(seguir4=='S')){bandera8=1;}if ((seguir4=='n')||(seguir4=='N')){bandera8=0;}
													if(bandera8==1){cartelera();}
													if(bandera8==0){clrscr();}}
					

										break;/*Solicitar asientos pelicula 2 hora 2 */

										case 2:

													clrscr();
									             pintar4();textcolor(3);
									             												 gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento4[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
									           
									          textcolor(6);
												 gotoxy(30,5);cprintf("Asientos disponibles: %d\n",asientos_libres4);
												gotoxy(30,7);cprintf("Asientos usados: %d\n",asientos_usados4);
												gotoxy(27,22);cprintf("Presione una tecla para continuar");
												getch();
												do{
													clrscr();textcolor(7);
													gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir4);}while((seguir4!='s')&&(seguir4!='S')&&(seguir4!='n')&&(seguir4!='N'));
													if((seguir4=='s') ||(seguir4=='S')){bandera8=1;}if ((seguir4=='n')||(seguir4=='N')){bandera8=0;}
													if (bandera8==1){cartelera();}
													if(bandera8==0){clrscr();}
										break;/*Mostrar asientos pelicula 2 hora 2*/

										case 3:
										cartelera();
										break;/*Volver a cartelera desde asientos  de pelicula 2 hora 2*/

										case 4:
										clrscr();
										break;/*Salir desde asientos de pelicula 2 hora 2*/

									}/*Opciones segun asientos de pelicula 2 hora 2*/
        	    			break;/*5:30pm pelicula 2*/


        	    			case 3:
							cartelera();

        	    			break;/*volver cartelera desde horario de pelicula 2 hora 2*/

        	    		}/*Horario de pelicula 2*/


				break;/*Pelicula 2*/

				case 3:

						do{
						fflush(stdin);
						clrscr();
						pintar2();
						malefica();
						gotoxy(58,17);cprintf("¯");scanf("%f",&p3h);
						}while((p3h!=1)&&(p3h!=2)&&(p3h!=3));

						switch(p3h){

							case 1:

								do{
								fflush(stdin);
								clrscr();
								pintar();
								mensajeasientos();
								gotoxy(50,21);cprintf("¯");scanf("%f",&as3);
								}while((as3!=1)&&(as3!=2)&&(as3!=3)&&(as3!=4));

									switch(as3){

										case 1:
												if(asientos_libres5==0){ /*Validacion nueva*/
																			bandera24=0;
																		}else{bandera24=1;}

													if(bandera24==0){clrscr();textcolor(1);gotoxy(34,10);cprintf("\nFunci¢n iniciada");gotoxy(27,20);cprintf("Presione una tecla para continuar");getch();cartelera();}

											if(bandera24==1)
											{
												do{fflush(stdin);
													do{clrscr();fflush(stdin);pintar4(),textcolor(3);
																	gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento5[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }

														gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea: ");
														gotoxy(63,5);scanf("%d",&cantidad_asientos5);
														if((cantidad_asientos5<=0)||(cantidad_asientos5>20)){bandera9=0;}else{bandera9=1;}
													}while(bandera9==0);
												}while((asientos_libres5!=0) && (cantidad_asientos5>asientos_libres5));
											}
											if(bandera9==1)
											{
												c_asientos_copy5=cantidad_asientos5;
												if((asientos_libres5!=0) && (cantidad_asientos5<=asientos_libres5))
												{
													do{clrscr();fflush(stdin);
														textcolor(6);gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea:%i",cantidad_asientos5);
												gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("                            %d   ",i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento5[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
														textcolor(12);

														gotoxy(30,6);cprintf("Asientos restantes por elegir: %d",c_asientos_copy5);
														textcolor(4);
														gotoxy(26,18);cprintf("Ingrese la fila del asiento: ");
														scanf("%d",&fila_pedida5);
														gotoxy(26,19);cprintf("Ingrese la columna del asiento: ");
														scanf("%d",&columna_pedida5);
														/*if((fila_pedida!=1)&&(fila_pedida!=2)&&(fila_pedida!=3)&&(fila_pedida!=4)&&(columna_pedida!=1)&&(columna_pedida!=2)&&(columna_pedida!=3)&&(columna_pedida!=4)&&(columna_pedida!=5))
															{printf("Dato no valido");getch();};*/
														if(asiento5[fila_pedida5-1][columna_pedida5-1]=='+'){
															gotoxy(25,21);textcolor(RED);cprintf("ESTE ASIENTO YA SE ENCUENTRA RESERVADO");
															gotoxy(26,22);textcolor(RED);cprintf("      INTENTE NUEVAMENTE      ");
															getch();}
														if(asiento5[fila_pedida5-1][columna_pedida5-1]=='0'&& fila_pedida5>=1 && columna_pedida5<=5 && columna_pedida5>=1 && fila_pedida5<=4){
														asiento5[fila_pedida5-1][columna_pedida5-1]='+';
														c_asientos_copy5--;
														asientos_libres5--;
														asientos_usados5++;
														gotoxy(26,21);cprintf("Asientos reservado con exito");getch();}
													}while(c_asientos_copy5>0);
												}
											}
												if (bandera24==1)
												{
												do{
												clrscr();textcolor(7);
												gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir5);}while((seguir5!='s')&&(seguir5!='S')&&(seguir5!='n')&&(seguir5!='N'));
												if((seguir5=='s') ||(seguir5=='S')){bandera10=1;}if ((seguir5=='n')||(seguir5=='N')){bandera10=0;}
												if(bandera10==1){cartelera();}
												if(bandera10==0){clrscr();}}
										break;/*Solicitar asientos pelicula 3 hora 1 */

										case 2:
													clrscr();
									             pintar4();textcolor(3);
												  gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento5[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
									           
									           
									          textcolor(6);
												 gotoxy(30,5);cprintf("Asientos disponibles: %d\n",asientos_libres5);
												gotoxy(30,7);cprintf("Asientos usados: %d\n",asientos_usados5);
												gotoxy(27,22);cprintf("Presione una tecla para continuar");
												getch();
												do{
													clrscr();textcolor(7);
													gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir5);}while((seguir5!='s')&&(seguir5!='S')&&(seguir5!='n')&&(seguir5!='N'));
													if((seguir5=='s') ||(seguir5=='S')){bandera10=1;}if ((seguir5=='n')||(seguir5=='N')){bandera10=0;}
													if (bandera10==1){cartelera();}
													if(bandera10==0){clrscr();}
										
										break;/*Mostrar asientos pelicula 3 hora 1*/

										case 3:
										cartelera();
										break;/*Volver a cartelera desde asientos  de pelicula 3 hora 1*/

										case 4:
										clrscr();
										break;/*Salir desde asientos de pelicula 3 hora 1*/

									}/*Opciones segun asientos de pelicula 3 hora 1*/

        	    			break;/*1:30pm pelicula 3*/

							case 2:
									do{
								fflush(stdin);
								clrscr();
								pintar();
								mensajeasientos();
								gotoxy(50,21);cprintf("¯");scanf("%f",&as3);
								}while((as3!=1)&&(as3!=2)&&(as3!=3)&&(as3!=4));

									switch(as3){

										case 1:
													if(asientos_libres6==0)  /*Validacion nueva*/
																		{
																			bandera25=0;
																		}else{bandera25=1;}

												if(bandera25==0){clrscr();textcolor(1);gotoxy(34,10);cprintf("\nFunci¢n iniciada");gotoxy(27,20);cprintf("Presione una tecla para continuar");getch();cartelera();}

											if(bandera25==1){
												do{
													do{clrscr();fflush(stdin);pintar4(),textcolor(3);
												gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento6[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }

														gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea: ");
														gotoxy(63,5);scanf("%d",&cantidad_asientos6);
												if((cantidad_asientos6<=0)||(cantidad_asientos6>20)){bandera11=0;}else{bandera11=1;}
													}while(bandera11==0);
												}while((asientos_libres6!=0) && (cantidad_asientos6>asientos_libres6));
											}
											if(bandera10==1){
												c_asientos_copy6=cantidad_asientos6;
												if((asientos_libres6!=0) && (cantidad_asientos6<=asientos_libres6)){
													do{clrscr();fflush(stdin);textcolor(6);
														gotoxy(20,5);cprintf("Ingrese la cantidad de asientos que desea:%i",cantidad_asientos6);textcolor(3);
																										gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("                            %d   ",i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento6[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
														textcolor(12);

														gotoxy(30,6);cprintf("Asientos restantes por elegir: %d",c_asientos_copy6);
														textcolor(4);
														gotoxy(26,18);cprintf("Ingrese la fila del asiento: ");
														scanf("%d",&fila_pedida6);
														gotoxy(26,19);cprintf("Ingrese la columna del asiento: ");
														scanf("%d",&columna_pedida6);
														/*if((fila_pedida2!=1)&&(fila_pedida2!=2)&&(fila_pedida2!=3)&&(fila_pedida2!=4)&&(columna_pedida2!=1)&&(columna_pedida2!=2)&&(columna_pedida2!=3)&&(columna_pedida2!=4)&&(columna_pedida2!=5))
															{printf("Dato no valido");getch();};*/
														if(asiento6[fila_pedida6-1][columna_pedida6-1]=='+' &&  fila_pedida6>=1 && columna_pedida6<=5 && columna_pedida6>=1 && fila_pedida6<=4){
															gotoxy(25,21);textcolor(RED);cprintf("ESTE ASIENTO YA SE ENCUENTRA RESERVADO");
															gotoxy(26,22);textcolor(RED);cprintf("      INTENTE NUEVAMENTE      ");
															getch();}
													if(asiento6[fila_pedida6-1][columna_pedida6-1]=='0'&& fila_pedida6>=1 && columna_pedida6<=5 && columna_pedida6>=1 && fila_pedida6<=4){
														asiento6[fila_pedida6-1][columna_pedida6-1]='+';
														c_asientos_copy6--;
														asientos_libres6--;
														asientos_usados6++;
														gotoxy(26,21);cprintf("Asientos reservado con exito");getch();}
													}while(c_asientos_copy6>0);
												}
											}
												if(bandera25==1)
												{
												do{
												clrscr();textcolor(7);
												gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir6);}while((seguir6!='s')&&(seguir6!='S')&&(seguir6!='n')&&(seguir6!='N'));
												if((seguir6=='s') ||(seguir6=='S')){bandera12=1;}if ((seguir6=='n')||(seguir6=='N')){bandera12=0;}
												if(bandera12==1){cartelera();}
												if(bandera12==0){clrscr();}}
										break;/*Solicitar asientos pelicula 3 hora 2 */

										case 2:
													clrscr();
									             pintar4();textcolor(3);
									             												 gotoxy(28,11);textcolor(WHITE);cprintf("");/*Alineacion del numero de columnas*/
												for(i=0;i<5;i++)
												{printf("     %d",i+1);									 	}
											 	printf("\n");
											 	printf("\n");
										        for(i=0;i<4;i++)
												{
													printf("%c                           %d   ",186,i+1);  /*Impresion del numero de filas*/
													for(j=0;j<5;j++)
													{
													textcolor(7);cprintf("%c     ",asiento6[i][j]); /*Impresion de los asientos y el espacio entre ellos*/
										            }
										        	printf("\n");
										        }
									           
									          textcolor(6);
												 gotoxy(30,5);cprintf("Asientos disponibles: %d\n",asientos_libres6);
												gotoxy(30,7);cprintf("Asientos usados: %d\n",asientos_usados6);
												gotoxy(27,22);cprintf("Presione una tecla para continuar");
												getch();
												do{
													clrscr();textcolor(7);
													gotoxy(22,11);cprintf("Desea continuar con el programa(S/N):");gotoxy(60,11);scanf("%c",&seguir6);}while((seguir6!='s')&&(seguir6!='S')&&(seguir6!='n')&&(seguir6!='N'));
													if((seguir6=='s') ||(seguir6=='S')){bandera12=1;}if ((seguir6=='n')||(seguir6=='N')){bandera12=0;}
													if (bandera12==1){cartelera();}
													if(bandera12==0){clrscr();}
										break;/*Mostrar asientos pelicula 3 hora 2*/

										case 3:
										cartelera();
										break;/*Volver a cartelera desde asientos  de pelicula 3 hora 2*/

										case 4:
										clrscr();
										break;/*Salir desde asientos de pelicula 3 hora 2*/

									}/*Opciones segun asientos de pelicula 3 hora 2*/
        	    			break;/*7:30pm pelicula 2*/

        	    			case 3:
        	    			cartelera();
        	    			break;/*volver cartelera desde horario de pelicula 3*/

								}/*Horario de pelicula 3*/

				break;/*Pelicula 3*/

				case 4:
				clrscr();
				break;/*Salir del menu de peliculas */
			}/*Cierra menu de peliculas*/
	return 0;			
}