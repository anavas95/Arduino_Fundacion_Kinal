/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Comunicacion serial - recepcion de una string 
*/
//***********************MACRO**********************************
#define led 13   //led conectado al pin 13 del arduino
#define SerialBaudRate 9600 //velocidad de la comunicacion serial

//***********************VARIABLE*******************************

String inf_recibida; //Declaro una variable tipo string donde almacenare la informacion recibida.

void setup()
{
  Serial.begin(SerialBaudRate); //Inicializo la comunicacion serial a una velocidad de 9600 baudios.  
  pinMode(led, OUTPUT); //Declaro el pin 2 como salida
  Serial.println("Comunicacion Serial - recepcion de un String"); //Envio al monitor serial el texto entre comillas
}

void loop()
{
  //Mientras tengo datos disponibles para leer por medio de la comunicacion serial
  while (Serial.available() > 0)
  {
      inf_recibida = Serial.readStringUntil('\r\n'); //Voy a guardar en el string todo el texto antes de encontrar el caracter delimitador
      Serial.print("La cadena de texto recibida es: "); //Envio al monitor serial el texto entre comillas
      Serial.println(inf_recibida); //Envio al monitor serial el string guardado
  }
  
}
