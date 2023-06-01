/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: ADC + PWM
*/


//Directivas del preprocesador
#define ch_A0 A0   //canal 0 o pin A0 del arduino
#define analogOut_pwmServo 3  //pin 3 para PWM de un servomotor

//Variables
unsigned int raw_potenciometro = 0;
unsigned char speedServo =0;


void setup() {
  
 Serial.begin(9600);  //Inicio la comunicación serial
 pinMode(ch_A0, INPUT); // pin A0 como entrado. NOTA: no usar la instrucción de INPUT_PULLUP
 pinMode(analogOut_pwmServo, OUTPUT);  //pin donde utilizo el PWM como salida.

}

void loop() {
  raw_potenciometro = analogRead(ch_A0); //leo el canal analogico A0
  speedServo = map(raw_potenciometro, 0, 1023, 0, 255);
  analogWrite(analogOut_pwmServo, speedServo);
  delay(100);
}
