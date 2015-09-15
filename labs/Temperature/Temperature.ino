int analogPin = 2;
int value;
float voltage;
float temperature;


void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL);
}

void loop (){
  value = analogRead(analogPin);
  voltage = value*1.1/1023.0;
  
  Serial.println(voltage);
  
  delay(1000);
}
