int sensor = A0;
int sensorValue;
byte value = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop()
{
    sensorValue = analogRead(sensor);
    if(Serial.available())
    {
        value = Serial.read();
    }
    if(value=='1')
    {
        Serial.println(sensorValue);
        delay(1);
    }
}