/* 
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM / EB5AV
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Profe Alejandro Lopez
 * Fecha: 04/05/2023
 * Proyecto: ServoMotor
 */


//Libreria
#include <Servo.h> //libreria que me permite usar el servo

//Directivas de preprocesador
#define pin_Servo 5


//Constructor
Servo Servo_profeAlejandro;  //mi servo

void setup()
{
  
  Servo_profeAlejandro.attach(pin_Servo);

}

void loop()
{
  
  for(unsigned char i =0; i<181;i++)
  {
    Servo_profeAlejandro.write(i);
    delay(10);
  }
  /*
  Servo_profeAlejandro.write(0);
  delay(1000);
  Servo_profeAlejandro.write(45);
  delay(1000);
  Servo_profeAlejandro.write(90);
  delay(1000);
  Servo_profeAlejandro.write(135);
  delay(1000);
  Servo_profeAlejandro.write(180);
  delay(1000);*/
}
