/**
 * Acionamento de um Led
 * Sauthor Paulo Sérgio
 */
void setup() {
   pinMode(13,OUTPUT);
   
}

void loop() {
  digitalWrite(13,HIGH);
  delay(900); //1000ms = 1s
  digitalWrite(13,LOW);
  delay(900); //1000ms = 1s
}
