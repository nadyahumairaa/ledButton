const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin1 = 13;
const int ledPin2 = 12;

int buttonState = 0;
void setup() {
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
}

void loop() {
  if(digitalRead(buttonPin1)==HIGH){
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,HIGH);
    }
  else if(digitalRead(buttonPin2)== HIGH){
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin1,HIGH);
    }

}
