#include <mechButton.h>
#include <idlers.h>
#include <AccelStepper.h>
#include <LiquidCrystal.h>

#define plusPin 5
#define changePin 6
#define minusPin 7
#define motorInterfaceType 8

#define motorPin1 11
#define motorPin2 10
#define motorPin3 9
#define motorPin4 8

int Speed = 100;
int increment = 1;
//int MAX = 300;
//int MIN = 100;

mechButton plus(plusPin);
mechButton change(changePin);
mechButton minus(minusPin);
LiquidCrystal lcd(A1, A0, A5, A4, A3, A2);
AccelStepper stepper = AccelStepper(motorInterfaceType, motorPin1, motorPin3, motorPin2, motorPin4);


void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  lcd.begin(16, 2);
  plus.setCallback(myCallback1);
  change.setCallback(myCallback2);
  minus.setCallback(myCallback3);

  stepper.setMaxSpeed(1000);
  stepper.setSpeed(Speed);
}


void myCallback1(void) {

  if (!plus.trueFalse()) {
    Speed += increment;
    stepper.setSpeed(Speed);

    lcd.clear();
    lcd.print("Speed: ");
    lcd.print(Speed);
  }
}


void myCallback2(void) {

  if (!change.trueFalse()) {

    if (increment < 10) increment = increment + 1;
    else increment = 1;

    lcd.clear();
    lcd.print("X");
    lcd.print(increment);
  }
}

void myCallback3(void) {

  if (!minus.trueFalse()) {
    Speed -= increment;
    stepper.setSpeed(Speed);
    lcd.clear();
    lcd.print("Speed: ");
    lcd.print(Speed);
  }
}

void loop() {
  idle();
  stepper.runSpeed();
}