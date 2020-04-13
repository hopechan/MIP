#define ROJO 6
#define AZUL 7
#define AMARILLO 5

void setup() {
    pinMode(AZUL, OUTPUT);
    pinMode(ROJO, OUTPUT);
    pinMode(AMARILLO, OUTPUT);
    digitalWrite(AZUL, LOW);
    digitalWrite(ROJO, LOW);
    digitalWrite(AMARILLO, LOW);
}

void loop() {
    // delay(500);
    digitalWrite(AZUL, HIGH);
    digitalWrite(ROJO, LOW);
    delay(5000);
    digitalWrite(AZUL, LOW);
    digitalWrite(AMARILLO, HIGH);
    delay(1000);
    digitalWrite(AMARILLO, LOW);
    digitalWrite(ROJO, HIGH);
    delay(5000);
    // digitalWrite(ROJO, LOW);
    // digitalWrite(AZUL, HIGH)

}
