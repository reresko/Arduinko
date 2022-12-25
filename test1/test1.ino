int led = 10;

void setup() {                
  pinMode(led, OUTPUT);    
}

void loop() {
  for(int a = 0; a<=255; a=a+1){
    analogWrite(led, a);
    delay(1);
  }
  for(int b = 255; b>0; b=b-1){
    analogWrite(led, b);
    delay(1);
  }
   
}