/*Using a joystick with the serial monitor
The joystick is similar to two potentiometers connected together, 
one for the vertical movement (Y-axis) and other for the horizontal movement (X-axis).


*/
// shoulder joystick
const int xPinS = A0;                                               
const int yPinS = A1;
const int switchPinS = 2;

int xValueS;
int yValueS;
int switchValueS;

//wrist joystick
const int xPinW = A2;                                               
const int yPinW = A3;
const int switchPinW = 3;

int xValueW;
int yValueW;
int switchValueW;


void setup() 
{
  Serial.begin(9600);
  pinMode(switchPinS, INPUT_PULLUP);
  
  Serial.begin(9600);
   pinMode(switchPinW, INPUT_PULLUP);
}

void loop() 
{
  switchValueS = digitalRead(switchPinS);
  xValueS = analogRead(xPinS);
  yValueS = analogRead(yPinS);
  
  switchValueW = digitalRead(switchPinW);
  xValueW = analogRead(xPinW);
  yValueW = analogRead(yPinW);
  
  Serial.print("SwitchS:  ");
  Serial.print(switchValueS);
  Serial.print("\t");
  Serial.print("SwitchW:  ");
  Serial.print(switchValueW);
  Serial.print("\n");
  Serial.print("X-axisS: ");
  Serial.print(xValueS);
  Serial.print("\t");
   Serial.print("X-axisW: ");
  Serial.print(xValueW);
  Serial.print("\n");
  Serial.print("Y-axisS: ");
  Serial.print(yValueS);
  Serial.print("\t");
  Serial.print("Y-axisW: ");
  Serial.print(yValueW);
  Serial.print("\n\n");
  delay(700);
}
