/* 
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM / EB5AV
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Profe Alejandro Lopez
 * Fecha: 27/04/2023
 * Proyecto: LCD por medio de I2C
 */


//Librerias
#include <OneWire.h>            //Libreria para usar el protocolo de comunicacion OneWire
#include <DallasTemperature.h>  //Libreria para usar el sensor de temperatura DS18B20

//Constructores

OneWire com_OneWire(2);     //Especifico en que pin utilizare para comunicarme con el sensor de temperatura
DallasTemperature Sensor_Temperatura(&com_OneWire);  //Especifico que el sensor de temperatura se encontrara conectado al pin donde utilizo la comunicacion OneWire


#include <Wire.h>
#include "PCF8574.h"
void setup() {
  Serial.begin(9600); //Inicio la comunicacion serial
  Sensor_Temperatura.begin();  //inicio la comunicacion hacia el sensor
}

void loop() {

  Sensor_Temperatura.requestTemperatures();  //solicito al sensor la temperatura medida

  float Temperatura_C = Sensor_Temperatura.getTempCByIndex(0);  //Obtengo la temperatura en grados centigrados
  float Temperatura_F = Sensor_Temperatura.getTempFByIndex(0);  //Obtengo la temperatura en grados farenheit


  //Impresion de la temperatura
  Serial.print("La temperatura en grados centigrados es de: ");
  Serial.println(Temperatura_C);
  Serial.print("La temperatura en grados farenheit es de: ");
  Serial.println(Temperatura_F);

  delay(500); //espera de 500ms
 
}
