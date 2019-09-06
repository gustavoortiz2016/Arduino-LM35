#include <lm35.h>
//Se llama a la libreria y se le pasa como variable el pin de entrada del sensor en este caso A0
lm35 LM35(0);
void setup() {
  // Configuramos el puerto serial a 9600 bps
  Serial.begin(9600);
}

void loop() {
  //Se envia el dato
  Serial.println(String(LM35.toCelsius())+"Grados Celsius\n");
  // Esperamos un tiempo para repetir el loop
  delay(1000);
}
