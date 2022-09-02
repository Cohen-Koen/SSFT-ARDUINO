
#define SIGNAL_PIN A0
int value = 0; // variable to store the sensor value

void setup() {
  Serial.begin(9600); // SERIAL OUT init
  pinMode(23, OUTPUT); // PIN 23 is OUTPUT
}

void loop() {
               // wait 10 milliseconds
  value = analogRead(SIGNAL_PIN); // read the analog value from sensor
  if(value > 120) { 
    digitalWrite(23,HIGH); //23 5V
    
    }else{digitalWrite(23,LOW);}
  Serial.print("Sensor value: ");
  Serial.println(value);


   delay(100);
  
}
