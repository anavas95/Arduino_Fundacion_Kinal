/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM / EB5AV
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Profe Alejandro Lopez
 * Fecha: 27/04/2023
 * Proyecto: LCD por medio de I2C


*/

//Librerias
#include <LiquidCrystal.h>


//Definiciones de preprocesador
#define RS  6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5

//Constructor
LiquidCrystal LCD_Alejandro(RS, Enable, D4, D5, D6, D7); //Constructor que me permite usar la LCD

byte ninoConBrazoAbajo[] = {
  B01110,
  B01110,
  B01110,
  B00100,
  B11111,
  B00100,
  B01010,
  B10001
};

byte ninoConBrazoArriba[] = {
  B01110,
  B01110,
  B01110,
  B10101,
  B01110,
  B00100,
  B01010,
  B01010
};

void setup()
{
  LCD_Alejandro.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
  LCD_Alejandro.createChar(1,ninoConBrazoAbajo);
  LCD_Alejandro.createChar(2,ninoConBrazoArriba);
  LCD_Alejandro.print("Hola patojos");
}
void loop()
{
  LCD_Alejandro.setCursor(0,1);  //Primera columna y segunda fila  
  LCD_Alejandro.write(1);
  delay(250);
  LCD_Alejandro.setCursor(0,1);
  LCD_Alejandro.write(2);
  delay(250);
  
}
