#include <SoftwareSerial.h>


SoftwareSerial XbeeSerial(10, 11);

const int led = 13; // pin del LED

char incomingByte; // variable para los datos serie de entrada
char letra;
int i = 0;
int f=0;
void setup() {
  Serial.begin(9600); //conexion al PC
  Serial.println("Xbee Software Serial Test!");
  
  XbeeSerial.begin(9600); //conexion al Xbee shield
  // inicializa pin LED como salida
}

void loop()
{

  if (XbeeSerial.available()) {
 
      incomingByte = XbeeSerial.read();
     if(incomingByte=='H'){
       digitalWrite (led, HIGH);
       }
     if(incomingByte=='L'){
       digitalWrite (led, LOW);
       }
    
    // Si es H (ASCII 72), enciende el LED:

}
}
