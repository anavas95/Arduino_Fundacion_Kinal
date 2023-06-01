/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Profe Alejandro
 * Carnet: ---------
 * Proyecto: Uso del ADC
*/

//Directivas del preprocesador
#define ch_A0 A0   //canal 0 o pin A0 del arduino

//Variables
unsigned int raw_sensor = 0;   //variable donde voy a tener los posibles valores leidos en el canal 0 del ADC

void setup() 
{
 Serial.begin(9600);  //Inicio la comunicación serial
 pinMode(ch_A0, INPUT); // pin A0 como entrado. NOTA: no usar la instrucción de INPUT_PULLUP
 Serial.println("Uso del ADC");
}

void loop() {

  raw_sensor = analogRead(ch_A0);
  Serial.print("El valor leido por el sensor es de: ");
  Serial.println(raw_sensor);
  delay(100);

  if(raw_sensor>0 && raw_sensor<255)
  {
    Serial.println("El valor leido por el canal A0 se encuentra entre 0V y 1.25V");
  }
  else if(raw_sensor>256 && raw_sensor<511)
  {
    Serial.println("El valor leido por el canal A0 se encuentra entre 1.25V y 2.5V");
  }
  else if(raw_sensor>512 && raw_sensor<767)
  {
    Serial.println("El valor leido por el canal A0 se encuentra entre 2.5V y 3.75V");
  }
  else
  {
    Serial.println("El valor leido por el canal A0 se encuentra entre 3.75V Y 5V");
  }

  delay(100);  //pausa
}
