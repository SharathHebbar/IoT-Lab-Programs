
int m1 = 2,m2 =3;
int pot = A);

void setup()
{
Serial.begin(9600);
pinMode(m1,OUTPUT); 
pinMode(m2,OUTPUT); 

pinMode(pot,INPUT);  
}
void loop()
{
int s=analogRead(pot); 
int z=map(s,0,1024,0,255);
Serial.println(z);
analogWrite(m2,z);
}
