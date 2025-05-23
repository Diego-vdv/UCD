const int y = 4;
const int r = 5;
const int g = 3;

unsigned long previousBlinkTime = 0;
const unsigned long blinkInterval = 500;
bool ledState = LOW;

const int buttonPins[] = {13, 12, 11, 10};
const char buttonLabels[4] = {'T', 'G', 'W', 'P'};
int lastButtonStates[] = {LOW, LOW, LOW, LOW};
unsigned long lastPressTimes[] = {0, 0, 0, 0};
const unsigned long doublePressThreshold = 500;

char input = 'C';

void setup() {
  pinMode(y, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  Serial.begin(9600);

  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}

void loop() {
  unsigned long currentMillis = millis();

  for (int i = 0; i < 4; i++) {
    int currentState = digitalRead(buttonPins[i]);

    // Detect press (rising edge)
    if (currentState == HIGH && lastButtonStates[i] == LOW) {
      unsigned long timeSinceLastPress = currentMillis - lastPressTimes[i];

      if (timeSinceLastPress <= doublePressThreshold) {
        input = 'C';
        Serial.println("Double press detected: C");
      } else {
        input = buttonLabels[i];
        Serial.print("Single press: ");
        Serial.println(buttonLabels[i]);
      }

      lastPressTimes[i] = currentMillis;                                                                                              
      delay(50); // Debounce
    }

    lastButtonStates[i] = currentState;
  }

  delay(10);

  if (currentMillis - previousBlinkTime >= blinkInterval) {
    previousBlinkTime = currentMillis;
    ledState = !ledState;

    digitalWrite(y, LOW);
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);

    switch (input) {
      case 'T':
        digitalWrite(g, ledState);
        break;
      case 'G':
        digitalWrite(r, ledState);
        break;
      case 'W':
        digitalWrite(y, ledState);
        break;
      case 'P':
        digitalWrite(r, ledState);
        digitalWrite(g, ledState);
        digitalWrite(y, ledState);
      case 'C':
        // All LEDs off or hold state
        break;
    }
  }

  Serial.print("input||");
  Serial.println(input);
}
