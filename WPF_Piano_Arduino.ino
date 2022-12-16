// Noten die gebruikt worden in de nummers.
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262  // <<--------------------------------- Start WPF piano
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988  // <<--------------------------------- Eind WPF piano
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0

const int led = 3;
const int buzzer = 11;

String receivedData = "";
String note = "";
int noteInIntFormat;
String noteLength = "";
int noteLengthInIntFormat = 100;

void setup()
{
  // Seriële poort instellen;
  Serial.begin(9600);

  // Pinnen declareren;
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
      // Volledige tekst ophalen van C# programma.
      receivedData = Serial.readStringUntil('\n');
    
      // \n en/of \r verwijderen van de receivedData.
      receivedData.trim();

      // De waarde van de muzieknoot opzoeken.
      note = receivedData.substring(0,2);
      // String omzetten naar integer. 
      noteInIntFormat = note.toInt();

      // De lengte van de toon opzoeken.
      noteLength = receivedData.substring(2);
      // String noteLength omzetten naar een integer.
      noteLengthInIntFormat = noteLength.toInt();
      
    switch (noteInIntFormat)
    {
      case 0:
        Serial.println("0");
        tone(buzzer, NOTE_C4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 1:
        Serial.println("0");
        tone(buzzer, NOTE_D4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 2:
        Serial.println("0");
        tone(buzzer, NOTE_E4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 3:  
        Serial.println("0");        
        tone(buzzer, NOTE_F4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 4:
        Serial.println("0");
        tone(buzzer, NOTE_G4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 5:
        Serial.println("0");
        tone(buzzer, NOTE_A4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer); 
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 6:
        Serial.println("0");
        tone(buzzer, NOTE_B4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 7:
        Serial.println("0");
        tone(buzzer, NOTE_CS4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 8:
        Serial.println("0");
        tone(buzzer, NOTE_DS4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 9:
        Serial.println("0");
        tone(buzzer, NOTE_FS4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 10:
        Serial.println("0");
        tone(buzzer, NOTE_GS4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 11:
        Serial.println("0");
        tone(buzzer, NOTE_AS4); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 12: 
        Serial.println("0");        
        tone(buzzer, NOTE_C5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 13:
        Serial.println("0");
        tone(buzzer, NOTE_D5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 14:
        Serial.println("0");
        tone(buzzer, NOTE_E5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 15:
        Serial.println("0");
        tone(buzzer, NOTE_F5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 16:
        Serial.println("0");
        tone(buzzer, NOTE_G5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 17:    
        Serial.println("0");       
        tone(buzzer, NOTE_A5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 18:
        Serial.println("0");
        tone(buzzer, NOTE_B5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 19:
        Serial.println("0");
        tone(buzzer, NOTE_CS5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 20:
        Serial.println("0");
        tone(buzzer, NOTE_DS5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 21:
        Serial.println("0");
        tone(buzzer, NOTE_FS5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 22:  
        Serial.println("0");        
        tone(buzzer, NOTE_GS5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 23:
        Serial.println("0");
        tone(buzzer, NOTE_AS5); 
        digitalWrite(led, HIGH);
        delay(noteLengthInIntFormat);
        noTone(buzzer);
        digitalWrite(led, LOW);
        Serial.println("1");
        break;
      case 24:
        Serial.println("0");
        AlleNoten();
        Serial.println("1");
        break;
      case 25:
        Serial.println("0");
        MerryChristmas();
        Serial.println("1");
        break;
      case 26:
        Serial.println("0");
        OdeToJoy();
        Serial.println("1");
        break;
      case 27:
        Serial.println("0");
        Tetris();
        Serial.println("1");
        break;
      default:
        noTone(buzzer);
        digitalWrite(led,LOW);
        break;
    }
  }
} 

//---------------------- Nummer 1 ----------------------

int melody0[] = {
  NOTE_C4,4 ,NOTE_CS4,4 ,NOTE_D4,4 ,NOTE_DS4,4
  ,NOTE_F4,4 , NOTE_FS4,4 , NOTE_G4,4 , NOTE_GS4,4
  ,NOTE_A4,4 , NOTE_AS4,4 , NOTE_B4,4 , NOTE_C5,4
  ,NOTE_CS5,4 , NOTE_D5,4 , NOTE_DS5,4 , NOTE_F5,4
  ,NOTE_FS5,4 , NOTE_G5,4 , NOTE_GS5,4 , NOTE_A5,4
  ,NOTE_AS5,4 , NOTE_B5,4
  
};

int tempo0=250;

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes0 =sizeof(melody0)/sizeof(melody0[0])/2; 

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote0 = (60000 * 4) / tempo0;

int divider0 = 0, noteDuration0 = 0;

void AlleNoten()
{
   // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes0 * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider0 = melody0[thisNote + 1];
    if (divider0 > 0) {
      // regular note, just proceed
      noteDuration0 = (wholenote0) / divider0;
    } else if (divider0 < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration0 = (wholenote0) / abs(divider0);
      noteDuration0 *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody0[thisNote], noteDuration0*0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration0);
    
    // stop the waveform generation before the next note.
    noTone(buzzer);
  }  
}

//---------------------- Nummer 2 : OdeToJoy ----------------------

// Dit zijn voorgeprogrammeerde nummers.  
// Source : https://github.com/robsoncouto/arduino-songs - Robson Couto, 2019.

// change this to make the song slower or faster
int tempo1=114;

// Melody van Ode to Joy. 
int melody1[] = {
  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//1
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_E4,-4, NOTE_D4,8,  NOTE_D4,2,

  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//4
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_D4,-4,  NOTE_C4,8,  NOTE_C4,2,

  NOTE_D4,4,  NOTE_D4,4,  NOTE_E4,4,  NOTE_C4,4,//8
  NOTE_D4,4,  NOTE_E4,8,  NOTE_F4,8,  NOTE_E4,4, NOTE_C4,4,
  NOTE_D4,4,  NOTE_E4,8,  NOTE_F4,8,  NOTE_E4,4, NOTE_D4,4,
  NOTE_C4,4,  NOTE_D4,4,  NOTE_G3,2,

  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//12
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_D4,-4,  NOTE_C4,8,  NOTE_C4,2
  
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes1 =sizeof(melody1)/sizeof(melody1[0])/2; 

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote1 = (60000 * 4) / tempo1;

int divider1 = 0, noteDuration1 = 0;

void OdeToJoy()
{
 // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes1 * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider1 = melody1[thisNote + 1];
    if (divider1 > 0) {
      // regular note, just proceed
      noteDuration1 = (wholenote1) / divider1;
    } else if (divider1 < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration1 = (wholenote1) / abs(divider1);
      noteDuration1 *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody1[thisNote], noteDuration1*0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration1);
    
    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}

//---------------------- Nummer 3 : Merry Christmas ----------------------

// Melody van merry christmas song.
int melody2[] = {

  // We Wish You a Merry Christmas
  // Score available at https://musescore.com/user/6208766/scores/1497501
  
  NOTE_C5,4, //1
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,

  NOTE_F5,2, NOTE_C5,4, //8 
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4,

  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4,//17
  NOTE_E5,2, NOTE_E5,4,
  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,
  NOTE_C5,2, NOTE_A5,4,
  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,
  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4, 
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8, //27
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4,
  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4,
  NOTE_E5,2, NOTE_E5,4,
  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,
  
  NOTE_C5,2, NOTE_A5,4,//36
  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,
  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4, 
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8, 
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,//45
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4,
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, //53
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, REST,4
};

// change this to make the song slower or faster
int tempo2 = 140;

int notes2 = sizeof(melody2) / sizeof(melody2[0]) / 2;

// this calculates the duration of a whole note in ms
int wholenote2 = (60000 * 4) / tempo2;

int divider2 = 0, noteDuration2 = 0;
void MerryChristmas()
{
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes2 * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider2 = melody2[thisNote + 1];
    if (divider2 > 0) {
      // regular note, just proceed
      noteDuration2 = (wholenote2) / divider2;
    } else if (divider2 < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration2 = (wholenote2) / abs(divider2);
      noteDuration2 *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody2[thisNote], noteDuration2 * 0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration2);

    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}

//---------------------- Nummer 4 : Merry Christmas ----------------------

int melody3[] = {

  //Based on the arrangement at https://www.flutetunes.com/tunes.php?id=192
  
  NOTE_E5, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_C5,8,  NOTE_B4,8,
  NOTE_A4, 4,  NOTE_A4,8,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, -4,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,8,  NOTE_A4,4,  NOTE_B4,8,  NOTE_C5,8,

  NOTE_D5, -4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_G5,8,  NOTE_F5,8,
  NOTE_E5, -4,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,4, REST, 4,

  NOTE_E5, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_C5,8,  NOTE_B4,8,
  NOTE_A4, 4,  NOTE_A4,8,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, -4,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,8,  NOTE_A4,4,  NOTE_B4,8,  NOTE_C5,8,

  NOTE_D5, -4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_G5,8,  NOTE_F5,8,
  NOTE_E5, -4,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,4, REST, 4,
  

  NOTE_E5,2,  NOTE_C5,2,
  NOTE_D5,2,   NOTE_B4,2,
  NOTE_C5,2,   NOTE_A4,2,
  NOTE_GS4,2,  NOTE_B4,4,  REST,8, 
  NOTE_E5,2,   NOTE_C5,2,
  NOTE_D5,2,   NOTE_B4,2,
  NOTE_C5,4,   NOTE_E5,4,  NOTE_A5,2,
  NOTE_GS5,2,

};

// change this to make the song slower or faster
int tempo3=144; 

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes3=sizeof(melody3)/sizeof(melody3[0])/2; 

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote3 = (60000 * 4) / tempo3;

int divider3 = 0, noteDuration3 = 0;

void Tetris()
{
  // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes3 * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider3 = melody3[thisNote + 1];
    if (divider3 > 0) {
      // regular note, just proceed
      noteDuration3 = (wholenote3) / divider3;
    } else if (divider3 < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration3 = (wholenote3) / abs(divider3);
      noteDuration3 *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody3[thisNote], noteDuration3*0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration3);
    
    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}
