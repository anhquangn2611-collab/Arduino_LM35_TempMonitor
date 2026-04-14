const int sensorPin1 = A0; 
const int sensorPin2 = A1; 

void setup() { 
  Serial.begin(9600);
  // Dòng tiêu đề để các phần mềm khác biết cột nào là gì
  Serial.println("Temp_A0,Temp_A1"); 
}

void loop() {
  // Đọc cảm biến 1 (A0)
  int read1 = analogRead(sensorPin1);
  float temp1 = (read1 * 5.0 / 1024.0) * 100.0;

  // Đọc cảm biến 2 (A1)
  int read2 = analogRead(sensorPin2);
  float temp2 = (read2 * 5.0 / 1024.0) * 100.0;
  
  // In ra định dạng CSV: GiaTri1,GiaTri2
  Serial.print(temp1);
  Serial.print(","); 
  Serial.println(temp2);
  
  delay(2000); 
}