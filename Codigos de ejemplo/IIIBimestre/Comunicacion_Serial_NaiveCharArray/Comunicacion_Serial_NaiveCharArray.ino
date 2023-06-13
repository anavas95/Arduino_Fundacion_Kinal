/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Comunicacion serial - metodo naive para cadenas de caracteres
*/
//******************VARIABLES*********************************

char buffer_serial[10];   //este char array me va a servir de buffer para almacenar informacion
int index = 0;  //este index, me va a servir para recorrer las posiciones del buffer


void setup()
{
  Serial.begin(9600); //Inicializo la comunicacion serial a una velocidad de 9600 baudios.  
  Serial.println("Comunicacion Serial - Metodo Naive"); //Envio al monitor serial el texto entre comillas
}

void loop()
{
   
  if(Serial.available() > 0)  //Verifico si tengo informacion disponible para almacenar
  {

    char data = Serial.read(); //Si hay informacion la almaceno en la variable

    if(data !='\n')
    {
      buffer_serial[index] = data;   //Voy a ir recorriende el array desde su posicion 0 con el fin de almacenar la informacion disponible.
      index++; //para evitar que se sobreescriba, aumento en uno el indice
    }
    else
    {
      Serial.print("La informacion guardada en el buffer es: "); //Envio al monitor serial el texto entre comillas
      Serial.println(buffer_serial); //envio al monitor serial el buffer
      //luego de mostrarlo en pantalla, lo limpio
      for(int i =0; i<sizeof(buffer_serial);i++)
      {
        buffer_serial[i]= '\0';
      }
      index = 0; //reinicio el indice
    }   
  }
}
