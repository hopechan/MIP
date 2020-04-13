#define PINLED 5
#define PINTRAN 3
int potencia = 0;

void setup() {
  pinMode(PINLED, OUTPUT);
  pinMode(PINTRAN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potencia = analogRead(A5);
  Serial.println(potencia);
  potencia=map(potencia,0,1023,0,255);
  analogWrite(PINLED, potencia);
  analogWrite(PINTRAN, potencia);

} 
