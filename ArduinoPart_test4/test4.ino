/* 
  IR Breakbeam sensor demo!
*/

#define LEDPIN 13

#define SENSORPIN 7
#define SENSORPINTWO 2
#define SENSORPINTHREE 3
#define SENSORPINFOUR 4
#define SENSORPINFIVE 5
#define SENSORPINSIX 6


// variables will change:
int sensorState1 = 0, lastState1=0;         // variable for reading the pushbutton status
int sensorState2 = 0, lastState2=0;
int sensorState3 = 0, lastState3=0;
int sensorState4 = 0, lastState4=0;
int sensorState5 = 0, lastState5=0;
int sensorState6 = 0, lastState6=0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(LEDPIN, OUTPUT);      
  // initialize the sensor pin as an input:
  pinMode(SENSORPIN, INPUT);
  pinMode(SENSORPINTWO, INPUT);
  pinMode(SENSORPINTHREE, INPUT);
  pinMode(SENSORPINFOUR, INPUT);
  pinMode(SENSORPINFIVE, INPUT);
  pinMode(SENSORPINSIX, INPUT);          
  
  digitalWrite(SENSORPIN, HIGH); // turn on the pullup
  digitalWrite(SENSORPINTWO, HIGH);
  digitalWrite(SENSORPINTHREE, HIGH);
  digitalWrite(SENSORPINFOUR, HIGH);
  digitalWrite(SENSORPINFIVE, HIGH);
  digitalWrite(SENSORPINSIX, HIGH);
  Serial.begin(9600);
}

void loop(){
  // read the state of the pushbutton value:
  sensorState1 = digitalRead(SENSORPIN);
  sensorState2 = digitalRead(SENSORPINTWO);
  sensorState3 = digitalRead(SENSORPINTHREE);
  sensorState4 = digitalRead(SENSORPINFOUR);
  sensorState5 = digitalRead(SENSORPINFIVE);
  sensorState6 = digitalRead(SENSORPINSIX);

  // check the light
  if ((sensorState1 == LOW || sensorState2 == LOW || sensorState3 == LOW || sensorState4 == LOW || sensorState5 == LOW || sensorState6 == LOW)) {     
    // turn LED on:
    digitalWrite(LEDPIN, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(LEDPIN, LOW); 
  }


  
  if (sensorState1 && !lastState1) {
    Serial.print("Unbroken1 ");
  } 
  
  if(!sensorState1 && lastState1){
    Serial.print("Broken1 ");
  }

  if (sensorState2 && !lastState2){
    Serial.print("Unbroken2 ");
    }
    
  if (!sensorState2 && lastState2){
     Serial.print("Broken2 ");
    }

  if (sensorState3 && !lastState3){
    Serial.print("Unbroken3 ");
    }
    
  if (!sensorState3 && lastState3){
     Serial.print("Broken3 ");
    }

  if (sensorState4 && !lastState4){
    Serial.print("Unbroken4 ");
    }
    
  if (!sensorState4 && lastState4){
     Serial.print("Broken4 ");
    }
    
  if (sensorState5 && !lastState5){
    Serial.print("Unbroken5 ");
    }
    
  if (!sensorState5 && lastState5){
     Serial.print("Broken5 ");
    }

  if (sensorState6 && !lastState6){
    Serial.print("Unbroken6 ");
    }
    
  if (!sensorState6 && lastState6){
     Serial.print("Broken6 ");
    }


   
  lastState1 = sensorState1;
  lastState2 = sensorState2;
  lastState3 = sensorState3;
  lastState4 = sensorState4;
  lastState5 = sensorState5;
  lastState6 = sensorState6;
  
}
