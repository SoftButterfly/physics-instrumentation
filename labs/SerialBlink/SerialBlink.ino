int led = 12;
int delayTime = 1000;

void setup() {                
  Serial.begin(9600);
  pinMode(led, OUTPUT);     
  pinMode(12, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  if(Serial.available() > 0){
    delayTime = Serial.parseInt();
  }
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);               // wait for a second
}
