/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Encender un led por medio de un pulsador
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 30 de marzo
*/


//Directivas del preprocesador
#define push_button 2     //Push button conectado al pin2
#define Led0        3     //Push button conectado al pin3.
#define setpinInput(pin)        pinMode(pin,INPUT)      //Macro para configurar entradas
#define setpinInputPullup(pin)  pinMode(pin, INPUT_PULLUP)  //Macro para configurar entradas con pullup interno
#define setpinOutput(pin)       pinMode(pin, OUTPUT)      //Macro para configurar salidas.
#define SBI(pin)                digitalWrite(pin, HIGH)   //Macro para encender un pin
#define CBI(pin)                digitalWrite(pin, LOW)    //Macro para apagar un pin

void setup() 
{
  setpinInput(push_button); //Pin2 como entrada
  setpinOutput(Led0);       //Pin3 como salida.
  Serial.begin(9600);       //Inicio la comunicacion serial
  Serial.println("Lectura de un pulsador");  //Envio el texto entre comillas al puerto serie
}

void loop() 
{
  //Variable local, que se encarga de almacenar el valor (abierto o cerrado)
  //del pulsador conectado al pin2 en configuracion de pullup
  bool estado_boton = digitalRead(push_button);

  
  if(estado_boton == LOW) //He presionado el pulsador?
  {
    delay(100); //antirebote
    SBI(Led0);  //Enciendo el led conectado al puerto 3 
    Serial.println("He presionado el interruptor");
  }
  else
  {
    CBI(Led0);  //apago el led conectado al puerto 3
  }
  
}
