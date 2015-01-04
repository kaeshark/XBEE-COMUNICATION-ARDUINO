int led = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){

 if(Serial.read()=='H') {
 digitalWrite(led,HIGH);
 delay(10);
   Serial.print('H');

 }
 if(Serial.read()=='L') {
 digitalWrite(led,LOW);
  delay(10);
    Serial.print('L');

 } 
  
}

}
