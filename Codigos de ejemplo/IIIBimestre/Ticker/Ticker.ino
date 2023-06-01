/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Uso de interrupciones de temporizador por medio de Ticker
*/

//Librerias
#include <Ticker.h>  //esta libreria me permite hacer uso del timer

//Directivas de preprocesador
#define led_arduino 13  //led on board, que posee mi arduino



//Funciones de ISR
void isr_led(void); 

//Variables
volatile static bool estado_led;

//Constructores 
Ticker isr_accion_led(isr_led, 3000); //cada tres segundos se encendera/apagara el led del pin 13;

void setup() {
  Serial.begin(19200);  //Inicio la comunicación serial
  Serial.println("Uso de ticker");
  pinMode(led_arduino, OUTPUT);
  digitalWrite(led_arduino, LOW);
  isr_accion_led.start();   //Iniciando la interrupción que esperaria se repitiera cada 3 segundos
  estado_led = LOW;
 
}

void loop() {

  isr_accion_led.update();


}

void isr_led(void)
{
  estado_led = digitalRead(led_arduino); //leo el estado digital del pin que estoy usando como salida.
  digitalWrite(led_arduino, !estado_led);
  Serial.println("Ha acurrido la interrupción por timer");
}
