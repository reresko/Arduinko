const int led = 13;
const int buzz = 12;
int casovaJednotka = 100;
int i;
char vstup;
String temp;
String pismena[26] = {".-    ","-...  ","-.-.  ","-..   ",".     ","..-.  ","--.   ","....  ","..    ",".---  ","-.-   ",".-..   ","--    ","-.    ","---   ",".--.  ","--.-  ",".-.   ","...   ","-     ","..-   ","...-  ",".--   ","-..-  ","-.--  ","--..  "};


void setup()
{
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void decode()
{
    Serial.println(pismena[vstup - 97]);
    temp = pismena[vstup - 97];
    for (i = 0; i < 6; i++)
    {
        switch(temp[i])
        {
            case ('.'):
                tecka();
                break;
            case ('-'):
                carka();
                break;
            default:
                break;
        }
    }
    delay(casovaJednotka * 6);
}

void tecka()
{
    tone(buzz, 1000, casovaJednotka);
    digitalWrite(led, HIGH);
    delay(casovaJednotka);
    digitalWrite(led, LOW);
    delay(casovaJednotka * 4);
}

void carka()
{
    tone(buzz, 1000, casovaJednotka *3);
    digitalWrite(led, HIGH);
    delay(casovaJednotka * 3);
    digitalWrite(led, LOW);
    delay(casovaJednotka * 4);
}

void loop()
{
    if (Serial.available())
    {
        vstup = Serial.read();
        if (vstup >= 'a' && vstup <= 'z')
        {
            Serial.print(vstup);
            Serial.print(" ");
            decode();
        }
        else
        {
            Serial.println(" ");
        }
    }
}