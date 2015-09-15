int analogPin = 2;
int value;
float voltage;

void setup() {
  Serial.begin(9600);
}

void loop (){
  value = analogRead(analogPin);
  voltage = value;
  
  Serial.println(voltage);
  
  delay(1000);
}
