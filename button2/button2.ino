const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin = 13;

int buttonState = 0;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
}

void loop() {
  if(digitalRead(buttonPin1)==HIGH){
    digitalWrite(ledPin,LOW);
    }
  else if(digitalRead(buttonPin2)== HIGH){
    digitalWrite(ledPin,HIGH);
    }

}
