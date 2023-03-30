/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Ciclo WHILE
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 30 de marzo
*/

//Variables
int i = 0;

void setup() 
{
  
  Serial.begin(9600);
  Serial.println("Contador de numeros pares entre 0 y 100");
}

void loop() 
{
  while(i<=100)
  {
    i = i+2; //Incremento el valor de i en 2 unidades
  }
  delay(100);
  Serial.print("Numero: ");
  Serial.println(i);

}
