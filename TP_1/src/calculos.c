#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculos.h"


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
	if(kilometros > 0){
	precioFinal = precio / kilometros;
	}
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
