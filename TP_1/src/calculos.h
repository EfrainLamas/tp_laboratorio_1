/*
 * calculos.h
 *
 *  Created on: 29 jun. 2022
 *      Author: Isaias Efrain Lamas
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_



/// @fn float debitCard(float)
/// @brief recibe un precio y le aplica un descuento de un 10%
///
/// @param recibe el precio
/// @return retorna el precio con el descuento aplicado
float debitCard(float);


/// @fn float creditCard(float)
/// @brief recibe el precio ingresado y le suma un interes de un 25%
///
/// @param recibe el precio
/// @return retorna el precio con el interes aplicado
float creditCard(float);


/// @fn float btcPrice(float)
/// @brief recibe el precio ingresado y lo divide al precio del bitcoin
///
/// @param recibe el precio
/// @return retorna el precio equivalente en bitcoins
float btcPrice(float);


/// @fn float unitPrice(float, float)
/// @brief recibe el precio ingresado y los kilometros para dividirlos y obtener el precio por kilometro
///
/// @param recibe el precio ingresado
/// @param recibe los kilometros
/// @return retorna el valor por kilometro
float unitPrice(float, float);


/// @fn float difference(float, float)
/// @brief recibe el precio de las dos aerolineas y los resta para obtener la diferencia y se asegura de no entregar un numero negativo
///
/// @param precio de aerolineas argentinas
/// @param precio de latam
/// @return retorna la diferencia entre las dos
float difference(float, float);

#endif /* CALCULOS_H_ */
