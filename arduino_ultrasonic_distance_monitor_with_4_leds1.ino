#define trigpin 3
#define echopin 2
long duration, distance;
int led1=11;
int led2=10;
int led3=9;
int led4=6;
void setup()
{
  pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(6, OUTPUT);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
}

void loop()
{
digitalWrite(trigpin,0);
delayMicroseconds(2);
digitalWrite(trigpin,1);
delayMicroseconds(10);
digitalWrite(trigpin,0);
duration = pulseIn(echopin,1);
distance = (duration/2)*0.0343;
  
  if (3<=distance && distance<=86)
  {analogWrite(led1,map(distance,3,86,0,255));}
  else if (86<=distance && distance<=169)
  {analogWrite(led2,map(distance,86,169,0,255));}
  else if (169<=distance && distance<=252)
  {analogWrite(led3,map(distance,169,252,0,255));}
  else if (252<=distance && distance<=335)
  {analogWrite(led4,map(distance,252,335,0,255));}  
  
}