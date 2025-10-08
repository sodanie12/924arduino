/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/
const int buttonPin = 2;
const int RedLedPin = 3;
const int GreenLedPin = 4;
const int BlueLedPin = 5;

int buttonState = 0;
int ledcolor = 0;

bool ButtonPressed = false;
String currentcolor = "led";

void setup() {
  pinMode(RedLedPin, OUTPUT);
  pinMode(GreenLedPin, OUTPUT);
  pinMode(BlueLedPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.print("Current Color ");
  Serial.println(currentcolor);
  if (buttonState == HIGH && !ButtonPressed) {
    ledcolor = ledcolor + 1;
    ButtonPressed = true;
  }
  if (buttonState == LOW && ButtonPressed) {
    ButtonPressed = false;
  }

  if (ledcolor == 0) {
    currentcolor = "LED OFF";
    digitalWrite(RedLedPin, HIGH);
    digitalWrite(GreenLedPin, HIGH);
    digitalWrite(BlueLedPin, HIGH);
  }
  
  else if (ledcolor == 1) {
    currentcolor = "Red";
    digitalWrite(RedLedPin, LOW);
    digitalWrite(GreenLedPin, HIGH);
    digitalWrite(BlueLedPin, HIGH);
  }
  
  else if (ledcolor == 2) {
    currentcolor = "Green";
    digitalWrite(RedLedPin, HIGH);
    digitalWrite(GreenLedPin, LOW);
    digitalWrite(BlueLedPin, HIGH);
  }
  
  else if (ledcolor == 3) {
    currentcolor = "Blue";
    digitalWrite(RedLedPin, HIGH);
    digitalWrite(GreenLedPin, HIGH);
    digitalWrite(BlueLedPin, LOW);
  }
  
  else if (ledcolor == 4) {
    currentcolor = "Yellow";
    digitalWrite(RedLedPin, LOW);
    digitalWrite(GreenLedPin, LOW);
    digitalWrite(BlueLedPin, HIGH);
  }

  else if (ledcolor == 5) {
    currentcolor = "Purple";
    digitalWrite(RedLedPin, LOW);
    digitalWrite(GreenLedPin, HIGH);
    digitalWrite(BlueLedPin, LOW);
  }
  
  else if (ledcolor == 6) {
    currentcolor = "Cyan";
    digitalWrite(RedLedPin, HIGH);
    digitalWrite(GreenLedPin, LOW);
    digitalWrite(BlueLedPin, LOW);
  }
  
  else if (ledcolor == 7) {
    currentcolor = "White";
    digitalWrite(RedLedPin, LOW);
    digitalWrite(GreenLedPin, LOW);
    digitalWrite(BlueLedPin, LOW);
  }
  
  else if (ledcolor == 8) {
    ledcolor = 0;
  }
}