/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Comunicacion serial - recepcion de un solo caracter
*/


//***************MACROS*************************
#define led 13 //led conectado al pin 13 del arduino.
#define SerialBaudRate 9600 //velocidad de la comunicacion serial


void setup() 
{
 Serial.begin(9600);
 pinMode(led, OUTPUT);
 digitalWrite(led, LOW);
 Serial.println("Clase de comunicacion serial - recepcion de un unico caracter");
}

void loop() 
{
  //Mientras tenga caracteres disponibles para leer en los pines de comunicacion serial
  while(Serial.available()>0)
  {
    //Guardo el caracter recibido por medio de la comunicacion serial
    char caracter_recibido = Serial.read();

    if(caracter_recibido == 'A')
    {
      //Si he recibido la letra mayuscula A
      digitalWrite(led, HIGH); //enciendo el led
    }
    else if(caracter_recibido == 'B')
    {
     digitalWrite(led, LOW); 
    }

    //La siguiente linea es unicamente para ver el caracter recibido
    Serial.print("El caracter recibido es: ");
    Serial.println(caracter_recibido);
  }
}
