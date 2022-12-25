#define A 3
#define B 4
#define C 5
#define D 6
#define E 7
#define F 8
#define G 9
#define CA1 11
#define CA2 2
#define btn 12
#define cervena1 10
#define oranzova1 13
#define zelena1 14
#define cervena2 15
#define oranzova2 16
#define zelena2 17

byte value = 0;
const int segments[7] = {A,B,C,D,E,F,G};
const int pins[13] = {A,B,C,D,E,F,G,cervena1,cervena2,zelena1,zelena2,oranzova1,oranzova2};

// format 0bGFEDCBA
const byte numbers[10] = {0b1000000, 0b1111001,
0b0100100, 0b0110000, 0b0011001, 0b0010010,
0b0000010, 0b1111000, 0b0000000, 0b0010000 };

void setup()
  {
    for (int i=0; i<7; i++)
      {
        pinMode(segments[i], OUTPUT);
        digitalWrite(segments[i], HIGH);
      }
    pinMode(2, OUTPUT);
    pinMode(11, OUTPUT);
    digitalWrite(2, HIGH);
    digitalWrite(11, HIGH);
    Serial.begin(9600);
    pinMode(pins, OUTPUT);
    digitalWrite(pins, LOW);
  }

void loop()
  {
    if(Serial.available())
      {
        value = Serial.read();
      }
    else
      {
        value = 0;
      }
    if(value=='n')
      {
        digitalWrite(pins, LOW);
        Serial.println("Off");
      }
    if(value=='a')
      {
        Serial.println("On");
        digitalWrite(cervena1, HIGH);
        digitalWrite(zelena2, HIGH);
        for (int digit1 = 1; digit1 >= 0; digit1--)
          {
            for (int digit2 = 9; digit2 >= 0; digit2--) 
              {
                unsigned long startTime = millis();
                for (unsigned long elapsed = 0; elapsed < 1000; elapsed = millis() - startTime)
                  {
                    lightDigit1(numbers[digit1]);
                    delay(5);
                    lightDigit2(numbers[digit2]);
                    delay(5);
                  }
              }
          }
    
        digitalWrite(cervena1, LOW);
        digitalWrite(zelena2, LOW);
        digitalWrite(oranzova1, HIGH);
        digitalWrite(oranzova2, HIGH);
        allOff();
        delay(2000);
        digitalWrite(oranzova1, LOW);
        digitalWrite(oranzova2, LOW);
        digitalWrite(cervena2, HIGH);
        digitalWrite(zelena1, HIGH);
        for (int digit1 = 1; digit1 >= 0; digit1--)
          {
            for (int digit2 = 9; digit2 >= 0; digit2--) 
              {
                unsigned long startTime = millis();
                for (unsigned long elapsed = 0; elapsed < 1000; elapsed = millis() - startTime)
                  {
                    lightDigit1(numbers[digit1]);
                    delay(5);
                    lightDigit2(numbers[digit2]);
                    delay(5);
                  }
              }
          }
        digitalWrite(cervena2, LOW);
        digitalWrite(zelena1, LOW);
        digitalWrite(oranzova1, HIGH);
        digitalWrite(oranzova2, HIGH);
        allOff();
        delay(2000);
        digitalWrite(oranzova1, LOW);
        digitalWrite(oranzova2, LOW);
      }
    
  }

void lightDigit1(byte number)
  {
    digitalWrite(CA1, LOW);
    digitalWrite(CA2, HIGH);
    lightSegments(number);
  }
  
void lightDigit2(byte number)
  {
    digitalWrite(CA1, HIGH);
    digitalWrite(CA2, LOW);
    lightSegments(number);
  }

void lightSegments(byte number)
  {
    for(int i=0; i<7; i++)
      {
        int bit = bitRead(number, i);
        digitalWrite(segments[i], bit);
      }
  }
  
void allOff()
  {
    digitalWrite(CA1, HIGH);
    digitalWrite(CA2, HIGH);
    for (int i = 0; i < 7; i++)
      {
        digitalWrite(segments[i], HIGH);
      }
  }
