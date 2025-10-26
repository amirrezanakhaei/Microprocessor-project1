int buttonpin = 8 ;
int ledpin = 2 ;
int buttonstate = 0 ;
void setup() {
  // put your setup code here, to run once:
pinMode (ledpin, OUTPUT) ;
pinMode (buttonpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate = digitalRead ( buttonpin) ;
if(buttonstate == LOW) {
  digitalWrite (ledPin, HIGH);
}
else{
  digitalrite( ledPin, lOW) ;
}
}
