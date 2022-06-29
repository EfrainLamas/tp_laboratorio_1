

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/// @fn int mainMenu(float, float, float)
/// @brief al ejecutarse recibe los precios y kilometros ingresados por el usuario y le solicita una opcion y la retorna
///
/// @param recibe los kms ingresados
/// @param recibe el precio de Aerolineas argentinas
/// @param recibe el precio de Latam para mostrarlo
/// @return retorna la opcion elegida por el usuario
int mainMenu(float, float, float);

/// @fn float valKm()
/// @brief solicita al usuario ingresar los kilometros, los valida, y los retorna
///
/// @return retorna los kilometros ingresados
float valKm();

/// @fn float subMenu(float, float)
/// @brief despliega un submenu que le permite al usuario elegir una aerolinea para asignarle un precio y valida esa opcion; toma los valores de las aerolineas para
/// 	   mostrarlos en el submenu
///
/// @param recibe el precio para Aerolineas Argentinas
/// @param recibe el precio para Latam
/// @return retorna la opcion elegida por el usuario
float subMenu(float, float);

/// @fn int ingressPrice(int)
/// @brief dependiendo de la opcion elegida por el usuario, le pide que ingrese un precio y lo valida
///
/// @param recibe la opcion elegida por el usuario
/// @return retorna el precio de la aerolinea elegida por el usuario
float ingressPrice(int);

/// @fn void mostrar(float, float, float, float, float, float, float, float, float, float, float, float)
/// @brief recibe todos los precio y kilometros para mostrarlos en consola
///
/// @param recibe el precio de latam
/// @param recibe el precio de aerolineas argentinas
/// @param recibe los kilometros
/// @param recibe el precio de latam en debito
/// @param recibe el precio de latam en credito
/// @param recibe el precio en btc de latam
/// @param recibe el precio unitario de latam
/// @param recibe el precio de aerolineas en debito
/// @param recibe el precio de aerolineas en credito
/// @param recibe el precio en btc de aerolineas
/// @param recibe el precio unitario de aerolineas
/// @param recibe la diferencia de precios entre las aerolineas
void mostrar(float, float, float, float, float, float, float, float, float, float, float, float);


#endif /* FUNCIONES_H_ */
