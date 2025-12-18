int melody [] = {262,294,330,349};
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i<8; i++){
    pinMode(2,INPUT);
    pinMode(4,INPUT);
    pinMode(7,INPUT);
    pinMode(8,INPUT);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH){
    tone(11,melody[0],50);
  }else if(digitalRead(4) == HIGH){
    tone(11,melody[1],50);
  }else if(digitalRead(7) == HIGH){
    tone(11,melody[2],50);
  }else if(digitalRead(8) == HIGH){
    tone(11,melody[3],50);
  }

}