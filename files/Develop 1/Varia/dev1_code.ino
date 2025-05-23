const int y = 8;
const int r = 9;
const int g = 10;
char input = '0';

void setup() {
  // put your setup code here, to run once:
  pinMode(y, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char x = Serial.read();
    //Serial.println(x);
    input = x;
  }

  Serial.println(input);

  switch (input) {
    case '0':
      break;
    
    case '1':
      digitalWrite(y, HIGH);
      delay(1000);
      digitalWrite(y, LOW);
      delay(500);
      break;
    
    case '2':
      digitalWrite(r, HIGH);
      delay(1000);
      digitalWrite(r, LOW);
      delay(500);
      break;

    case '3':
      digitalWrite(g, HIGH);
      delay(1000);
      digitalWrite(g, LOW);
      delay(500);
      break;
  }
}
