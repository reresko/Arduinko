#define cervena1 10
#define oranzova1 13
#define zelena1 14
#define cervena2 15
#define oranzova2 16
#define zelena2 17

void setup()
{
  for(int i = 7; i<=12; i++)
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, LOW);
    }
}

void loop()
  {
    digitalWrite(cervena1, HIGH);
    digitalWrite(zelena1, HIGH);
    digitalWrite(oranzova1, HIGH);
    digitalWrite(cervena2, HIGH);
    digitalWrite(zelena2, HIGH);
  }
