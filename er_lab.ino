int redLed = 12;

int greenLed = 10;

int buzzer = 8;

int smokeA0 = A0;

// Your threshold value

int sensorThres = 300;

void setup() {
  pinMode(redLed, OUTPUT); 
  pinMode(greenLed, OUTPUT); 
  pinMode(buzzer, OUTPUT); 
  pinMode(smokeA0, INPUT); 
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);
  Serial.print("Pin A0: "); 
  Serial.println(analogSensor); 
  delay (1000);

  // Checks if it has reached the threshold value 
  if (analogSensor > sensorThres){ 
    digitalWrite(redLed, HIGH); digitalWrite(greenLed, LOW); tone (buzzer, 1000, 200);
  } else{
  digitalWrite(redLed, LOW); digitalWrite (greenLed, HIGH); noTone(buzzer);
  }

  delay (100);

}
