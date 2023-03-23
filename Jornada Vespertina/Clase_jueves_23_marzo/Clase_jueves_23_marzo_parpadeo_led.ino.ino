/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Perito en electronica
Quinto perito
Seccion: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Profe. Luis Alejandro Lopez Navas
Carne: 20200001
Proyecto: Como hacer que un led parpadee
*/


#define LED 5 //En el pin 5 tengo conectado un led


void setup() 
{
 pinMode(LED,OUTPUT); //Pin 5 como salida. 
}

void loop() 
{
  digitalWrite(LED, HIGH); //enciendo el led
  delay(1000);
  digitalWrite(LED, LOW); //apago el led.
  delay(1000);
}
