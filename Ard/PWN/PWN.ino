void setup() 
{
  
  pinMode(11, OUTPUT);

}

void loop() {

  analogWrite(11, 0);
  
  for (int i = 1; i <=255 ;i++)

    {
      analogWrite(11, i);
      delay(10);
    }

  analogWrite(11, 255);
  
  for (int j = 255; j>1; j--)
 
    {

        analogWrite(11, j);
        delay(10);
        
    }
}
