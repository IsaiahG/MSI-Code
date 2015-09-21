int numFlips = 10;
int headsLED = 6;
int tailsLED = 7;
int headsCount = 0;
int tailsCount = 0;
int setCount = 100;
int setsUthree = 0

void setup ()  {
  randomSeed (analogRead (A0));
  
  pinMode (headsLED, OUTPUT);
  pinMode (tailsLED, OUTPUT);
  
  Serial.begin (9600) ;
  for(int y = 0; y < setCount; y++) {
  for(int x = 0; x < numFlips; x++) {
    
    int  flip = random (2);
    
    if(flip < 0) {
    /* Serial.println ("Heads") ;
      digitalWrite (headsLED, HIGH) ;
      delay(10) ;
      digitalWrite (headsLED, LOW) ;
      delay (5);*/
      headsCount ++;
    
  }
    
    }
    if (headsCount > 4 ) {
digitalWrite(tailsLED, HIGH);
delay(1);
digitalWrite(tailsLED, LOW);
setsUnderthree ++;
    }
Serial.print ("Heads: ");
    if (headsCount < 762 ){
  digitalWrite(headsLED, HIGH);
  delay(1);
  digitalWrite (headsLED, LOW);
    Serial.println(headsCount);
      headsCount = 0;
  }
}
Serial.println(“Sets with results under three : ” ) ;
Serial.print(setsUnderthree);
void loop (){} ;










int numFlips = 20;
int headsLED = 6;
int tailsLED = 7;
int headsCount = 0;
int tailsCount = 0;
int setCount = 100;
int setsUthree = 0

void setup ()  {
  randomSeed (analogRead (A0));
  
  pinMode (headsLED, OUTPUT);
  pinMode (tailsLED, OUTPUT);
  
  Serial.begin (9600) ;
  for(int y = 0; y < setCount; y++) {
  for(int x = 0; x < numFlips; x++) {
    
    int  flip = random (2);
    
    if(flip > 0) {
    /* Serial.println ("Heads") ;
      digitalWrite (headsLED, HIGH) ;
      delay(10) ;
      digitalWrite (headsLED, LOW) ;
      delay (5);*/
      headsCount ++;
    
  }
    
    }
    if (headsCount > 7 ) {
digitalWrite(tailsLED, HIGH);
delay(1);
digitalWrite(tailsLED, LOW);
setsUnderthree ++;
    }
Serial.print ("Heads: ");
    if (headsCount < 762 ){
  digitalWrite(headsLED, HIGH);
  delay(1);
  digitalWrite (headsLED, LOW);
    Serial.println(headsCount);
      headsCount = 0;
  }
}
Serial.println(“Sets with results under three : ” ) ;
Serial.print(setsUthree);
void loop (){} ;








int numShots = 10;
int goodCount = 0;
int badCount = 0;
int setCount = 100;
int setsUfive = 0

void setup ()  {
  randomSeed (analogRead (A0));
  
  pinMode (headsLED, OUTPUT);
  pinMode (tailsLED, OUTPUT);
  
  Serial.begin (9600) ;
  for(int y = 0; y < setCount; y++) {
  for(int x = 0; x < numFlips; x++) {
    
    int  flip = random (4);
    
    if(flip <4 ) {
  
           headsCount ++;
    
  }
    
    }
    if (goodCount > 2 ) {

setsUfive ++;
    }
Serial.print ("Heads: ");
    if (headsCount < 5 ){
 
      headsCount = 0;
  }
}
Serial.println(“Sets with results under five : ” ) ;
Serial.print(setsUfive);
void loop (){} ;






int numSwings = 30;
int goodCount = 0;
int badCount = 0;
int setCount = 100;
int setsUsix = 0

void setup ()  {
  randomSeed (analogRead (A0));
  

  
  Serial.begin (9600) ;
  for(int y = 0; y < setCount; y++) {
(goodCount == 0);
  for(int x = 0; x < numFlips; x++) {
    
    int  flip = random (1000);
    
    if(flip < 284 ) {
  
           goodCount ++;
    
  }
    
    }
    if (goodCount > 6 ) {

setsUsix ++;
    }

}
Serial.println(“Sets with results under five : ” ) ;
Serial.print(setsUfive);
void loop (){} ;
