void setup() 
  {
      for(int i = 9; i<=13;i++)
      {
      pinMode(i, OUTPUT);
      }

  }

void loop() 
{

  for(int j = 9; j<=13;j++)
    {
       digitalWrite(j, HIGH);
       delay(100);
    }

   for(int q = 9; q<=13; q++)
    {
        digitalWrite(q, LOW);
        delay(100);
    }

   delay(0);
}
