/* 
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM / EB5AV
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Profe Alejandro Lopez
 * Fecha: 27/04/2023
 * Proyecto: Sensor de Temperatura DS18B20
 */

//Librerias
#include <OneWire.h>                
#include <DallasTemperature.h>
 
//Constructores
OneWire ourWire(2);                //Se establece el pin 2  como el pin que utilizaremos para el protocolo OneWire
DallasTemperature sensors(&ourWire); //Se declara una objeto para nuestro sensor


void setup() {
delay(1000);
Serial.begin(9600);   //Inicio la comunicacion serial
sensors.begin();   //Se inicia el sensor
}
 
void loop() {
sensors.requestTemperatures();   //Se envía el comando para leer la temperatura
float temp= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC
float temp1 = sensor.getTempFByIndex(0); //Se obtiene la temperatura en ºF

Serial.print("Temperatura= ");
Serial.print(temp);
Serial.println(" C");
delay(100);  
Serial.print("Temperatura=");
Serial.print(temp1);
Serial.println("ºF);
delay(100);
}

