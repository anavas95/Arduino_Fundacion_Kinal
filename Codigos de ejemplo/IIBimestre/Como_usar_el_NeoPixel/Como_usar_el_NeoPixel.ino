/* 
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM / EB5AV
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Profe Alejandro Lopez
 * Fecha: 04/05/2023
 * Proyecto: NeoPixel
 */

/*
El enum me permite crear una lista
de variables enteras, dominadas por una
categoria que yo he especificado.

Para ver los colores
visitar la siguiente pagina web:
https://es.wikipedia.org/wiki/Colores_web
*/
enum colores
{
   rojo, 
   azul,
   blanco,
   verde,
   naranja,
   celeste,
   amarillo,
   gris
};

//Librerias
#include <Adafruit_NeoPixel.h>


//Directivas de preprocesador
#define Cantidad_Leds 24
#define pin_Led 2

//Constructor
Adafruit_NeoPixel anillo(Cantidad_Leds,pin_Led, NEO_GRB + NEO_KHZ800);


//Funciones

//Muestra todo el anillo de un solo color
void setColor(int color);

void setup()
{
  anillo.begin(); //Inicializa la tira led
  
  /*
  for(int i =0; i<25; i++)
  {
    anillo.setPixelColor(i,anillo.Color(163,162,161));
    anillo.show();  //muestro el color en el led
    delay(250);
  } 
  
  for(int i =24; i>0; i--)
  {
    anillo.setPixelColor(i,anillo.Color(0,0,0));
    anillo.show();  //muestro el color en el led
    delay(250);
  } */
  
}


void loop()
{

  //LLamamos la función
  setColor(rojo);
  delay(1000);
  setColor(verde);
  delay(1000);
  setColor(naranja);
  delay(1000);
  setColor(gris);
  delay(1000);

}


//Declaración de la función
void setColor(int color)
{
  switch(color)
  {
    case(rojo):
    {
        for(int i =0; i<25; i++)
        {
          anillo.setPixelColor(i,anillo.Color(255,0,0));
          anillo.show();  //muestro el color en el led
        } 
      break;
    }
    
    case(gris):
    {
        for(int i =0; i<25; i++)
        {
          anillo.setPixelColor(i,anillo.Color(169,169,169));
          anillo.show();  //muestro el color en el led
        }
      break;
    }
    
    case(naranja):
    {
        for(int i =0; i<25; i++)
        {
          anillo.setPixelColor(i,anillo.Color(255,140,0));
          anillo.show();  //muestro el color en el led
        }
      break;
    }
    
    case(verde):
    {
        for(int i =0; i<25; i++)
        {
          anillo.setPixelColor(i,anillo.Color(124,252,0));
          anillo.show();  //muestro el color en el led
        }
      break;
    }
  
  }
}
