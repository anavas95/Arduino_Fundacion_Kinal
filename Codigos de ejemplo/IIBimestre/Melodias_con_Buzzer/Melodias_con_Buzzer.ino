
/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Buzzer 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 14 de abril
*/
int ZumbadorPin = 11; // definimos el pin al que conectaremos el zumbador.
 
/*definimos cada una de las frecuencias de las notas musicales.
c, d, e... son las notas en notación inglesa.
Cuando van acompañadas de la letra S significa que esa nota es sostenido.
Cuando van acompañadas de la letra H significa que esa nota está en una
octava superior (High).
*/
 
int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;
 
 
void setup()    
{    
 
  pinMode(ZumbadorPin, OUTPUT); // definimos la variable ZumbadorPin como una salida.
 
}    
     
void loop()   
{   
/* Empieza la melodia, para ello utilizamos la función tone con los 
parámetros:
- el pin de salida, en nuestro caso el 11.
- la nota para la que ya hemos definido su frecuencia. 
- la duración de la nota en ms.
Después de la función tone utilizamos la función delay para crear
un silencio del valor igual a la nota y así separar las notas unas
de otras (si no, no se marca bien la nota).
Añadimos los 50 ms simplemente porque nos parece que ese pequeño 
aumento del silencio hace que se escuche mejor la melodía pero se
puede quitar sin problemas. 
 */
    tone(ZumbadorPin, a, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 500);
    delay(500+50);     
    tone(ZumbadorPin, a, 500); 
    delay(500+50);
    tone(ZumbadorPin, f, 350);  
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50); 
    
    tone(ZumbadorPin, a, 500);
    delay(500+50);
    tone(ZumbadorPin, f, 350);
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    tone(ZumbadorPin, a, 1000);   
    delay(1000+50);
   
    tone(ZumbadorPin, eH, 500);
    delay(500+50);
    tone(ZumbadorPin, eH, 500);
    delay(500+50);
    tone(ZumbadorPin, eH, 500); 
    delay(500+50);   
    tone(ZumbadorPin, fH, 350);
    delay(350+50); 
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    
    tone(ZumbadorPin, gS, 500);
    delay(500+50);
    tone(ZumbadorPin, f, 350);
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    tone(ZumbadorPin, a, 1000);
    delay(1000+50);
    
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 350);
    delay(350+50); 
    tone(ZumbadorPin, a, 150);
    delay(150+50);
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, gSH, 250); 
    delay(250+50);
    tone(ZumbadorPin, gH, 250);
    delay(250+50);
    
    tone(ZumbadorPin, fSH, 125);
    delay(125+50);
    tone(ZumbadorPin, fH, 125);
    delay(125+50);    
    tone(ZumbadorPin, fSH, 250);
    delay(250+50);
    delay(250);
    tone(ZumbadorPin, aS, 250);
    delay(250+50);    
    tone(ZumbadorPin, dSH, 500); 
    delay(500+50); 
    tone(ZumbadorPin, dH, 250); 
    delay(250+50); 
    tone(ZumbadorPin, cSH, 250);
    delay(250+50);  
    
    // virtuosismo :)))
    
    tone(ZumbadorPin, cH, 125);
    delay(125+50);  
    tone(ZumbadorPin, b, 125); 
    delay(125+50); 
    tone(ZumbadorPin, cH, 250); 
    delay(250+50);     
    delay(250);
    tone(ZumbadorPin, f, 125); 
    delay(125+50); 
    tone(ZumbadorPin, gS, 500); 
    delay(500+50); 
    tone(ZumbadorPin, f, 375); 
    delay(375+50); 
    tone(ZumbadorPin, a, 125);
    delay(125+50); 
    
    tone(ZumbadorPin, cH, 500); 
    delay(500+50);
    tone(ZumbadorPin, a, 375);  
    delay(375+50);
    tone(ZumbadorPin, cH, 125); 
    delay(125+50);
    tone(ZumbadorPin, eH, 1000); 
    delay(1000+50);
 
    
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 350); 
    delay(350+50);
    tone(ZumbadorPin, a, 150);
    delay(150+50);
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, gSH, 250);
    delay(250+50); 
    tone(ZumbadorPin, gH, 250);
    delay(250+50);
    
    tone(ZumbadorPin, fSH, 125);
    delay(125+50);
    tone(ZumbadorPin, fH, 125);  
    delay(125+50);  
    tone(ZumbadorPin, fSH, 250);
    delay(250+50);
    delay(250);
    tone(ZumbadorPin, aS, 250);  
    delay(250+50);  
    tone(ZumbadorPin, dSH, 500);  
    delay(500+50);
    tone(ZumbadorPin, dH, 250);  
    delay(250+50);
    tone(ZumbadorPin, cSH, 250);
    delay(250+50);  
 
    
    tone(ZumbadorPin, cH, 125);  
    delay(125+50);
    tone(ZumbadorPin, b, 125);  
    delay(125+50);
    tone(ZumbadorPin, cH, 250);
    delay(250+50);      
    delay(250);
    tone(ZumbadorPin, f, 250); 
    delay(250+50); 
    tone(ZumbadorPin, gS, 500); 
    delay(500+50); 
    tone(ZumbadorPin, f, 375);  
    delay(375+50);
    tone(ZumbadorPin, cH, 125); 
    delay(125+50);
           
    tone(ZumbadorPin, a, 500); 
    delay(500+50);           
    tone(ZumbadorPin, f, 375);  
    delay(375+50);          
    tone(ZumbadorPin, c, 125); 
    delay(125+50);  
    tone(ZumbadorPin, a, 1000);
    delay(1000+50);       
 
    delay(2000);  // dos segundos para volver a empezar.
}
