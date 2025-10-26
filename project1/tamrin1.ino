void setup() {
  pinMode ( 8, OUTPUT );
}

void loop() {
  digitalwrite( 8 , HIGH);
  delay (3000) ;
  digitalWrite( 8 , LOW);
  delay (3000) ;
}
