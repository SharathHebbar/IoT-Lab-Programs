int g=2,y=3,r=4;
void setup() {
  // put your setup code here, to run once:
pinMode(g,OUTPUT);
pinMode(y,OUTPUT);
pinMode(r,OUTPUT);
}

void lights(int x1,int x2,int x3){
  digitalWrite(x1,HIGH);
  digitalWrite(x2,LOW);
  digitalWrite(x3,LOW);
  }
void loop() {
  // put your main code here, to run repeatedly:
  lights(g,y,r);
  delay(1000);
    lights(y,r,g);
  delay(1000);
    lights(r,y,g);
  delay(1000);
}
