
#define SIGNAL_PIN A0
#define LED 23
int value = 0; // variable to store the sensor value

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
               // wait 10 milliseconds
  value = analogRead(SIGNAL_PIN); // read the analog value from sensor
  
  Serial.print("Sensor value: ");
  Serial.println(value);

  while(SIGNAL_PIN > 0.5) {
    digitalWrite(LED, HIGH);
    
    }
  
}
