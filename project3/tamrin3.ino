int BUTTON_PIN = 4 ;
int ledPin = 2 ;
int buttonstate = 0 ;
void setup() {
  // put your setup code here, to run once:
pinMode (BUTTON_PIN , INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonstate = digitalRead ( BUTTON_PIN) ;
if(buttonstate == LOW) {
  digitalWrite (ledPin, HIGH);
}
else{
  digitalrite( ledPin, lOW) ;
}
}
