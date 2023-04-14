/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral KINAL
 Electronica
 Grado:5to A
 Nombre:Roberto Monterroso
 Carne :2019507
 */
#define UP 2 
#define DOWN 3 
 int b = 0;
 int c = 0;
struct producto{
 char     Nombre[20];
 int      Precio;
 int      Stock;
 char     Reserva[20];
 int      precio_de_lote;
 };
producto producto1 = {"RUFFLES 1",5,25,"Si hay en existencia"};
producto producto2 = {"DORITOS 2",5,30,"No hay en existencia",};
producto producto3 = {"CHETOS 3",8,20,"si hay en existencia",};
producto producto4 = {"CRUJITOS 4",4,35,"si hay en existencia",};
void setup() {
 pinMode(UP, INPUT);
 pinMode(DOWN, INPUT);
 Serial.begin(9600);
 Serial.println("Bienvenido a la tienda TONITO SILVA");
};
void loop() {
 if (digitalRead(UP)== HIGH){
  c = 1;
  b++;
  delay(100);}
 if(b>4){
  b = 1;}
  if (digitalRead(DOWN)== HIGH){
  c = 1;
  b--;
  delay(100);}
  if(b<1){
  b = 4;}
while(c==1){
  switch(b)
  {
    case(1):
    {
    Serial.println(producto1.Nombre);
    Serial.println(producto1.Precio);
    Serial.println(producto1.Stock);
    Serial.println(producto1.Reserva);
    Serial.println(producto1.Precio*producto1.Stock);
    Serial.println("");
     delay(500);

    c=2;
    break;    
  }
  case(2):
  {
    Serial.println(producto2.Nombre);
    Serial.println(producto2.Precio);
    Serial.println(producto2.Stock);
    Serial.println(producto2.Reserva);
    Serial.println(producto2.Precio*producto2.Stock);
    Serial.println("");
     delay(500);

    c=2;
    break; 
}
 case(3):
  {
    Serial.println(producto3.Nombre);
    Serial.println(producto3.Precio);
    Serial.println(producto3.Stock);
    Serial.println(producto3.Reserva);
    Serial.println(producto3.Precio*producto3.Stock);
    Serial.println("");
     delay(500);
    
    c=2;
    break; 
}
 case(4):
  {
    Serial.println(producto4.Nombre);
    Serial.println(producto4.Precio);
    Serial.println(producto4.Stock);
    Serial.println(producto4.Reserva);
    Serial.println(producto4.Precio*producto4.Stock);
    Serial.println("");
     delay(500);
  
    c=2;
    break; 
}
  }
}
}
