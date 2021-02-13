void setup() 
  {
      int a = 6;
      pinMode(a, OUTPUT); //sets pin 10 for output
  }

void loop() 
  { 
    int a = 6;
    int i =0;
    digitalWrite(a, LOW);
    delay(10);
    
    while (i<3)
    {
      digitalWrite(a, HIGH); //turns on the LED in pin 10
      delay(250); //ms 
      digitalWrite(a, LOW); //turns off the LED in pin 10
      delay(250);
      i++;

    }
i=0;
    while(i<3)
    {
      digitalWrite(a, HIGH); //turns on the LED in pin 10
      delay(500); //ms 
      digitalWrite(a, LOW); //turns off the LED in pin 10
      delay(500);
      i++;
    } 
i=0;
      while(i<3)
      {
      digitalWrite(a, HIGH); //turns on the LED in pin 10
      delay(250); //ms 
      digitalWrite(a, LOW); //turns off the LED in pin 10
      delay(250);
      i++;
      }
      
      digitalWrite(a,LOW);
      delay(5000);
 
  }
