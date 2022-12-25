#define A 3
#define B 4
#define C 5
#define D 6
#define E 7
#define F_SEG 8
#define G 9

const int segments[7] = {A,B,C,D,E,F_SEG,G};

// format 0bGFEDCBA
const byte numbers[10] = {0b1000000, 0b1111001,
0b0100100, 0b0110000, 0b0011001, 0b0010010,
0b0000010, 0b1111000, 0b0000000, 0b0010000 };

void setup(){
  for (int i=0; i<7; i++){
    pinMode(segments[i], OUTPUT);
    digitalWrite(segments[i], HIGH);
  }
}
 
 void loop(){
   for (int j=0; j<10; j=j+2){
     for (int k=0; k<7; k++){
       int bit = bitRead(numbers[j], k);
       digitalWrite(segments[k], bit);
     }
     delay(300);
     for (int i=0; i<7; i++){
       digitalWrite(segments[i], HIGH);
     }
   }
 }
