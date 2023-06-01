/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Encendiendo un led por medio del Ciclo FOR
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 30 de marzo
*/


//Directivas del preprocesador
#define LED 13   //Led onboard del arduino.
#define SBI(pin)        pinMode(pin, OUTPUT)
#define setPinHIGH(pin) digitalWrite(pin, HIGH)
#define setPinLOW(pin)  digitalWrite(pin, LOW) 

//Variables
bool estado = true;

void setup() 
{
  SBI(LED);  //Pin13 como salida.
  setPinLOW(LED);  //el led onboard inicia apagado. 
}

void loop()
{
  //Voy a encender 10 veces el led onboard
  for(int i = 0; i<10; i++)
  {
     setPinHIGH(LED);
     delay(500);
     setPinLOW(LED);
     delay(500);
  }
}
