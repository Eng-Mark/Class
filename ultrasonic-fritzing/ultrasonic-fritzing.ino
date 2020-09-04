/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* by Eng_Mark..
*
*/
//defines pins numbers

const int trigPin = 12;
const int echoPin = 10;
const int led=9;
const int BUZZER=8;
const int ledR=7;

// defines variables

long duration;
int distance;

void setup() 
{
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
pinMode(led, OUTPUT);
pinMode(BUZZER, OUTPUT);
pinMode(ledR, OUTPUT);

}
void loop() 
{
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(100);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

//conditions for led
if(distance>100)
{
  digitalWrite(led, LOW);
} 
else{
 digitalWrite(led, HIGH);
}
//conditions for ledR
if(distance>75)
{
  digitalWrite(ledR, LOW);
} 
else{
 digitalWrite(ledR, HIGH);
}

//conditions for BUZZER
if(distance>45)
{
  digitalWrite(BUZZER, LOW);
} 
else{
 digitalWrite(BUZZER, HIGH);
}

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
Serial.print("cm");
}