/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Led intermitente
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 29 de marzo
*/

//Directivas de preprocesador
#define LED 13
#define tiempo_espera 500

void setup() 
{
  pinMode(LED, OUTPUT);  //Pin 13 como salida.
  digitalWrite(LED, LOW);  //LED conectado al pin13 inicia apagado 
}

void loop() 
{
  digitalWrite(LED, HIGH); //Enciendo el led conectado al pin13
  delay(tiempo_espera);  //espera de 500 milisegundos.
  digitalWrite(LED, LOW); //Apago el led conectado al pin13
  delay(tiempo_espera);  //espera de 500 milisegundos
}
