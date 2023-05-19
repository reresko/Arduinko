const int trigPin1 = 6;
const int echoPin1 = 7;
const int trigPin2 = 8;
const int echoPin2 = 9;
const int trigPin3 = 10;
const int echoPin3 = 11;
const int buzz = 2;

long duration1;
long duration2;
long duration3;
int distance1;
int distance2;
int distance3;

void setup() {
    pinMode(trigPin1, OUTPUT);
    pinMode(echoPin1, INPUT);

    pinMode(trigPin2, OUTPUT);
    pinMode(echoPin2, INPUT);

    pinMode(trigPin3, OUTPUT);
    pinMode(echoPin3, INPUT);

    Serial.begin(9600);
}

void loop() {

    digitalWrite(trigPin1, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin1, LOW);
    
    duration1 = pulseIn(echoPin1, HIGH);
    distance1 = duration1 * 0.034 / 2;

    Serial.print("distance1: ");
    Serial.println(distance1);

    digitalWrite(trigPin2, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin2, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);
    
    duration2 = pulseIn(echoPin2, HIGH);
    distance2 = duration2 * 0.034 / 2;

    Serial.print("distance2: ");
    Serial.println(distance2);
    
    digitalWrite(trigPin3, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin3, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin3, LOW);

    duration3 = pulseIn(echoPin3, HIGH);
    distance3 = duration3 * 0.034 / 2;

    Serial.print("distance3: ");
    Serial.println(distance3);

    if(((distance1 < 30) && (distance1 > 0)) || ((distance2 < 30) && (distance2 > 0)) || ((distance3 < 30) && (distance3 > 0))){
        tone(buzz, 1000);
        delay(30);
        noTone(buzz);
        delay(1);
    }

    if(((distance1 < 50) && (distance1 >= 30)) || ((distance2 < 50) && (distance2 >= 30)) || ((distance3 < 50) && (distance3 >= 30))){
        tone(buzz, 1000);
        delay(40);
        noTone(buzz);
        delay(200);
    }    

    if(((distance1 < 75) && (distance1 >= 50)) || ((distance2 < 75) && (distance2 >= 50)) || ((distance3 < 75) && (distance3 >= 50))){
        tone(buzz, 1000);
        delay(60);
        noTone(buzz);
        delay(400);
    }

    if(((distance1 < 100) && (distance1 >= 75)) || ((distance2 < 100) && (distance2 >= 75)) || ((distance3 < 100) && (distance3 >= 75))){
        tone(buzz, 1000);
        delay(100);
        noTone(buzz);
        delay(800);
    }
}