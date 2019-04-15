int touch1 = 2;
int touch2 = 3; 
int out = 13;  
int state = HIGH;  
int r;           
int p = LOW;    
long time = 0;       
long debounce = 200;   
void setup()
{
  pinMode(touch1, INPUT);
  pinMode(touch2, INPUT);
  pinMode(out, OUTPUT);
}
void loop()
{
  r = digitalRead(touch1)&&digitalRead(touch2);
  if (r == HIGH )
    delay(2000);
    if (r == HIGH )
      digitalWrite(out, HIGH);
    else 
      digitalWrite(out, LOW);
}
