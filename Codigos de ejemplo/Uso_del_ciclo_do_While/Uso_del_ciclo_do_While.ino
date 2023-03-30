/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Ciclo do WHILE
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 30 de marzo
*/

//Variables
int i = 0;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Uso del do While");

}

void loop() 
{
  do
  {
    Serial.print("Numero: ");
    Serial.println(i); 
    i++;
    delay(500);
  }while(i!=10);
  i =0;
}
