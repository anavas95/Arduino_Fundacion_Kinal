
/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Sensores de voltaje 
*/

//Directivas de preprocesador
#define sensorVoltajepin A0       //En el pinA0 se encuentra conectado el sensor de voltaje

//Variables
unsigned int raw_sensor = 0;
float voltaje_sensado = 0;


void setup() {
  Serial.begin(9600);     //Inicio la comunicacion serial a 9600 baudios.
  pinMode(sensorVoltajepin, INPUT);     //pinA0 como entrada
  Serial.println("Uso del sensor de voltaje FZ0430");
  
}

void loop() {
  raw_sensor = analogRead(sensorVoltajepin);      //Leo el valor medido por el pin analogico
  voltaje_sensado = fmap(raw_sensor,0,1023,0.0,25.0);   //Linealizo el valor leido y lo convierto 
  Serial.print("El voltaje medido es de: ");
  Serial.println(voltaje_sensado);
  delay(1000);
}

float fmap(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x-in_min)*(out_max - out_min)/(in_max - in_min) + out_min;
}
