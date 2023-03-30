/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: SWITCH - CASE
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 30 de marzo
*/

//Directivas de preprocesador
#define baudrate 9600


enum estados_mensaje
{
  bienvenida,
  saludo,
  charla,
  entremes,
  despedida,
};

//Variables
int estado_Reunion = bienvenida;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Uso del switch case");

}

void loop() 
{

  switch(estado_Reunion)
  {

    case(bienvenida):
    {
      Serial.println("Bienvenido, buenos dias");
      delay(500);
      estado_Reunion = saludo;
      break;
    }

    case(saludo):
    {
     Serial.println("Hola, que tal?");
     delay(500);
     estado_Reunion = charla;
     break;
    }

    case(charla):
    {
      Serial.println("Blablablabla.....");
      delay(500);
      estado_Reunion = entremes;
      break;
    }

    case(entremes):
    {
      Serial.println("Refa");
      delay(500);
      estado_Reunion = despedida;
      break;
    }

    case(despedida):
    {
      Serial.println("Orale");
      delay(500);
      estado_Reunion = bienvenida;
      break;
    }

    
  }

}
