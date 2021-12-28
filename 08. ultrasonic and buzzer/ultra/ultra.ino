int const trigPin = 10;
int const echoPin = 9;
int const buzzPin = 2;
void setup() {
pinMode(trigPin, OUTPUT); // trig pin will have pulses output
pinMode(echoPin, INPUT); // echo pin should be input to get pulse width
pinMode(buzzPin, OUTPUT); // buzz pin is output to control buzzering
Serial.begin(9600);
Serial.println(“Ultrosonic Sensor HC-SR04 Test:”);
Serial.println(“with Arduino Uno”)
}
void loop() {
int duration, distance;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance <= 50 && distance >= 0) {
digitalWrite(buzzPin, HIGH);
} else {
digitalWrite(buzzPin, LOW);
}
Serial.print(“Distance: ”);
Serial.print(distance);
Serial.print(“ cm.”)
delay(60);
}
