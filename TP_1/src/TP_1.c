/*
 ============================================================================
 Name        : TP_1.c
 Author      : Isaias Efrain Lamas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(void){
	setbuf(stdout, NULL);
	int flagKilometros = 0,
		opciones,
		opcionAerolineas,
		flagPrecio = 0;
	float kilometros,
		  precioArgentinas,
		  precioLatam,
		  precioDebitoAerolineasA,
		  precioDebitoLatam,
		  precioCreditoAerolineasA,
		  precioCreditoLatam,
		  precioBtcAerolineasA,
		  precioBtcLatam,
		  precioUnitarioAerolineasA,
		  precioUnitarioLatama,
		  diferenciaPrecio;
	char salir = 'n';
	do
	{
		opciones = mainMenu(kilometros, precioArgentinas, precioLatam);
		switch(opciones){
		case 1:
			kilometros = valKm();
			flagKilometros = 1;
			system("pause");
			break;
		case 2:
			opcionAerolineas = subMenu(precioArgentinas, precioLatam);
				if(opcionAerolineas == 1){
				precioArgentinas = ingressPrice(opcionAerolineas);
				precioLatam = ingressPrice(2);
				flagPrecio = 1;
				}else if(opcionAerolineas == 2){
				precioLatam = ingressPrice(opcionAerolineas);
				precioArgentinas = ingressPrice(1);
				flagPrecio = 1;
				}
				system("pause");
			break;
		case 3:
			if(flagPrecio == 1 && flagKilometros == 1){
				precioDebitoLatam = debitCard(precioLatam);
				precioCreditoLatam = creditCard(precioLatam);
				precioBtcLatam = btcPrice(precioLatam);
				precioUnitarioLatama = unitPrice(precioLatam, kilometros);
				precioDebitoAerolineasA = debitCard(precioArgentinas);
				precioCreditoAerolineasA = creditCard(precioArgentinas);
				precioBtcAerolineasA = btcPrice(precioArgentinas);
				precioUnitarioAerolineasA = unitPrice(precioArgentinas, kilometros);
				diferenciaPrecio = difference(precioArgentinas, precioLatam);
				printf("Se calcularon los costos correctamente\n");
			}else{
				printf("Error, no se ingresaron precios o kilometros\n");
			}
			system("pause");
			break;
		case 4:
			mostrar(precioLatam, precioArgentinas, kilometros, precioDebitoLatam, precioCreditoLatam, precioBtcLatam, precioUnitarioLatama, precioDebitoAerolineasA, precioCreditoAerolineasA,
					precioBtcAerolineasA, precioUnitarioAerolineasA, diferenciaPrecio);
			system("pause");
			break;
		case 5:
			kilometros = 7090;
			precioLatam = 159339;
			precioArgentinas = 162965;
			precioDebitoLatam = debitCard(precioLatam);
			precioCreditoLatam = creditCard(precioLatam);
			precioBtcLatam = btcPrice(precioLatam);
			precioUnitarioLatama = unitPrice(precioLatam, kilometros);
			precioDebitoAerolineasA = debitCard(precioArgentinas);
			precioCreditoAerolineasA = creditCard(precioArgentinas);
			precioBtcAerolineasA = btcPrice(precioArgentinas);
			precioUnitarioAerolineasA = unitPrice(precioArgentinas, kilometros);
			diferenciaPrecio = difference(precioArgentinas, precioLatam);
			mostrar(precioLatam, precioArgentinas, kilometros, precioDebitoLatam, precioCreditoLatam, precioBtcLatam, precioUnitarioLatama, precioDebitoAerolineasA, precioCreditoAerolineasA,
								precioBtcAerolineasA, precioUnitarioAerolineasA, diferenciaPrecio);
			system("pause");
			break;
		case 6:
			printf("Deseas Salir?\n ");
					fflush(stdin);
					scanf("%c\n", &salir);
			break;
		default:
			printf("Error, ingrese otra opcion\n");
		}
		system("pause");
	}
	while(salir != 's');
	return EXIT_SUCCESS;
}
