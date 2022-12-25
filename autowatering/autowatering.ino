int senzor1 = A0; // senzor vlhkosti 1
int senzor2 = A1;
int senzor3 = A2;

int senzorHodnota1;
int senzorHodnota2;
int senzorHodnota3;

int in1 = 4; // IN1 na relé
int in2 = 3;
int in3 = 2;

int limit = 320;
int buzz = 5;

byte value = 0;

unsigned long previousMillis = 0;
const long interval = 7200000; // 7 200 000 ms = 2h

void setup()
{
    for (int i=2; i<=4; i++)
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, HIGH);
    }
    for (int i=A0; i<=A2; i++)
    {
      pinMode(i, INPUT);
    }
    pinMode(buzz, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available())
    {
        value = Serial.read();
    }

    if(value=='1')
    {
        vlhkost1();
    }

    if(value=='2')
    {
        vlhkost2();
    }

    if(value=='4')
    {
        zalej1();
    }

    if(value=='5')
    {
        zalej2();
    }

    if(value=='7')
    {
        forcedZalej1();
    }

    if(value=='8')
    {
        forcedZalej2();
    }

    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval)
    {
        previousMillis = currentMillis;
        vlhkost1();
        zalej1();
        vlhkost2();
        zalej2();
    }
}

void zalej1()
{
    if(senzorHodnota1>limit)
    {
        digitalWrite(in1, LOW);
        Serial.println("1. kvetinac zalit");
        delay(700);
        digitalWrite(in1, HIGH);
    }
    else
    {
        Serial.println("hlina v kvetinaci 1 je dostatecne vlhka");
        digitalWrite(in1, HIGH);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        delay(1);
    }
}

void zalej2()
{
    if(senzorHodnota2>limit)
    {
        digitalWrite(in2, LOW);
        Serial.println("2. kvetinac zalit");
        delay(1000);
        digitalWrite(in2, HIGH);
    }
    else
    {
        Serial.println("hlina v kvetinaci 2 je dostatecne vlhka");
        digitalWrite(in1, HIGH);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        delay(1);
    }
}

void zalej3()
{
    if(senzorHodnota3>limit)
    {
        digitalWrite(in3, LOW);
        Serial.println("3. kvetinac zalit");
        delay(1000);
        digitalWrite(in3, HIGH);
    }
    else
    {
        Serial.println("hlina v kvetinaci 3 je dostatecne vlhka");
        digitalWrite(in1, HIGH);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        delay(1);
    }
}

void forcedZalej1()
{
    digitalWrite(in1, LOW);
    Serial.println("1. kvetinac zalit");
    delay(700);
    digitalWrite(in1, HIGH);
}

void forcedZalej2()
{
    digitalWrite(in2, LOW);
    Serial.println("2. kvetinac zalit");
    delay(1000);
    digitalWrite(in2, HIGH);
}

void forcedZalej3()
{
    digitalWrite(in3, LOW);
    Serial.println("3. kvetinac zalit");
    delay(1000);
    digitalWrite(in3, HIGH);
}

void vlhkost1()
{
    senzorHodnota1 = analogRead(senzor1);
    Serial.println("vlhkost pudy v 1. kvetinaci:");
    Serial.print(20000 / senzorHodnota1);
    Serial.print("%     ");
    Serial.print("(");
    Serial.print(senzorHodnota1);
    Serial.println(")");
    delay(1);
}

void vlhkost2()
{
    senzorHodnota2 = analogRead(senzor2);
    Serial.println("vlhkost pudy v 2. kvetinaci:");
    Serial.print(20000 / senzorHodnota2);
    Serial.print("%     ");
    Serial.print("(");
    Serial.print(senzorHodnota2);
    Serial.println(")");
    delay(1);
}

void vlhkost3()
{
    senzorHodnota3 = analogRead(senzor3);
    Serial.println("vlhkost pudy v 3. kvetinaci:");
    Serial.print(20000 / senzorHodnota3);
    Serial.print("%     ");
    Serial.print("(");
    Serial.print(senzorHodnota3);
    Serial.println(")");
    delay(1);
}