int p1 = 2;
int p2 = 6;
int p3 = 8;
int p4 = 9;

int IR = 5;

bool I_R;

int trigPin=12;
int echoPin=13;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);

  pinMode(I_R,INPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = duration * 0.034/2;

  I_R = digitalRead(IR);
  char control = Serial.read();

if(10<=distance<=25)
{  
    if(IR == 1)
    {
      digitalWrite(p1,HIGH);
      digitalWrite(p2,LOW);
      digitalWrite(p3,LOW);
      digitalWrite(p4,HIGH);
    }

    else
    {
      digitalWrite(p1,LOW);
      digitalWrite(p2,LOW);
      digitalWrite(p3,LOW);
      digitalWrite(p4,LOW);
    }
  }
} 
