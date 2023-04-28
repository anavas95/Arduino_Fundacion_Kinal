/*
 * 
 * Funciones
*/

/*Funciones sin retorno y sin parametros
//Como se escribe una funcion de este tipo:

dato_retorno nombre_Funcion(parametros_de_la_funcion)
Anotaciones
Si la funcion no posee dato de retorno decimos que es void
si la funcion no recibe parametros, decimos que es void*/

void mi_Funcion(void); 

/*
 * Funciones sin retorno y con parametros
 * Como se escribe una funcion de este tipo:
 * 
 * dato_retorno nombre_Funcion(parametros_de la funcion)
 * 
 * Anotaciones
 * Como no posee dato de retorno sera del tipo void
 * Pero ahora si posee parametros, recibira variables
*/

void ConfigInput(unsigned char _configPinInput);  


/*
 * Funciones con retorno y con parametros
 * 
 * Como se escribe una funcion de este tipo
 * 
 * dato_retorno nombre_Funcion(parametros de la funcion)
 * 
 * Anotaciones
 * Como ahora si posee dato de retorno, le asigno una variable donde almacene este retorno para ser utilzado despues
 * Como ahora si posee parametros, recibira variables.
 *
*/

//Funcion que devuelve la distancia(entero) medida por el sensor conectado a los pines que especifica.
int medicion_Distancia(unsigned char _echoPinSensor, unsigned char _trigPinSensor);


int medicion_ultrasonico;

void setup() {
  Serial.begin(9600);
  Serial.println("Uso de funciones");
  pinMode(3,INPUT);
  pinMode(4, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {

  //Almaceno la distancia medida por el sensor ultrasonico que se encuentra
  //conectado a los pines 3, 4
  medicion_ultrasonico = medicion_Distancia(3,4); 

 if(medicion_ultrasonico>=5 && medicion_ultrasonico<=10)
 {
  Serial.println("fuera de aqui");
  }

 delay(1000);

}

int medicion_Distancia(unsigned char _echoPinSensor, unsigned char _trigPinSensor)
{
  //Variable donde almaceno el dato a retornar
  int medicion;
  int duracion_echo;

  digitalWrite(_trigPinSensor, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPinSensor, LOW);

  duracion_echo = pulseIn(_echoPinSensor, HIGH);
  medicion = duracion_echo/59;
  return medicion; 
}
