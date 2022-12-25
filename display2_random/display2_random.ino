#define A 3
#define B 4
#define C 5
#define D 6
#define E 7
#define F_SEG 8
#define G 9


#define CA1 11
#define CA2 2
#define btn 12

const int segments[7] = { A, B, C, D, E, F_SEG, G };

// format: 0bGFEDCBA
const byte numbers[10] = { 0b1000000, 0b1111001,
0b0100100, 0b0110000, 0b0011001, 0b0010010,
0b0000010, 0b1111000, 0b0000000, 0b0010000 };

void setup() {
  for (int i=0; i<7; i++){
    pinMode(segments[i], OUTPUT);
    digitalWrite(segments[i], HIGH);
  }

  pinMode(CA1, OUTPUT);
  digitalWrite(CA1, HIGH);
  pinMode(CA2, OUTPUT);
  digitalWrite(CA2, HIGH);
}

void loop(){
  int btnState = digitalRead(btn);
  if (btnState == HIGH){
    int cislo = random(0, 99);
    int digit1 = cislo / 10;
    int digit2 = cislo % 10;
    set(digit1, digit2);
  }
  else {
    allOff();
  }
}

void lightDigit1(byte number){
  digitalWrite(CA1, LOW);
  digitalWrite(CA2, HIGH);
  lightSegments(number);
}

void lightDigit2(byte number){
  digitalWrite(CA1, HIGH);
  digitalWrite(CA2, LOW);
  lightSegments(number);
}

void lightSegments(byte number){
  for (int i = 0; i < 7; i++){
    int bit = bitRead(number, i);
    digitalWrite(segments[i], bit);
  }
}

void set(int digit1, int digit2){
  unsigned long startTime = millis();
  for (unsigned long elapsed=0; elapsed < 600; elapsed = millis() - startTime) {
    lightDigit1(numbers[digit1]);
    delay(5);
    lightDigit2(numbers[digit2]);
    delay(5);
  }  
}

void allOff(){
  digitalWrite(CA1, HIGH);
  digitalWrite(CA2, HIGH);
  for (int i = 0; i < 7; i++){
    digitalWrite(segments[i], HIGH);
  }
}
