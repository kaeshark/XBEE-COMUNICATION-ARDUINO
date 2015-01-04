int boton= 8;
int led= 13;

void setup() {
  // put your setup code here, to run once:
pinMode(boton, INPUT );
pinMode(led, OUTPUT );
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(boton)==HIGH){
  Serial.print('H');
  digitalWrite(led, LOW);
  delay(10);
  }
  else{
  Serial.print('L');
    digitalWrite(led, HIGH);

  delay(10);  
  }
}
