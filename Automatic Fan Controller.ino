
 
int trigPin = A3;    
int echoPin = A4;    
int motorpin=A1;
int limit1=5;
int limit2=10;
int limit3=15;
int limit4=20;
int limit5=25;
int limit6=30;

int lebel1=2;
int lebel2=3;
int lebel3=4;
int lebel4=5;
int lebel5=6;
int lebel6=7;
long duration,cm, inches,feet;
 
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(lebel1,OUTPUT);
  pinMode(lebel2,OUTPUT);
  pinMode(lebel3,OUTPUT);
  pinMode(lebel4,OUTPUT);
  pinMode(lebel5,OUTPUT);
  pinMode(lebel6,OUTPUT);
  pinMode(motorpin,OUTPUT);
}
 
void loop()
{

  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  cm = (duration/2) / 29.1;
  inches = (duration/2) / 74; 
  feet=(inches/12);
  
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  if (cm<=limit1)
  {
    digitalWrite(lebel1, HIGH);
    digitalWrite(lebel2, LOW);
    digitalWrite(lebel3, LOW);
    digitalWrite(lebel4, LOW);
    digitalWrite(lebel5, LOW);
    digitalWrite(lebel6, LOW);
    digitalWrite(motorpin, LOW);
  }
  
  else if (cm<=limit2)
  {
    digitalWrite(lebel1, LOW);
    digitalWrite(lebel2, HIGH);
    digitalWrite(lebel3, LOW);
    digitalWrite(lebel4, LOW);
    digitalWrite(lebel5, LOW);
    digitalWrite(lebel6, LOW);
  }
  
   else if (cm<=limit3)
  {
    digitalWrite(lebel1, LOW);
    digitalWrite(lebel2, LOW);
    digitalWrite(lebel3, HIGH);
    digitalWrite(lebel4, LOW);
    digitalWrite(lebel5, LOW);
    digitalWrite(lebel6, LOW);
  }
  
  else if (cm<=limit4)
  {
    digitalWrite(lebel1, LOW);
    digitalWrite(lebel2, LOW);
    digitalWrite(lebel3, LOW);
    digitalWrite(lebel4, HIGH);
    digitalWrite(lebel5, LOW);
    digitalWrite(lebel6, LOW);
  }
  
  else if (cm<=limit5)
  {
    digitalWrite(lebel1, LOW);
    digitalWrite(lebel2, LOW);
    digitalWrite(lebel3, LOW);
    digitalWrite(lebel4, LOW);
    digitalWrite(lebel5, HIGH);
    digitalWrite(lebel6, LOW);
  }
  
  
  else if (cm<=limit6)
  {
    digitalWrite(lebel1, LOW);
    digitalWrite(lebel2, LOW);
    digitalWrite(lebel3, LOW);
    digitalWrite(lebel4, LOW);
    digitalWrite(lebel5, LOW);
    digitalWrite(lebel6, HIGH);
  }
  if (cm>limit6)
  {
     digitalWrite(motorpin, LOW);
    
  }
  /*if (cm<limit)
  {
    digitalWrite(soundpin, HIGH);
  } 
  if (cm>limit)
  {
    digitalWrite(soundpin, LOW);
  }*/
}
