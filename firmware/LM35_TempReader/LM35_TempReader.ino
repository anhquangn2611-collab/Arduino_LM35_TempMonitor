const int sensorPin = A0; 

void setup() { 
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0 / 1024.0;
  float temperatureC = voltage * 100.0;
  
  Serial.print("Nhiet do hien tai: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  
  delay(1000);
}