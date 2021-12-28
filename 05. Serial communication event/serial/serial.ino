int led = 13;
void setup()
{
 Serial.begin(9600); 
 pinMode(led, OUTPUT);
}
void loop()
{
 char data = Serial.read();
 switch (data) 
 {
 case 'ON':
 digitalWrite(led, HIGH); 
 break;
 case 'OFF':
 digitalWrite(led, LOW); 
 break;
 }
}
