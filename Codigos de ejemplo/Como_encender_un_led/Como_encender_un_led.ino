/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Como encender un led una unica vez
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 29 de marzo
*/

//Directivas de preprocesador
#define LED 2


void setup()
{
  pinMode(LED, OUTPUT);  //Pin 2 como salida.
  digitalWrite(LED, HIGH); //Enciendo el pin 2.
}

void loop()
{
 
}
