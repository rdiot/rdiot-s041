/* Photo Interrupter Module (KY-010) [S041] : http://rdiot.tistory.com/95 [RDIoT Demo] */

int pin = 2;

void loop()
{
  int val = digitalRead(pin);
  Serial.println("digital=" + (String)val + " ");

  if(HIGH == val)
  {
    Serial.println("interrupt=detected---------------------------------------------------------");
    delay(100);
  }
  else{
    Serial.println("interrupt=NONE   ");
    delay(100);
  }
}
