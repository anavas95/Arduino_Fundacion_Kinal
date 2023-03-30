/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Condicional IF-ELSE
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 29 de marzo
*/

//Variables
int numero = 45; //Variable tipo int llamada numero que tiene un valor de 45.

void setup() 
{
  Serial.begin(9600);  //Inicio la comunicacion serial.
  

}

void loop() 
{
  if(numero>=0 && numero<=9)
  {
    Serial.println("El numero esta entre el rango de 0-09");
  }
  else if(numero>=10 && numero<=19)
  {
    Serial.println("El numero esta entre el rango de 10-19");
  }
  else
  {
    Serial.println("El numero esta fuera de rango");
  }
}
