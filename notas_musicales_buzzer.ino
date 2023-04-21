
int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int Ch=523;
int cSH=554;
int dH=587;
int dSH=622;
int Eh=659;
int fh=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;
int Zumbador= 5;
int trig=3;
int eco=2;
int pingTravelTime;

void setup()    
{    
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  pinMode(Zumbador, OUTPUT);
 Serial.begin(9600);
}
void loop() {
   long tiempo, distancia; 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig, LOW);
  tiempo = pulseIn(eco, HIGH);
  distancia = tiempo/58;

if (distancia > 0 && distancia <= 2) { 
    tone(Zumbador, a,500);
    delay(10);
    }
else if (distancia > 3 && distancia <= 5) { 
    tone(Zumbador, a,500);
    delay(10);
    }
else if (distancia > 6 && distancia <= 8) { 
    tone(Zumbador, a,500);
    delay(10);
    }  
else if (distancia > 9 && distancia <=11) { 
    tone(Zumbador, f,350);
    delay(10);
    }
else if (distancia > 12 && distancia <= 14) { 
    tone(Zumbador, Ch,150);
    delay(10);
}
else if (distancia > 15 && distancia <= 17 ) { 
    tone(Zumbador, a,500);
    delay(10);
    }
else if (distancia > 18 && distancia <= 20) { 
    tone(Zumbador, f, 350);
    delay(10);
    }
else if (distancia > 21 && distancia <= 23) { 
    tone(Zumbador, Ch, 150);
    delay(10);
    }
else if (distancia > 24 && distancia <= 26) { 
    tone(Zumbador, a, 500);
    delay(10);
    }
else if (distancia > 27 && distancia <= 29) { 
    tone(Zumbador, Eh, 500);
    delay(10);
    }
else if (distancia > 30  && distancia <= 32) { 
    tone(Zumbador, Eh, 500);
    delay(10);
    }
else if (distancia > 33 && distancia <= 35) { 
    tone(Zumbador, Eh, 500);
    delay(10);
    }
else if (distancia > 36 && distancia <= 38) { 
    tone(Zumbador, fh, 350);
    delay(10);
    }  

}


   
   
