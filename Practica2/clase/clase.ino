#define BOTON 2
#define LED1 3
#define LED2 6
#define LED3 7

int valorBoton = 0;
int valorLed1 = 0;
int valorLed2 = 0;
int valorLed3 = 0;

void setup() {
    pinMode(BOTON, INPUT);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    Serial.begin(9600);
}

void loop() {
    valorBoton = digitalRead(BOTON);
    valorLed1 = digitalRead(LED1);
    valorLed2 = digitalRead(LED2);
    valorLed3 = digitalRead(LED3);
    Serial.println(valorBoton);
    delay(200);
//    //Si se pulsa el boton, se enciende el LED
//    if(valorBoton == 1){
//      digitalWrite(LED, HIGH);
//   }
//   //si el esta encendido
//   if(valorLed == HIGH && valorBoton == 1){
//    digitalWrite(LED, LOW);
//   }
//
//   if(valorLed == LOW && valorBoton == 1){
//    digitalWrite(LED, HIGH);
//   }

  if(valorLed1 == LOW && valorLed2 == LOW && valorLed3 == LOW && valorBoton == 1){
    digitalWrite(LED1, HIGH);
  }
  if(valorLed1 == HIGH && valorLed2 == LOW && valorLed3 == LOW && valorBoton == 1){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  }
  if(valorLed1 == LOW && valorLed2 == HIGH && valorLed3 == LOW && valorBoton == 1){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
  if(valorLed1 == LOW && valorLed2 == LOW && valorLed3 == HIGH && valorBoton == 1){
    digitalWrite(LED3, LOW);
  }
  
  
}   
