#define sensor 2
#define buzzer 8
int laser = 0;
int delay_buzzer = 20;
int delay_0 = 10;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600)
  pinMode(sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  laser = digitalRead(sensor);
  delay(delay_0);
  while(laser==0){
    digitalWrite(buzzer, HIGH);
    delay(delay_buzzer);
    digitalWrite(buzzer, LOW);
    delay(delay_buzzer);
    }
}
