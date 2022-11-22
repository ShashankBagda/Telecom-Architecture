void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  //UPLOAD
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(A0,HIGH);
  delay(500);
  digitalWrite(A2,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(A0,LOW);
  digitalWrite(A2,LOW);
  delay(500);

  //DOWNLOAD
  digitalWrite(A3,HIGH);
  delay(500);
  digitalWrite(A1,HIGH);
  delay(500);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(A3,LOW);
  digitalWrite(A1,LOW);
  digitalWrite(13,LOW);
  digitalWrite(11,LOW);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
  digitalWrite(5,LOW);
  delay(500);

}