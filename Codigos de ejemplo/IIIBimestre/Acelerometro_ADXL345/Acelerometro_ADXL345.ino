/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Acelerometro ADXL345
*/
#include<Wire.h>
#include <SparkFun_ADXL345.h>

ADXL345 acelerometro_ADXL345 = ADXL345();    //constructor para poder utilizar el acelerometro.

//Variables donde guardo las aceleraciones.
int x;
int y;
int z;

void setup() {
  Serial.begin(9600);     //Inicio la comunicacion serial a 9600 baudios.
  Serial.println("Uso del acelerometro ADXL345");
  acelerometro_ADXL345.powerOn();             //Enciendo el acelerometro.
  acelerometro_ADXL345.setRangeSetting(8);    //Configuro para medir la aceleracion con 8g.
}

void loop() {
 /*
  * Obtengo las aceleraciones por cada eje
 */
 acelerometro_ADXL345.readAccel(&x,&y,&z);
 Serial.print("La aceleracion en x es de: ");
 Serial.println(x);
 Serial.print("La aceleracion en y es de: ");
 Serial.println(y);
 Serial.print("La aceleracion en z es de: ");
 Serial.println(z);
 delay(500);
}
