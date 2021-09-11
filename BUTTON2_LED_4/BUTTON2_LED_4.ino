const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;
const int ledPin4 = 10;
int nilaitombol;
int nilaitombol2;
int count;
int count2;

int buttonState = 0;
void setup() {
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
}

void loop() {
  nilaitombol=digitalRead(buttonPin1);
  if(nilaitombol==1){
    count++;
    delay(300);
    if(count==1){
      digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,LOW);
     digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    }
    if(count==2){
      digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,HIGH);
     digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    }
    if(count==3){
      digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
     digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,LOW);
    }
    if(count>=4){
      digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
     digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,HIGH);
    count=4;
    }
    }
    nilaitombol2=digitalRead(buttonPin2);
  if(nilaitombol2==1){
    count--;
    delay(300);
    
    if(count<1){
      count=1;}
    if(count==1){
      digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,LOW);
     digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    
    }
    if(count==2){
      digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,HIGH);
     digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    }
    if(count==3){
      digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
     digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,LOW);
    }
    if(count==4){
      digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
     digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,HIGH);
   count=0;
    }
}
}
