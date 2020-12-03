char a;
void setup() {
  // put your setup code here, to run once:
pinMode (13, OUTPUT);
Serial.begin(9600);
}

void loop() {
  char a= Serial.read();
 if (Serial.available ())
  // put your main code here, to run repeatedly:
a = digitalRead (13);
if (a=='1'){
  digitalWrite (13,HIGH);
}
else if (a=='0'){
  digitalWrite(13,LOW);
}
}
