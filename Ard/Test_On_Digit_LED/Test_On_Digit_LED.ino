void setup() {
  for(int i = 1; i<=13;i++)
      {
      pinMode(i, OUTPUT);
      }
}

///////////////////////////////////////////////////////////

void off()

  {
    for (int j =1; j < 13; j++)
    {
        digitalWrite(j, LOW);
    }
  }
  
///////////////////////////////////////////////////////////

void one()
{
  digitalWrite(9, HIGH);
  digitalWrite(4, HIGH); //Number One
  delay(1000);
}

///////////////////////////////////////////////////////////

void two()
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);  //Number Two

    delay(1000);
  }
  
///////////////////////////////////////////////////////////


void three()
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);

    delay(1000);
  }
  
///////////////////////////////////////////////////////////


void four()
  {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(4, HIGH);
   

    delay(1000);
  }
  
///////////////////////////////////////////////////////////

void five()
  {
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(3, HIGH);

    delay(1000);
  }
  
///////////////////////////////////////////////////////////

void six()
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);

    delay(1000);
  }
  
///////////////////////////////////////////////////////////

void seven()
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(4, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////
void eight()
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////

void nine()
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////

void zero()
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
   
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////

void a()
  {
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////

void c()
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////


void e()
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////


void f()
  {
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////

void h()
  {
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    
    delay(1000);
  }
  
///////////////////////////////////////////////////////////
void loop() 

  {
    nine();
    off();

    eight();
    off();
    
    seven();
    off();
    
    six();
    off();

    five();
    off();
    
    four();
    off();

    three();
    off();

    two();
    off();

    one();
    off();

    zero();
    off();

    a();
    off();

    c();
    off();

    e();
    off();

    f();
    off();

    h();
    off(); 
    
    delay(2000);

    


  }
