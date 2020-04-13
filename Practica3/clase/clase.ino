#define LED 3
#define POTENCIOMETRO A5
#define BOTON 5
int lectura;
int valorBoton;
int valorLed;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BOTON, INPUT);
  digitalWrite(LED, LOW);
  Serial.begin(9600);

}

void loop() {
  valorBoton = digitalRead(BOTON);
  valorLed = digitalRead(LED);
  lectura = analogRead(POTENCIOMETRO);
  //Si se pulsa el boton y el LED esta apagado
  if(valorBoton == 1 && valorLed == LOW){
    digitalWrite(LED, HIGH);
  }

  //Si se pulsa el boton por segunda vez
  if(valorLed == HIGH){
    lectura = map(lectura, 0, 1023, 0, 255);
    analogWrite(LED, lectura);
    Serial.println(lectura);
    delay(50);
  }

  //Si se pulsa el boton por tercera vez
  if(valorBoton == 1 && lectura > 1000){
    analogWrite(LED, LOW);
  }
  // put your main code here, to run repeatedly:
}
