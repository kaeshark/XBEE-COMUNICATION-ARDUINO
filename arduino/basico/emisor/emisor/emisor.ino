int boton1= 10;

int led= 13;

void setup() {
  // put your setup code here, to run once:
pinMode(boton1, INPUT );

pinMode(led, OUTPUT );
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(boton1)==LOW){
    Serial.print("L"); 
    digitalWrite(led,HIGH);
}
  if(digitalRead(boton1)==HIGH){
    Serial.print("H"); 
        digitalWrite(led,LOW);
}
}
