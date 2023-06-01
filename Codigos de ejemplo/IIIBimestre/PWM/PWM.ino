/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Uso del PWM
*/

//Directivas del preprocesador
#define analogOut_pwmServo 3  //pin 3 para PWM de un servomotor
#define analogOut_pwmLed   5  //pin 5 para PWM de un led

//Variables
unsigned char raw_pwm=0; //valores 0-255 para ser utilizados en el PWM


void setup() 
{
  Serial.begin(9600);  //Inicio la comunicacion serial
  Serial.println("Uso del PWM");
  pinMode(analogOut_pwmServo, OUTPUT);  //pin donde utilizo el PWM como salida.
  pinMode(analogOut_pwmLed, OUTPUT);
}

void loop() 
{
  for(raw_pwm=0; raw_pwm < 256; raw_pwm++)
  {
    analogWrite(analogOut_pwmServo, raw_pwm);   //Muevo paso a paso el servoMotor
    analogWrite(analogOut_pwmLed, raw_pwm);   //Muevo paso a paso el servoMotor
    delay(100);
  }

}
