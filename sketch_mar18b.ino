int ir=3,motor1c=5,motor1a=6,motor2c=9,motor2a=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir,INPUT);
  pinMode(motor1c,OUTPUT);
  pinMode(motor1a,OUTPUT);
  pinMode(motor2c,OUTPUT);
  pinMode(motor2a,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int x=digitalRead(ir);
 if (x==0){
  analogWrite(motor1c,0);
  analogWrite(motor1a,0);
  analogWrite(motor2c,100);
  analogWrite(motor2a,0);
 }else{
  analogWrite(motor1c,100);
  analogWrite(motor1a,0);
  analogWrite(motor2c,0);
  analogWrite(motor2a,0);
 }
}
