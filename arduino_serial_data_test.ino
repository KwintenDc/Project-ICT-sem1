int led = 3;
int buzzer = 11;
int dL = 50;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    char data = Serial.read();
    switch (data)
    {
      case 'a':
        tone(buzzer, 261); // C
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'b':
        tone(buzzer, 293); // D
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'c':
        tone(buzzer, 329); // E
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'd':
        tone(buzzer, 349); // F
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'e':
        tone(buzzer, 392); // G
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'f':
        tone(buzzer, 440); // A
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer); 
        digitalWrite(led, LOW);
        break;
      case 'g':
        tone(buzzer, 493); // B
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'h':
        tone(buzzer, 277); // C#
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'i':
        tone(buzzer, 311); // D#
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'j':
        tone(buzzer, 370); // F#
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'k':
        tone(buzzer, 415); // G#
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'l':
        tone(buzzer, 466); // A#
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'A':
        tone(buzzer, 523); // C2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'B':
        tone(buzzer, 587); // D2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'C':
        tone(buzzer, 659); // E2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'D':
        tone(buzzer, 698); // F2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'E':
        tone(buzzer, 784); // G2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'F':
        tone(buzzer, 880); // A2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'G':
        tone(buzzer, 987); // B2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'H':
        tone(buzzer, 554); // C#2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'I':
        tone(buzzer, 622); // D#2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'J':
        tone(buzzer, 740); // F#2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'K':
        tone(buzzer, 830); // G#2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      case 'L':
        tone(buzzer, 932); // A#2
        digitalWrite(led, HIGH);
        delay(dL);
        noTone(buzzer);
        digitalWrite(led, LOW);
        break;
      default:
        noTone(buzzer);
        break;
    }
  }
}
