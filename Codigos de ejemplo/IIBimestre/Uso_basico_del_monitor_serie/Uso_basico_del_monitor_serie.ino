/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Como enviar mensajes por el monitor serial, una unica vez
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 29 de marzo
*/

//Directivas de preprocesador
#define baudrate_Terminal 9600  //Baudrate de 9600, este puede ser cambiado a nuestra necesidad.

void setup() 
{
  Serial.begin(9600);  //Inicio la comunicacion Serial del Arduino.
  Serial.print("Este es un mensaje sin salto de linea");  //Envio el mensaje a la terminal serie.
  Serial.print('\n');  //Envio un salto de linea a la terminal serie
  Serial.println("Este es un mensaje con salto de linea");
}

void loop() 
{

}
