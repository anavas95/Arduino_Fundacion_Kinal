/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Uso del controlador led max7219 y una matriz led 8x8
*/

//Librerias
#include <LedControl.h>   //libreria que me permite usar el controlador led max7219

//Directivas de preprocesador
#define dataPin0   12   //pin 12 conectado al pin de datos del max7219.
#define dataClock0 11   //pin 11 conectado al pin de clock del max7219.
#define dataLoad0  10   //pin 10 conectado al pin de carga del max7219.


//Constructores
LedControl matrix_unidades = LedControl(dataPin0,dataClock0,dataLoad0,1);


/*
 * Variable:
 * Estas variables especifican que leds deben de encenderse en la matriz
 * de manera similar a como creabamos caracteres especiales en una lcd.
*/
byte number_0[8]= {				// array que contiene todos los elementos de las
  B00111100,				// filas necesarias por mostrar el digito cero
  B01111110,
  B01100110,
  B01101110,
  B01110110,
  B01100110,
  B01111110,
  B00111100
};
byte number_1[8]= {				// array que contiene todos los elementos de las
  B00011000,				// filas necesarias por mostrar el digito uno
  B00111000,
  B00111000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B01111110
};

byte number_2[8]= {				// array que contiene todos los elementos de las
  B00111100,			// filas necesarias por mostrar el digito dos
  B01110110,
  B00000110,
  B00001100,
  B00110000,
  B01100000,
  B01100000,
  B01111110
};

byte number_3[8]= {				// array que contiene todos los elementos de las
  B00111100,				// filas necesarias por mostrar el digito tres
  B01000110,
  B00000110,
  B00011100,
  B00011110,
  B00000110,
  B01000110,
  B00111100
};

byte number_4[8]= {			// array que contiene todos los elementos de las
  B00001100,				// filas necesarias por mostrar el digito cuatro
  B00011100,
  B00101100,
  B01001100,
  B01111110,
  B01111110,
  B00001100,
  B00001100
};

byte number_5[8]= {			// array que contiene todos los elementos de las
  B00111100,				// filas necesarias por mostrar el digito cinco
  B01100000,
  B01100000,
  B01111100,
  B00000110,
  B00000110,
  B01000110,
  B00111100
};

byte number_6[8]= {				// array que contiene todos los elementos de las
  B00111100,				// filas necesarias por mostrar el digito seis
  B01100010,
  B01100000,
  B01111100,
  B01100110,
  B01100110,
  B01100110,
  B00111100
};

byte number_7[8]= {			// array que contiene todos los elementos de las
  B01111110,				// filas necesarias por mostrar el digito siete
  B01100110,
  B00000110,
  B00001100,
  B00011000,
  B00011000,
  B00011000,
  B00011000
};

byte number_8[8]= {				// array que contiene todos los elementos de las
  B00111100,				// filas necesarias por mostrar el digito ocho
  B01100110,
  B01100110,
  B00111100,
  B01100110,
  B01100110,
  B01100110,
  B00111100
};

byte number_9[8]= {			// array que contiene todos los elementos de las
  B0011110,				// filas necesarias por mostrar el digito nueve
  B01100110,
  B01100110,
  B01100110,
  B00111110,
  B00000110,
  B00000110,
  B00000110
};


unsigned long update_delay = 850;   //espacio entre animaciones.

//Prototipos de funciones
int display_number(unsigned char number);

void setup()
{
  Serial.begin(9600); //Inicio la comunicacion serial a 9600 baudios.
  matrix_unidades.shutdown(0,false); //Activo el max7219 para poder mostrar los digitos.
  matrix_unidades.setIntensity(0,15);  //Brilo a la mitad 
  matrix_unidades.clearDisplay(0);    //limpio el display
  Serial.println("Uso del controlador led max7219 y una matriz led");
}


void loop() 
{
  for(int i =0; i<10;i++)
  {
    display_number(i);
    delay(update_delay);
  }
}

int display_number(unsigned char number)
{

  switch (number)
  {
    case (0):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_0[i]);
      }
      break;
    }
    
    case (1):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_1[i]);
      }
      break;
    }

    
    case (2):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_2[i]);
      }
      break;
    }
    
    
    case (3):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_3[i]);
      }
      break;
    }
    
    case (4):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_4[i]);
      }
      break;
    }
    
    case (5):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_5[i]);
      }
      break;
    }
    
    case (6):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_6[i]);
      }
      break;
    }

    case (7):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_7[i]);
      }
      break;
    }

    case (8):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_8[i]);
      }
      break;
    }

    case (9):
    {
      for(int i=0; i<8;i++)
      {
        matrix_unidades.setRow(0,i,number_9[i]);
      }
      break;
    }
  }
}
