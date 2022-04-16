
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"


int mainMenu(float kilometros, float precioArgentinas, float precioLatam){
	int opciones;
		printf(" *** Menu de Opciones ***\n\n");
	    printf("1- Ingresar Kilometros: %2.f\n", kilometros);
	    printf("2- Ingresar precios de vuelos: Aerolineas Argetinas = %2.f Latam = %2.f\n", precioArgentinas, precioLatam);
	    printf("3- Calcular todos los costos\n");
	    printf("4- Informar resultados\n");
	    printf("5- Carga forzada de datos\n");
	    printf("6- Salir\n");
	    printf("Ingrese una opcion:\n");
	    fflush(stdin);
	    scanf("%d", &opciones);

	    return opciones;
}


float valKm(){
	float kilometros;
	int cant;
	printf("Ingresar Kilometros:\n");
	fflush(stdin);
	cant = scanf("%f", &kilometros);
	while(cant == 0 || kilometros < 1)
	{
		fflush(stdin);
		printf("Ocurrio un error, por favor ingrese los kilometros nuevamente:\n");
		cant = scanf("%f", &kilometros);
	}
	return kilometros;
}


float subMenu(float precioArgentinas, float precioLatam)
{	int eleccion;
	int cant;
	printf("Ingresar Precio de Vuelos: Aerolineas Argentinas = %2.f Latam = %2.f\n", precioArgentinas, precioLatam);
	printf("1-Aeorlineas Argetninas=\n");
	printf("2-Latam=\n");
	printf("Que opcion desea?\n");
	fflush(stdin);
	cant = scanf("%d", &eleccion);
	while(cant == 0 || eleccion > 2){
		printf("Ocurrio un error, ingrese la opcion nuevamente:\n");
		fflush(stdin);
		cant = scanf("%d", &eleccion);
	}
	return eleccion;
}

int ingressPrice(int opcion)
{
	float precio;
	int cant;
	if(opcion == 1)
	{
		printf("Ingrese el precio de Aerolineas Argentinas:\n");
		fflush(stdin);
		cant = scanf("%f", &precio);
	}
	else{
		printf("Ingrese el precio de Latam:\n");
		fflush(stdin);
		cant = scanf("%f", &precio);
	}
	while(cant == 0 || precio < 1){
		printf("Error, ingrese el precio nuevamente:\n");
		fflush(stdin);
		cant = scanf("%f", &precio);
	}
	return precio;
}

float debitCard(float precio){
	float precioFinal;
	float descuento;
	descuento = (precio * 10) / 100;
	precioFinal = precio - descuento;
	return precioFinal;
}

float creditCard(float precio){
	float precioFinal;
	float interes;
	interes = (precio * 25) / 100;
	precioFinal = precio + interes;
	return precioFinal;
}

float btcPrice(float precio){
	float precioFinal;
	precioFinal = precio / 4607166.98;
	return precioFinal;
}

float unitPrice(float precio, float kilometros){
	float precioFinal;
	precioFinal = precio / kilometros;
	return precioFinal;
}

float difference(float argentinas, float latam){
	float diferencia;
	float mayor;
	float menor;

	if(argentinas > latam){
		mayor = argentinas;
		menor = latam;
	}else{
		mayor = latam;
		menor = argentinas;
	}
	diferencia = mayor - menor;
	return diferencia;
}

void mostrar(float precioLatam, float precioArgentinas, float kilometros, float precioDebitoLatam, float precioCreditoLatam, float precioBtcLatam, float precioUnitarioLatama, float precioDebitoAerolineasA,
		float precioCreditoAerolineasA, float precioBtcAerolineasA, float precioUnitarioAerolineasA, float diferenciaPrecio){
	printf("Kilometros Ingresados: %.2f\n\n", kilometros);
	printf("Precio Latam: $%.2f\n", precioLatam);
	printf("a) Precio con tarjeta de debito: $%.2f\n", precioDebitoLatam);
	printf("b) Precio con tarjeta de credito: $%.2f\n", precioCreditoLatam);
	printf("c) Precio pagando con bitcoin: $%.5f\n", precioBtcLatam);
	printf("d) Precio Unitario: $%.2f\n\n", precioUnitarioLatama);
	printf("Precio Aerolineas Argentinas: $%.2f\n", precioArgentinas);
	printf("a) Precio con tarjeta de debito: $%.2f\n", precioDebitoAerolineasA);
	printf("b) Precio con tarjeta de credito: $%.2f\n", precioCreditoAerolineasA);
	printf("c) Precio pagando con bitcoin: $%.5f\n", precioBtcAerolineasA);
	printf("d) Precio Unitario: $%.2f\n\n", precioUnitarioAerolineasA);
	printf("La diferencia de precio es: $%.2f\n", diferenciaPrecio);
}

