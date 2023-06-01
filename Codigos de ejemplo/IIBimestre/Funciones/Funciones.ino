/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM / EB5AV
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Profe Alejandro Lopez
 * Fecha: 18/04/2023
 * Proyecto: Funciones
*/

//Declaracion de una funcion
//Funcion sin retorno y sin parametros
//Esta funcion, unicamente configura pines de entrada
void ConfigPinesInput(void);
//Funcion sin retorno y sin parametros
//Esta funcion, unicamente configura pines de salida
void ConfigPinesOutput(void);

//Funcion sin retorno y con parametros
//Esta funcion declara los pines a utilizar en un display de 7 sementos y 
//y me permite definir si es de anodo comun o catodo comun
//Recibe de parametros, los pines que usaremos para conectar el display
//y un 1 para catodo y un 0 para anodo
void Config_display_7_segments(int ledA, int ledB, int ledC,
                               int ledD, int ledE, int ledF,
                               int ledG, bool type_display);


//Funcion con retorno y que recibe 3 parametros
int Suma_3_numeros(int Num1, int Num2, int Num3);


void setup() {
  //Llamo a la funcion de configuracion de entrada
  Serial.begin(9600);
  ConfigPinesInput(); 
  ConfigPinesOutput();

  Config_display_7_segments(2,3,4,5,6,7,8,HIGH);
  Serial.println("Uso de funciones");
  Serial.print("La suma de 3 numeros es: ");
  Serial.println(Suma_3_numeros(10,20,30));  
  

}

void loop() {
  // put your main code here, to run repeatedly:

}


//Definicion de la funcion
//Esta funcion, unicamente configura pines de entrada
void ConfigPinesInput(void)
{
 pinMode(A0, INPUT);
 pinMode(A1, INPUT); 

 
}

void ConfigPinesOutput(void)
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

}

void Config_display_7_segments(int ledA, int ledB, int ledC,
                               int ledD, int ledE, int ledF,
                               int ledG, bool type_display)
                               
{
  //Declaracion de pines a utilizar como salida
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);

  if(type_display == HIGH)
  {
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, LOW);
  }
  else
  {
     digitalWrite(ledA,~HIGH);
    digitalWrite(ledB, ~HIGH);
    digitalWrite(ledC, ~HIGH);
    digitalWrite(ledD, ~HIGH);
    digitalWrite(ledE, ~HIGH);
    digitalWrite(ledF, ~HIGH);
    digitalWrite(ledG, ~LOW);  
  }
  
}



int Suma_3_numeros(int Num1, int Num2, int Num3)
{
  int resultado;

  resultado = Num1+Num2+Num3;

  return resultado;
}
