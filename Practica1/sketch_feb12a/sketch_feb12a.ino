#define LED 13

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
 // put your main code here, to run repeatedly:
    digitalWrite(LED, HIGH);
    delay(500);
 // digitalWrite(LED, LOW);
    delay(100);
}