/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Condicional IF
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 30 de marzo
*/

//Variables gloables
int numero1=5; //variable tipo entero llamada numero1 que posee un valor de 5
int numero2=8; //variable tipo entero llamada numero2 que posee un valor de 8

void setup() 
{
 
Serial.begin(9600); //Inicio la comunicacion serial a 9600.
Serial.println("Uso del condicional if"); //Envio el mensaje a la terminal virtual

}

void loop() 
{

  bool resultado = numero1 == numero2;

  if(resultado)
  {
    Serial.println("Ambos numeros son iguales");
  }

  Serial.println("NO son iguales");
  delay(1000);

}
