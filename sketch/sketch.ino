int PIN_TO_ILUMINATE = 8;
void setup() {
  
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.print("Hola");
  pinMode(PIN_TO_ILUMINATE, OUTPUT);  
  delay(1000);
  digitalWrite(PIN_TO_ILUMINATE, HIGH);
  delay(1000);
  digitalWrite(PIN_TO_ILUMINATE, LOW);

}

void loop() {

}
