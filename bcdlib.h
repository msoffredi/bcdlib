/*
 * Libreria para convertir numeros de decimal a BCD y viceversa. La libreria
 * esta escrita en C++ en una clase con metodos estaticos para una simple 
 * utilizacion. Las funciones poseen una limitacion de 2 digitos decimales.
 * 
 * Author: Marcelo Soffredi
 * 
 * Versiones: 
 *   
 * v0.0.1 - Jun 7, 2017 - Versión inicial
 */

#ifndef bcdlib_h
#define bcdlib_h

#include "Arduino.h"

class bcdlib {
    
public:
    static byte bcd2dec(byte data);
    static byte dec2bcd(byte data);
    
};

#endif
