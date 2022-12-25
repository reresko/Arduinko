const int buzz = 9;
const int led1 = 10;
const int led2 = 11;
const int btn1 = 12;
const int btn2 = 13;
#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F_SEG 7
#define G 8
#define CA1 15
#define CA2 14
byte value = 0;

void setup()
{
    Serial.begin(9600);
    for(int a=9; a<=11; a++)
    {
        pinMode(a, OUTPUT);
    }
    pinMode(btn1, INPUT);
    pinMode(btn2, INPUT);
}


void loop()
{
    if(Serial.available())
    {
        value = Serial.read();
    }

    if(value=='s')
    {
        Serial.println("sus");
        sus();
    }

    if(value=='a')
    {
        blikani1();
    }

    if(value=='b')
    {
        blikani2();
    }

    int btnState1 = digitalRead(btn1);
    if (btnState1 == HIGH)
    {
        blikani1();
    }

    int btnState2 = digitalRead(btn2);
    if (btnState2 == HIGH)
    {
        blikani2();
    }

    else
    {
        allOff();
    }


}

void blikani1()
{
    for(int a = 0; a<=255; a=a+1)
    {
        analogWrite(led1, a);
        delay(1);
    }
    for(int b = 255; b>0; b=b-1)
    {
        analogWrite(led1, b);
        delay(1);
    }
}

void blikani2()
{
    for(int a = 0; a<=255; a=a+1)
    {
        analogWrite(led2, a);
        delay(1);
    }
    for(int b = 255; b>0; b=b-1)
    {
        analogWrite(led2, b);
        delay(1);
    }
}

void allOff()
{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
}

void sus()
{
        tone(buzz, 1046); 
        delay(250);
        tone(buzz, 1244); 
        delay(250); 
        tone(buzz, 1400); 
        delay(250); 
        tone(buzz, 1510); 
        delay(250);
        tone(buzz, 1400); 
        delay(250);
        tone(buzz, 1244); 
        delay(250); 
        tone(buzz, 1046); 
        delay(250); 
        noTone(buzz); 
        delay(500); 
        tone(buzz, 932); 
        delay(125);
        tone(buzz, 1174); 
        delay(125); 
        tone(buzz, 1046); 
        delay(250);

        noTone(buzz); 
        delay(500); 
        tone(buzz, 780); 
        delay(250); 
        tone(buzz, 525); 
        delay(250); 
        noTone(buzz); 
        delay(250);

        tone(buzz, 1046); 
        delay(250);
        tone(buzz, 1244); 
        delay(250); 
        tone(buzz, 1400); 
        delay(250); 
        tone(buzz, 1510); 
        delay(250);
        tone(buzz, 1400); 
        delay(250);
        tone(buzz, 1244); 
        delay(250);
        tone(buzz, 1400); 
        delay(250);
        noTone(buzz); 
        delay(750);

        tone(buzz, 1510); 
        delay(125);
        tone(buzz, 1400); 
        delay(125);
        tone(buzz, 1244); 
        delay(125);
        tone(buzz, 1510); 
        delay(125);
        tone(buzz, 1400); 
        delay(125);
        tone(buzz, 1244); 
        delay(125);
        tone(buzz, 1510); 
        delay(125);
        tone(buzz, 1400); 
        delay(125);
        tone(buzz, 1244); 
        delay(125);
        tone(buzz, 1510); 
        delay(125);
        tone(buzz, 1400); 
        delay(125);
        tone(buzz, 1244); 
        delay(125);
        tone(buzz, 1510); 
        delay(125);
        noTone(buzz); 
        delay(500);
}