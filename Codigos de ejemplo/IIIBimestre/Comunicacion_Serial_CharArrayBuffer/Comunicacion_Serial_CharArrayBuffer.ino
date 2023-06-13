/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Comunicacion serial - recepcion de una cadena de caracteres
*/
#include <stdlib.h>
#include <stdio.h>

//***********************MACRO**********************************
#define led 13   //led conectado al pin 13 del arduino
#define SerialBaudRate 9600 //velocidad de la comunicacion serial


//***********************VARIABLE*******************************

/*
Definimos un char array, en el cual podemos almacenar hasta un maximo de 20 bytes.
*/
char inf_recibida[20];  //20 espacios de memoria para almacenar datos

void setup()
{
  Serial.begin(SerialBaudRate); //Inicializo la comunicacion serial a una velocidad de 9600 baudios.  
  pinMode(led, OUTPUT); //Declaro el pin 2 como salida
  pinMode(led, LOW);
  Serial.println("Clase de comunicacion serial - recepcion de una cadena de caracteres");
}

void loop() 
{

  if(Serial.available()>0) //verificamos que hayan datos en el buffer serial
  {
     /*
     El operador size_t determina el tamaño de un objeto (Es decir el array tiene 20 elementos, size_t devuelve 20)
     Esto unicamente lo realizo para saber cuantos caracteres he recibido por medio de la comunicacion serial
     */
     //size_t nombre_cualquiera = Serial.readBytesUntil(caracter_delimitador, array que utilizo como buffer, el tamanio del buffer)

     size_t datos = Serial.readBytesUntil('\r\n', inf_recibida, 20);
    Serial.print("El caracter recibido es: ");  //Imprimimos el texto en el monitor serial
    
    for(int i=0;i<datos;i++)                 //Recorro el buffer para almacenar dentro de el la informacion recibida
    {
      inf_recibida[i];
    }
    Serial.println(inf_recibida);  //envio al monitor serial la informacion almacenado en mi char buffer

    //Limpio el charArray, es decir borro la informacion contenida dentro de el
    for(int i = 0; i<datos; i++)
    {
      //cada posicion del charArray se iguala NULL
      inf_recibida[i] = '\0';
    }
 }
} 
