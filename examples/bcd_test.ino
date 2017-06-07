// Importamos la libreria primero de todo
#include <bcdlib.h>

void setup() {
  // Inicializamos el Monitor Serial para mostrar resultados de las pruebas
  Serial.begin(9600);
  Serial.println("Ingrese un numero de 0 a 255");
}

void loop() {
  // Uso la clase base String para facilitar el codigo
  String texto;
  byte bcd, dec;
  
  // Espero que ingresen un numero
  if (Serial.available() > 0) { 
    texto = Serial.readString();
  
    // Si el numero está entre 0 y 99 procedo
    if ((byte)texto.toInt() >= 0 && (byte)texto.toInt() <= 99) {
      // Muestro el numero leido  
      Serial.print(String("Numero leido: ") + texto + ", en HEX: 0x");
      Serial.println(texto.toInt(), HEX);
      
      // Convierto el numero a BCD y lo muestro
      bcd = bcdlib::dec2bcd((byte)texto.toInt());
      Serial.println(String("Convertido a BCD: ") + bcd + " o 0x");
      Serial.println(bcd, HEX);
      
      // Convierto el numero BCD de regreso a decimal y lo muestro
      dec = bcdlib::bcd2dec(bcd);
      Serial.println(String("Convertido de regreso a decimal: ") + dec);
      
      // Permito intentar nuevamente 
      Serial.println();
      Serial.println("Ingrese un numero de 0 a 255");
    }
  }
}

