int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;
int buttonState8 = 0;
int buttonState9 = 0;
int buttonState10 = 0;
int buttonState11 = 0;
int buttonState12 = 0;
int buttonState13 = 0;
int buttonState0 = 0;

void setup() 
{
  // 14 - Digital Input
  pinMode(1,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  pinMode(0,INPUT);

  // 44 - OUTPUT
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(A6,OUTPUT);
  pinMode(A7,OUTPUT);
  pinMode(A8,OUTPUT);
  pinMode(A9,OUTPUT);
  pinMode(A10,OUTPUT);
  pinMode(A11,OUTPUT);
  pinMode(A12,OUTPUT);
  pinMode(A13,OUTPUT);
  
  pinMode(14,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(20,OUTPUT);
  pinMode(21,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(31,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(37,OUTPUT);
  pinMode(38,OUTPUT);
  pinMode(39,OUTPUT);
  pinMode(40,OUTPUT);
  pinMode(41,OUTPUT);
  pinMode(42,OUTPUT);
  pinMode(43,OUTPUT);
}

void loop() 
{
  buttonState1 = digitalRead(1);
  buttonState2 = digitalRead(2);
  buttonState3 = digitalRead(3);
  buttonState4 = digitalRead(4);
  buttonState5 = digitalRead(5);
  buttonState6 = digitalRead(6);
  buttonState7 = digitalRead(7);
  buttonState8 = digitalRead(8);
  buttonState9 = digitalRead(9);
  buttonState10 = digitalRead(10);
  buttonState11 = digitalRead(11);
  buttonState12 = digitalRead(12);
  buttonState13 = digitalRead(13);
  buttonState0 = digitalRead(0);

  // COMBINATION WITH 1
  if(buttonState1 == HIGH && buttonState2 == HIGH)
  {
    digitalWrite(A0, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A3, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A0, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A3, LOW);
    delay(2000);

    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A1, HIGH);

    //All Clear
    digitalWrite(A2, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A1, LOW);
    delay(2000);
  }

  else if(buttonState1 == HIGH && buttonState3 == HIGH)
  {
    digitalWrite(A0, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A5, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A0, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A5, LOW);
    delay(2000);

    digitalWrite(A4, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A1, HIGH);

    //All Clear
    digitalWrite(A4, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A1, LOW);
    delay(2000);
  }

  else if(buttonState1 == HIGH && buttonState5 == HIGH)
  {
    digitalWrite(A0, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A9, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A0, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A9, LOW);
    delay(2000);

    digitalWrite(A8, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A8, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    delay(2000);
  }

  else if(buttonState1 == HIGH && buttonState6 == HIGH)
  {
    digitalWrite(A0, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(14, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A0, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(16, LOW);
    digitalWrite(14, LOW);
    delay(2000);

    digitalWrite(15, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A1, HIGH);
    delay(500);

    //All Clear
    digitalWrite(15, LOW);
    digitalWrite(17, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A1, LOW);
    delay(2000);
  }

  else if(buttonState1 == HIGH && buttonState7 == HIGH)
  {
    digitalWrite(A0, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(18, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A0, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);
    digitalWrite(18, LOW);
    delay(2000);

    digitalWrite(19, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A1, HIGH);
    delay(500);

    //All Clear
    digitalWrite(19, LOW);
    digitalWrite(23, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A1, LOW);
    delay(2000);
  }

  else if(buttonState1 == HIGH && buttonState9 == HIGH)
  {
    digitalWrite(A0, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(28, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A0, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(28, LOW);
    delay(2000);

    digitalWrite(29, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A1, HIGH);
    delay(500);

    //All Clear
    digitalWrite(29, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A1, LOW);
    delay(2000);
  }

  else if(buttonState1 == HIGH && buttonState11 == HIGH)
  {
    digitalWrite(A0, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(32, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A0, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(32, LOW);
    delay(2000);

    digitalWrite(33, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A1, HIGH);
    delay(500);

    //All Clear
    digitalWrite(33, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A1, LOW);
    delay(2000);
  }

  else if(buttonState1 == HIGH && buttonState12 == HIGH)
  {
    digitalWrite(A0, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(34, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A0, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(34, LOW);
    delay(2000);

    digitalWrite(35, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A1, HIGH);
    delay(500);

    //All Clear
    digitalWrite(35, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A1, LOW);
    delay(2000);
  }

  //COMBINATION WITH 2
  else if(buttonState2 == HIGH && buttonState3 == HIGH)
  {
    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A4, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A2, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A4, LOW);
    delay(2000);

    digitalWrite(A5, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A3, HIGH);

    //All Clear
    digitalWrite(A5, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A3, LOW);
    delay(2000);
  }

  else if(buttonState2 == HIGH && buttonState5 == HIGH)
  {
    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A8, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A2, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A8, LOW);
    delay(2000);

    digitalWrite(A9, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A3, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A9, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A3, LOW);
    delay(2000);
  }

  else if(buttonState2 == HIGH && buttonState6 == HIGH)
  {
    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(14, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A2, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(16, LOW);
    digitalWrite(14, LOW);
    delay(2000);

    digitalWrite(15, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A3, HIGH);
    delay(500);

    //All Clear
    digitalWrite(15, LOW);
    digitalWrite(17, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A3, LOW);
    delay(2000);
  }

  else if(buttonState2 == HIGH && buttonState7 == HIGH)
  {
    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(18, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A2, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);
    digitalWrite(18, LOW);
    delay(2000);

    digitalWrite(19, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A3, HIGH);
    delay(500);

    //All Clear
    digitalWrite(19, LOW);
    digitalWrite(23, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A3, LOW);
    delay(2000);
  }

  else if(buttonState2 == HIGH && buttonState9 == HIGH)
  {
    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(28, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A2, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(28, LOW);
    delay(2000);

    digitalWrite(29, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A3, HIGH);
    delay(500);

    //All Clear
    digitalWrite(29, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A3, LOW);
    delay(2000);
  }

  else if(buttonState2 == HIGH && buttonState11 == HIGH)
  {
    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(32, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A2, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(32, LOW);
    delay(2000);

    digitalWrite(33, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A3, HIGH);
    delay(500);

    //All Clear
    digitalWrite(33, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A3, LOW);
    delay(2000);
  }

  else if(buttonState2 == HIGH && buttonState12 == HIGH)
  {
    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(34, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A2, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(34, LOW);
    delay(2000);

    digitalWrite(35, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A3, HIGH);
    delay(500);

    //All Clear
    digitalWrite(35, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A3, LOW);
    delay(2000);
  }


  //COMBINATION WITH 3

  else if(buttonState3 == HIGH && buttonState5 == HIGH)
  {
    digitalWrite(A4, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A8, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A4, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A8, LOW);
    delay(2000);

    digitalWrite(A9, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A5, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A9, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A5, LOW);
    delay(2000);
  }

  else if(buttonState3 == HIGH && buttonState6 == HIGH)
  {
    digitalWrite(A4, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(14, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A4, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(16, LOW);
    digitalWrite(14, LOW);
    delay(2000);

    digitalWrite(15, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A5, HIGH);
    delay(500);

    //All Clear
    digitalWrite(15, LOW);
    digitalWrite(17, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A5, LOW);
    delay(2000);
  }

  else if(buttonState3 == HIGH && buttonState7 == HIGH)
  {
    digitalWrite(A4, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(18, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A4, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);
    digitalWrite(18, LOW);
    delay(2000);

    digitalWrite(19, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A5, HIGH);
    delay(500);

    //All Clear
    digitalWrite(19, LOW);
    digitalWrite(23, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A5, LOW);
    delay(2000);
  }

  else if(buttonState3 == HIGH && buttonState9 == HIGH)
  {
    digitalWrite(A4, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(28, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A4, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(28, LOW);
    delay(2000);

    digitalWrite(29, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A5, HIGH);
    delay(500);

    //All Clear
    digitalWrite(29, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A5, LOW);
    delay(2000);
  }

  else if(buttonState3 == HIGH && buttonState11 == HIGH)
  {
    digitalWrite(A4, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(32, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A4, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(32, LOW);
    delay(2000);

    digitalWrite(33, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A5, HIGH);
    delay(500);

    //All Clear
    digitalWrite(33, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A5, LOW);
    delay(2000);
  }

  else if(buttonState3 == HIGH && buttonState12 == HIGH)
  {
    digitalWrite(A4, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(34, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A4, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(34, LOW);
    delay(2000);

    digitalWrite(35, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A5, HIGH);
    delay(500);

    //All Clear
    digitalWrite(35, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A5, LOW);
    delay(2000);
  }

  //COMBINATION WITH 4

  else if(buttonState4 == HIGH && buttonState5 == HIGH)
  {
    digitalWrite(A6, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A8, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A6, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A8, LOW);
    delay(2000);

    digitalWrite(A9, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A7, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A9, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A7, LOW);
    delay(2000);
  }

  else if(buttonState4 == HIGH && buttonState6 == HIGH)
  {
    digitalWrite(A6, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(14, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A6, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(16, LOW);
    digitalWrite(14, LOW);
    delay(2000);

    digitalWrite(15, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A7, HIGH);
    delay(500);

    //All Clear
    digitalWrite(15, LOW);
    digitalWrite(17, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A7, LOW);
    delay(2000);
  }

  else if(buttonState4 == HIGH && buttonState7 == HIGH)
  {
    digitalWrite(A6, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(18, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A6, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);
    digitalWrite(18, LOW);
    delay(2000);

    digitalWrite(19, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A7, HIGH);
    delay(500);

    //All Clear
    digitalWrite(19, LOW);
    digitalWrite(23, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A7, LOW);
    delay(2000);
  }

  else if(buttonState4 == HIGH && buttonState8 == HIGH)
  {
    digitalWrite(A6, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(20, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A6, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);
    digitalWrite(20, LOW);
    delay(2000);

    digitalWrite(21, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A7, HIGH);
    delay(500);

    //All Clear
    digitalWrite(21, LOW);
    digitalWrite(23, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A7, LOW);
    delay(2000);
  }

  else if(buttonState4 == HIGH && buttonState10 == HIGH)
  {
    digitalWrite(A6, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(30, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A6, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(30, LOW);
    delay(2000);

    digitalWrite(31, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A7, HIGH);
    delay(500);

    //All Clear
    digitalWrite(31, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A7, LOW);
    delay(2000);
  }

  // COMBINATION WITH 5

  else if(buttonState5 == HIGH && buttonState6 == HIGH)
  {
    digitalWrite(A8, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(14, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A8, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(16, LOW);
    digitalWrite(14, LOW);
    delay(2000);

    digitalWrite(15, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A9, HIGH);
    delay(500);

    //All Clear
    digitalWrite(15, LOW);
    digitalWrite(17, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A9, LOW);
    delay(2000);
  }

  else if(buttonState5 == HIGH && buttonState7 == HIGH)
  {
    digitalWrite(A8, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(18, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A8, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);
    digitalWrite(18, LOW);
    delay(2000);

    digitalWrite(19, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A9, HIGH);
    delay(500);

    //All Clear
    digitalWrite(19, LOW);
    digitalWrite(23, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A9, LOW);
    delay(2000);
  }

  else if(buttonState5 == HIGH && buttonState8 == HIGH)
  {
    digitalWrite(A8, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(20, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A8, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);
    digitalWrite(20, LOW);
    delay(2000);

    digitalWrite(21, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A9, HIGH);
    delay(500);

    //All Clear
    digitalWrite(21, LOW);
    digitalWrite(23, LOW);
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A9, LOW);
    delay(2000);
  }

  else if(buttonState5 == HIGH && buttonState9 == HIGH)
  {
    digitalWrite(A8, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(28, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A8, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(28, LOW);
    delay(2000);

    digitalWrite(29, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A9, HIGH);
    delay(500);

    //All Clear
    digitalWrite(29, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A9, LOW);
    delay(2000);
  }

  else if(buttonState5 == HIGH && buttonState10 == HIGH)
  {
    digitalWrite(A8, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(30, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A8, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(30, LOW);
    delay(2000);

    digitalWrite(31, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A9, HIGH);
    delay(500);

    //All Clear
    digitalWrite(31, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A9, LOW);
    delay(2000);
  }

  else if(buttonState5 == HIGH && buttonState11 == HIGH)
  {
    digitalWrite(A8, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(32, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A8, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(32, LOW);
    delay(2000);

    digitalWrite(33, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A9, HIGH);
    delay(500);

    //All Clear
    digitalWrite(33, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A9, LOW);
    delay(2000);
  }

  else if(buttonState5 == HIGH && buttonState12 == HIGH)
  {
    digitalWrite(A8, HIGH);
    delay(500);
    digitalWrite(A10, HIGH);
    delay(500);
    digitalWrite(A12, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(34, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A8, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(34, LOW);
    delay(2000);

    digitalWrite(35, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(A13, HIGH);
    delay(500);
    digitalWrite(A11, HIGH);
    delay(500);
    digitalWrite(A9, HIGH);
    delay(500);

    //All Clear
    digitalWrite(35, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A9, LOW);
    delay(2000);
  }

  // COMBINATION WITH 6
  else if(buttonState6 == HIGH && buttonState7 == HIGH)
  {
    digitalWrite(14, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(19, HIGH);
    delay(500);

    //All Clear
    digitalWrite(14, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(23, LOW);
    digitalWrite(19, LOW);
    delay(2000);

    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(15, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(18, LOW);
    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(15, LOW);
    delay(2000);
  }

  else if(buttonState6 == HIGH && buttonState8 == HIGH)
  {
    digitalWrite(14, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(21, HIGH);
    delay(500);

    //All Clear
    digitalWrite(14, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(23, LOW);
    digitalWrite(21, LOW);
    delay(2000);

    digitalWrite(20, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(15, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(20, LOW);
    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(15, LOW);
    delay(2000);
  }

  else if(buttonState6 == HIGH && buttonState9 == HIGH)
  {
    digitalWrite(14, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(28, HIGH);
    delay(500);

    //All Clear
    digitalWrite(14, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(28, LOW);
    delay(2000);

    digitalWrite(29, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(15, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(29, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(15, LOW);
    delay(2000);
  }

  else if(buttonState6 == HIGH && buttonState10 == HIGH)
  {
    digitalWrite(14, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(30, HIGH);
    delay(500);

    //All Clear
    digitalWrite(14, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(30, LOW);
    delay(2000);

    digitalWrite(31, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(15, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(31, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(15, LOW);
    delay(2000);
  }

  else if(buttonState6 == HIGH && buttonState11 == HIGH)
  {
    digitalWrite(14, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(32, HIGH);
    delay(500);

    //All Clear
    digitalWrite(14, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(32, LOW);
    delay(2000);

    digitalWrite(33, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(15, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(33, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(15, LOW);
    delay(2000);
  }

  else if(buttonState6 == HIGH && buttonState12 == HIGH)
  {
    digitalWrite(14, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(34, HIGH);
    delay(500);

    //All Clear
    digitalWrite(14, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(34, LOW);
    delay(2000);

    digitalWrite(35, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(15, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(35, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(15, LOW);
    delay(2000);
  }
  
  // COMBINATION WITH 7
  else if(buttonState7 == HIGH && buttonState8 == HIGH)
  {
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(21, HIGH);
    delay(500);

    //All Clear
    digitalWrite(18, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(23, LOW);
    digitalWrite(21, LOW);
    delay(2000);

    digitalWrite(20, HIGH);
    delay(500);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(19, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(20, LOW);
    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(19, LOW);
    delay(2000);
  }

  else if(buttonState7 == HIGH && buttonState9 == HIGH)
  {
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(28, HIGH);
    delay(500);

    //All Clear
    digitalWrite(18, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(28, LOW);
    delay(2000);

    digitalWrite(29, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(19, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(29, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(19, LOW);
    delay(2000);
  }

  else if(buttonState7 == HIGH && buttonState10 == HIGH)
  {
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(30, HIGH);
    delay(500);

    //All Clear
    digitalWrite(18, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(30, LOW);
    delay(2000);

    digitalWrite(31, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(19, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(31, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(19, LOW);
    delay(2000);
  }

  else if(buttonState7 == HIGH && buttonState11 == HIGH)
  {
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(32, HIGH);
    delay(500);

    //All Clear
    digitalWrite(18, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(32, LOW);
    delay(2000);

    digitalWrite(33, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(19, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(33, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(19, LOW);
    delay(2000);
  }

  else if(buttonState7 == HIGH && buttonState12 == HIGH)
  {
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(34, HIGH);
    delay(500);

    //All Clear
    digitalWrite(18, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(34, LOW);
    delay(2000);

    digitalWrite(35, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(19, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(35, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(19, LOW);
    delay(2000);
  }

  //COMBINATION WITH 8
  else if(buttonState8 == HIGH && buttonState10 == HIGH)
  {
    digitalWrite(20, HIGH);
    delay(500);
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(24, HIGH);
    delay(500);
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(30, HIGH);
    delay(500);

    //All Clear
    digitalWrite(20, LOW);
    digitalWrite(16, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(38, LOW);
    digitalWrite(36, LOW);
    digitalWrite(30, LOW);
    delay(2000);

    digitalWrite(31, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(27, HIGH);
    delay(500);
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(21, HIGH);
    delay(500);
    
    //All Clear
    digitalWrite(31, LOW);
    digitalWrite(37, LOW);
    digitalWrite(39, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(17, LOW);
    digitalWrite(21, LOW);
    delay(2000);
  }

  //COMBINATION WITH 9
  else if(buttonState9 == HIGH && buttonState11 == HIGH)
  {
    digitalWrite(28, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(33, HIGH);
    delay(500);

    //All Clear
    digitalWrite(28, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(37, LOW);
    digitalWrite(33, LOW);
    delay(2000);

    digitalWrite(32, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(29, HIGH);
    delay(500);

    //All Clear
    digitalWrite(32, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(37, LOW);
    digitalWrite(29, LOW);
    delay(2000);
  }

  else if(buttonState9 == HIGH && buttonState12 == HIGH)
  {
    digitalWrite(28, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(35, HIGH);
    delay(500);

    //All Clear
    digitalWrite(28, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(37, LOW);
    digitalWrite(35, LOW);
    delay(2000);

    digitalWrite(34, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(29, HIGH);
    delay(500);

    //All Clear
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(37, LOW);
    digitalWrite(29, LOW);
    delay(2000);
  }

  //COMBINATION WITH 11
  else if(buttonState11 == HIGH && buttonState12 == HIGH)
  {
    digitalWrite(32, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(35, HIGH);
    delay(500);

    //All Clear
    digitalWrite(32, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(37, LOW);
    digitalWrite(35, LOW);
    delay(2000);

    digitalWrite(34, HIGH);
    delay(500);
    digitalWrite(36, HIGH);
    delay(500);
    digitalWrite(38, HIGH);
    delay(500);
    digitalWrite(39, HIGH);
    delay(500);
    digitalWrite(37, HIGH);
    delay(500);
    digitalWrite(33, HIGH);
    delay(500);

    //All Clear
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(37, LOW);
    digitalWrite(33, LOW);
    delay(2000);
  }

  //COMBINATION WITH 13
  else if(buttonState13 == HIGH && buttonState0 == HIGH)
  {
    digitalWrite(40, HIGH);
    delay(500);
    digitalWrite(42, HIGH);
    delay(500);

    //All Clear
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);
    delay(2000);

    digitalWrite(43, HIGH);
    delay(500);
    digitalWrite(41, HIGH);
    delay(500);

    //All Clear
    digitalWrite(43, LOW);
    digitalWrite(41, LOW);
    delay(2000);
  }

  //COMBINATION WITH CONSOLES
  else if(buttonState4 == HIGH && buttonState8 == HIGH && buttonState10 == HIGH)
  {
    digitalWrite(A6, HIGH);
    digitalWrite(20, HIGH);
    digitalWrite(30, HIGH);
    delay(500);

    digitalWrite(A10, HIGH);
    digitalWrite(22, HIGH);
    digitalWrite(36, HIGH);
    delay(500);

    digitalWrite(A12, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(26, HIGH);
    digitalWrite(38, HIGH);
    delay(500);


    digitalWrite(A13, HIGH);
    digitalWrite(27, HIGH);
    digitalWrite(39, HIGH);
    delay(500);

    digitalWrite(A11, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(37, HIGH);
    delay(500);

    digitalWrite(A7, HIGH);
    digitalWrite(23, HIGH);
    digitalWrite(21, HIGH);
    digitalWrite(31, HIGH);
    delay(500);

    //All Clear
    digitalWrite(A6, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A7, LOW);
    digitalWrite(20, LOW);
    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    digitalWrite(23, LOW);
    digitalWrite(21, LOW);
    digitalWrite(30, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(37, LOW);
    digitalWrite(31, LOW);
    delay(2000);
  }

  else
  {
    digitalWrite(50,HIGH);
  }

}