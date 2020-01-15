const int sensorPin1=0;
const int sensorPin2=1;
const int sensorPin3=2;
const int ledpin= 12;
const int threshold= 1000;
void setup()
{
pinMode(12, OUTPUT);

pinMode(11, OUTPUT);

pinMode(10, OUTPUT);
}
void loop()
{
int val= analogRead(sensorPin1);
int val2= analogRead(sensorPin2);
int val3= analogRead(sensorPin3);
if (val>=threshold)
{
digitalWrite(12, HIGH);
delay(3000);
digitalWrite(12,LOW);
  digitalWrite(11,LOW);  
  digitalWrite(10,LOW);

}
else if  (val2>=threshold)
{
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(12, HIGH);
delay(3000);
digitalWrite(12,LOW);
  digitalWrite(11,LOW);  
  digitalWrite(10,LOW);

}
else if  (val3>=threshold)
{
digitalWrite(10, HIGH);
  digitalWrite(12,LOW);
digitalWrite(11, HIGH);

delay(3000);
digitalWrite(12,LOW);
  digitalWrite(11,LOW);  
  digitalWrite(10,LOW);

else{
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);  
  digitalWrite(10,LOW);
  }
}
