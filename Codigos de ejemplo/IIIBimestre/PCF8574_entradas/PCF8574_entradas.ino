/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Uso del expansor de puertos como entradas digitales
*/

#include <Wire.h>    //libreria que me permite usar el protocolo i2c
#include <PCF8574.h>  //libreria que me permite usar el expansor PCF8574

//Directivas del preprocesador
#define PCF8574_HIGH LOW  //Negacion utilizada para encender un puerto del expansor PCF8574
#define PCF8574_LOW HIGH  //Negacion utilizada para apagar un puerto del expansor PCF8574
#define LED0 0    //puerto 0 del expansor
#define LED1 1    //puerto 1 del expansor
#define LED2 2    //puerto 2 del expansor
#define LED3 3    //puerto 3 del expansor
#define INPUT0 4    //puerto 4 del expansor
#define INPUT1 5    //puerto 5 del expansor
#define INPUT2 6    //puerto 6 del expansor
#define INPUT3 7    //puerto 7 del expansor


//Constructor
PCF8574 expansor_PCF(0x20);  //Expansor con direccion i2c 0x20

//Variables para la lectura de los puertos
bool state_input0;
bool state_input1;
bool state_input2;
bool state_input3;

void setup() {
  Serial.begin(9600);  //Inicio la comunicacion serial a 9600 baudios.
  Wire.begin();  //Inicio la comunicacion i2c.
  expansor_PCF.begin(); //Inicio la comunicacion i2c con el expansor de puertos

  Serial.println("Uso del expansor de puertos PCF8574");
  if(!expansor_PCF.isConnected())  //Esta conectado el expansor al arduino?
  {
    Serial.println("El expansor no se encuentra conectado al arduino, favor de verificar conexiones");
  }
  else
  {
    Serial.println("El expansor de puertos si se encuentra conectado al arduino");
  }

  //NOTA: No es necesario definirlos como salida o como entrada, esto por las caracteristicas
  //cuasidireccionales de los pines.
}

void loop()
{
  //Leo los puertos[4,7]
  state_input0 = expansor_PCF.read(INPUT0);
  state_input1 = expansor_PCF.read(INPUT1);
  state_input2 = expansor_PCF.read(INPUT2);
  state_input3 = expansor_PCF.read(INPUT3);

  if(state_input0 == LOW)   //el puerto 4 es bajo?
  {
    expansor_PCF.write(LED0,PCF8574_HIGH);  //enciendo el puerto 0
  }
  else if(state_input1 == LOW)  //el puerto 5 es bajo?
  {
    expansor_PCF.write(LED1,PCF8574_HIGH);  //enciendo el puerto 1
  }
  else if(state_input2 == LOW)  //el puerto 6 es bajo?
  {
    expansor_PCF.write(LED2,PCF8574_HIGH);  //enciendo el puerto 2
  }
  else if(state_input3 == LOW)  //el puerto 7 es bajo?
  {
    expansor_PCF.write(LED3,PCF8574_HIGH);  //enciendo el puerto 3
  }
  else  // si no es ninguno
  {
    //mantengo apagados los leds conectados a los puertos[0,3];
    expansor_PCF.write(LED0,PCF8574_LOW);
    expansor_PCF.write(LED1,PCF8574_LOW);
    expansor_PCF.write(LED2,PCF8574_LOW);
    expansor_PCF.write(LED3,PCF8574_LOW);
  }
  delay(250);
}
