#include <TimerOne.h>

const int SERVO = 10;

const int SERVO_PERIOD = 20000;
const int SERVO_MINDUTY = (1024/20)*0.7;
const int SERVO_MAXDUTY = (1024/20)*2.3;


void setup() {
  // put your setup code here, to run once:
  Timer1.initialize();
  Timer1.pwm(SERVO,0);

  Timer1.setPeriod(SERVO_PERIOD);
  Timer1.setPwmDuty(SERVO,SERVO_MINDUTY); 

  delay(1000);

  // for(int cnt=0;cnt<=2;cnt++) {
  //   Timer1.setPwmDuty(SERVO,SERVO_MINDUTY);
  //   delay(1000);
  //   Timer1.setPwmDuty(SERVO,SERVO_MAXDUTY);
  //   delay(1000);   

  for(int angle=SERVO_MINDUTY;angle<=SERVO_MAXDUTY;angle++) {
    Timer1.setPwmDuty(SERVO,angle);
    delay(30);
 }

  Timer1.disablePwm(SERVO);
}

void loop() {
  // put your main code here, to run repeatedly:
}
