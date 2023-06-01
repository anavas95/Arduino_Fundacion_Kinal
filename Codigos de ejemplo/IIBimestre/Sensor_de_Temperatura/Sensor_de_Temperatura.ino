/* 
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM / EB5AV
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Profe Alejandro Lopez
 * Fecha: 27/04/2023
 * Proyecto: Sensor de temperatura
 */

//Librerias
#include <OneWire.h>                
#include <DallasTemperature.h>
 
//Constructores
OneWire ourWire(2);                //Se establece el pin 2  como bus OneWire
DallasTemperature sensors(&ourWire); //Se declara una variable u objeto para nuestro sensor

void setup() {
delay(1000);
Serial.begin(9600);
sensors.begin();   //Se inicia el sensor
}
 
void loop() {
sensors.requestTemperatures();   //Se envía el comando para leer la temperatura
float tempC= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC
float tempF= sensors.getTempFByIndex(0); //Se obtiene la temperatura en ºF
Serial.print("Temperatura");
Serial.print(tempC);
Serial.println(" C");
Serial.print("Temperatura");
Serial.print(tempF);
Serial.println(" F");
delay(100);     
