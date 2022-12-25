int led = 13;

void setup(){
    pinMode(led, OUTPUT);
}

void loop(){
    c3osm();
    c3osm();
    c3ctvrt();
    h2osm();
    h2osm();
    h2ctvrt();

    a2osm();
    h2osm();
    a2osm();
    e2pulaosm();

    a2osm();
    h2osm();
    a2ctvrt();
    e2ctvrt();
    g2ctvrt();

    a2osm();
    h2osm();
    a2osm();
    f2pulaosm();

    d2osm();
    e2ctvrt();
    f2osm();
    g2osm();
    a2ctvrt();
    g2osm();

    d2osm();
    e2osm();
    f2osm();
    g2pul();
    pomlkaosm();

    pomlkactvrt();
    a2osm();
    a2bosm();
    a2osm();
    a2bosm();
    a2ctvrt();

    a2ctvrt();
    e2bosm();
    e2ctvrt();
    e2osm();
    a2osm();
    d3osm();

    c3ctvrt();
    g2ctvrt();
    h2ctvrt();
    g2ctvrt();

    a2ctvrt();
    c2ctvrt();
    e2pul();

    c2pul();
    g2ctvrt();
    h2ctvrt();

    a2pul();
    f2osm();
    d2osm();
    e2osm();
    f2osm();

    d2pul();
    g2ctvrt();
    f2ctvrt();

    d2pul();
    g2pul();

    pomlkactvrt();
    a2osm();
    a2osm();
    h2osm();
    g2ctvrt();

    c3osmapulsteckou();
    c3osm();
    c3osm();

    c3osm();
    d3osm();
    c3ctvrtsteckou();
    a2osm();
    c3osm();

    c3osm();
    d3ctvrt();
    c3pul();
    c3osm();

    c3ctvrt();
    h2ctvrt();
    a2ctvrt();
    g2osm();

    e2osmapulsteckou();
    c3osm();
    c3osm();

    c3osm();
    d3osm();
    c3ctvrtsteckou();
    a2osm();
    c3osm();

    c3osm();
    d3osm();
    c3pul();
    pomlkactvrt();

    pomlkaosm();
    g2osm();
    g2ctvrt();
    for (int a=1; a<=4; a++){
        a2osm();
    }

    h2osm();
    a2ctvrt();
    g2ctvrtsteckou();
    pomlkactvrt();
}

void d3osm(){
    tone(led, 146.83, 231);
    delay(231);
    noTone(led);
    delay(55);
}
void d3ctvrt(){
    tone(led, 146.83, 462);
    delay(462);
    noTone(led);
    delay(55);
}
void c3osm(){
    tone(led, 130.81, 231);
    delay(231);
    noTone(led);
    delay(55);
}
void c3ctvrt(){
    tone(led, 130.81, 462);
    delay(462);
    noTone(led);
    delay(55);
}
void c3pul(){
    tone(led, 130.81, 924);
    delay(924);
    noTone(led);
    delay(55);
}
void c3ctvrtsteckou(){
    tone(led, 130.81, 693);
    delay(693);
    noTone(led);
    delay(55);
}
void c3osmapulsteckou(){
    tone(led, 130.81, 1617);
    delay(1617);
    noTone(led);
    delay(55);
}
void h2osm(){
    tone(led, 123.47, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void h2ctvrt(){
    tone(led, 123.47, 462);
    delay(462);
    noTone(led);
    delay(55);    
}
void a2osm(){
    tone(led, 110, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void a2ctvrt(){
    tone(led, 110, 462);
    delay(462);
    noTone(led);
    delay(55);    
}
void a2pul(){
    tone(led, 110, 924);
    delay(924);
    noTone(led);
    delay(55);    
}
void a2bosm(){
    tone(led, 103.83, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void g2osm(){
    tone(led, 98, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void g2ctvrt(){
    tone(led, 98, 462);
    delay(462);
    noTone(led);
    delay(55);    
}
void g2ctvrtsteckou(){
    tone(led, 98, 693);
    delay(693);
    noTone(led);
    delay(55);    
}
void g2pul(){
    tone(led, 98, 924);
    delay(924);
    noTone(led);
    delay(55);
}
void f2osm(){
    tone(led, 87.31, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void f2ctvrt(){
    tone(led, 87.31, 462);
    delay(462);
    noTone(led);
    delay(55);    
}
void f2pulaosm(){
    tone(led, 87.31, 1155);
    delay(1155);
    noTone(led);
    delay(55);    
}
void e2osm(){
    tone(led, 82.41, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void e2ctvrt(){
    tone(led, 82.41, 462);
    delay(462);
    noTone(led);
    delay(55);    
}
void e2pul(){
    tone(led, 82.41, 924);
    delay(924);
    noTone(led);
    delay(55);    
}
void e2pulaosm(){
    tone(led, 82.41, 1155);
    delay(1155);
    noTone(led);
    delay(55);    
}
void e2osmapulsteckou(){
    tone(led, 82.41, 1617);
    delay(1617);
    noTone(led);
    delay(55);    
}
void e2bosm(){
    tone(led, 77.78, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void d2osm(){
    tone(led, 73.42, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void d2ctvrt(){
    tone(led, 73.42, 462);
    delay(462);
    noTone(led);
    delay(55);    
}
void d2pul(){
    tone(led, 73.42, 924);
    delay(924);
    noTone(led);
    delay(55);    
}
void c2osm(){
    tone(led, 55.41, 231);
    delay(231);
    noTone(led);
    delay(55);    
}
void c2ctvrt(){
    tone(led, 55.41, 462);
    delay(462);
    noTone(led);
    delay(55);    
}
void c2pul(){
    tone(led, 55.41, 924);
    delay(924);
    noTone(led);
    delay(55);    
}
void pomlkaosm(){
    noTone(led);
    delay(231);    
}
void pomlkactvrt(){
    noTone(led);
    delay(462);    
}
