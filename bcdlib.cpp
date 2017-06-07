/*
 * Libreria para convertir numeros de decimal a BCD y viceversa. La libreria
 * esta escrita en C++ en una clase con metodos estaticos para una simple 
 * utilizacion. Las funciones poseen una limitacion de 2 digitos decimales.
 * 
 * Autor: Marcelo Soffredi
 * Version: ver bcdlib.h
 * 
 */
#include "bcdlib.h"

/*
 * Metodo/funcion para convertir numeros BCD de 2 digitos a decimal
 * 
 * La forma de usar este metodo es la siguiente:
 * 
 * numero_decimal = bcdlib::bcd2dec(numero_bcd);
 * 
 */
byte bcdlib::bcd2dec(byte data) {
    return (data/16*10)+(data%16);
}

/*
 * Metodo/funcion para convertir numeros decimales de 2 digitos a BCD
 * 
 * La forma de usar este metodo es la siguiente:
 * 
 * numero_bcd = bcdlib::bcd2dec(numero_decimal);
 * 
 */
byte bcdlib::dec2bcd(byte data) {
    return (data/10*16)+(data%10);
}
