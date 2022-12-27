//Test salidas Moxa ioLogik E2210
//Conectar salidas Moxa a los pines digitales 30,31,32,33,34,35,36 y 37 del arduino
//Led de verificación conectado al pin 53 activación a nivel bajo
//Incluída verificación en monitor Serie

int t = 10;
int pinBuzz = 10;
int pinLed = 53;
boolean flag0 = false;
boolean flag1 = false;
boolean flag2 = false;
boolean flag3 = false;
boolean flag4 = false;
boolean flag5 = false;
boolean flag6 = false;
boolean flag7 = false;

void setup() {
  Serial.begin(9600);
  pinMode(30, INPUT_PULLUP);
  pinMode(31, INPUT_PULLUP);
  pinMode(32, INPUT_PULLUP);
  pinMode(33, INPUT_PULLUP);
  pinMode(34, INPUT_PULLUP);
  pinMode(35, INPUT_PULLUP);
  pinMode(36, INPUT_PULLUP);
  pinMode(37, INPUT_PULLUP);

  pinMode(pinBuzz, OUTPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {  
  
  //*******************************  
    if (digitalRead(30) == HIGH) {
      digitalWrite(pinBuzz, LOW);
      digitalWrite(pinLed, LOW);
      flag0=true;
    } else {
      digitalWrite(pinBuzz, HIGH);
      digitalWrite(pinLed, HIGH);
      if(flag0==true){
        Serial.println("Salida 0");
        flag0 = false;
      }
      delay(t);
    }
    
  //*******************************
  if (digitalRead(31) == HIGH) {
      digitalWrite(pinBuzz, LOW);
      digitalWrite(pinLed, LOW);
      flag1=true;
    } else {
      digitalWrite(pinBuzz, HIGH);
      digitalWrite(pinLed, HIGH);
      if(flag1==true){
        Serial.println("Salida 1");
        flag1 = false;
      }
      delay(t);
    }
  
  //*******************************
   if (digitalRead(32) == HIGH) {
      digitalWrite(pinBuzz, LOW);
      digitalWrite(pinLed, LOW);
      flag2=true;
    } else {
      digitalWrite(pinBuzz, HIGH);
      digitalWrite(pinLed, HIGH);
      if(flag2==true){
        Serial.println("Salida 2");
        flag2 = false;
      }
      delay(t);
    }
    
  //*******************************  
   if (digitalRead(33) == HIGH) {
      digitalWrite(pinBuzz, LOW);
      digitalWrite(pinLed, LOW);
      flag3=true;
    } else {
      digitalWrite(pinBuzz, HIGH);
      digitalWrite(pinLed, HIGH);
      if(flag3==true){
        Serial.println("Salida 3");
        flag3 = false;
      }
      delay(t);
    }
    
  //*******************************  
   if (digitalRead(34) == HIGH) {
      digitalWrite(pinBuzz, LOW);
      digitalWrite(pinLed, LOW);
      flag4=true;
    } else {
      digitalWrite(pinBuzz, HIGH);
      digitalWrite(pinLed, HIGH);
      if(flag4==true){
        Serial.println("Salida 4");
        flag4 = false;
      }
      delay(t);
    }
    
  //*******************************  
   if (digitalRead(35) == HIGH) {
      digitalWrite(pinBuzz, LOW);
      digitalWrite(pinLed, LOW);
      flag5=true;
    } else {
      digitalWrite(pinBuzz, HIGH);
      digitalWrite(pinLed, HIGH);
      if(flag5==true){
        Serial.println("Salida 5");
        flag5 = false;
      }
      delay(t);
    }
    
  //*******************************  
   if (digitalRead(36) == HIGH) {
      digitalWrite(pinBuzz, LOW);
      digitalWrite(pinLed, LOW);
      flag6=true;
    } else {
      digitalWrite(pinBuzz, HIGH);
      digitalWrite(pinLed, HIGH);
      if(flag6==true){
        Serial.println("Salida 6");
        flag6 = false;
      }
      delay(t);
    }
    
  //*******************************  
   if (digitalRead(37) == HIGH) {
      digitalWrite(pinBuzz, LOW);
      digitalWrite(pinLed, LOW);
      flag7=true;
    } else {
      digitalWrite(pinBuzz, HIGH);
      digitalWrite(pinLed, HIGH);
      if(flag7==true){
        Serial.println("Salida 7");
        flag7 = false;
      }
      delay(t);
    }
    
}
