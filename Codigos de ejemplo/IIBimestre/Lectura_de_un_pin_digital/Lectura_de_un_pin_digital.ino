/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Como leer un pulsador
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 30 de marzo
*/


//Directivas del preprocesador
#define push_button 2     //Push button conectado al pin2
#define setpinInput(pin)        pinMode(pin,INPUT)      //Macro para configurar entradas
#define setpinInputPullup(pin)  pinMode(pin, INPUT_PULLUP)  //Macro para configurar entradas con pullup interno


void setup() 
{
  setpinInput(push_button); //Pin2 como entrada
  Serial.begin(9600);       //Inicio la comunicacion serial
  Serial.println("Lectura de un pulsador");  //Envio el texto entre comillas al puerto serie
}

void loop() 
{
  //Variable local, que se encarga de almacenar el valor (abierto o cerrado)
  //del pulsador conectado al pin2
  bool estado_boton = digitalRead(push_button);

  if(estado_boton == LOW)
  {
    delay(100); //antirebote
    Serial.println("He presionado el interruptor");
  }
  
}
