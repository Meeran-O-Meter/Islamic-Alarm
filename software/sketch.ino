const int buttonPin = 2;
const int speakerPin = 8;

void setup(){
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(speakerPin, OUTPUT);
}

void loop(){
  if (digitalRead(buttonPin) == LOW){
    tone(speakerPin, 600);
  }
  else{
    noTone(speakerPin);
  }
}