const int led1 = 6;          // donar nom al pin 6 de l’Arduino
unsigned long retard = 200;

void setup() 
{
  pinMode (led1, OUTPUT);
  
    digitalWrite (led1,1);
    delay (retard);
    digitalWrite (led1,0);
    delay (retard);

     digitalWrite (led1,1);
    delay (retard);
    digitalWrite (led1,0);
    delay (retard);

     digitalWrite (led1,1);
    delay (retard);
    digitalWrite (led1,0);
    delay (retard);
  
}




void loop() 
{}
