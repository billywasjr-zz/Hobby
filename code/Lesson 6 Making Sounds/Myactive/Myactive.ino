//www.elegoo.com
//2016.12.08

int buzzer = 11;//the pin of the active buzzer
void setup()
{
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
}

void loop()
{
  unsigned char i;
  int delay_high = 20;
  int delay_low = delay_high;
  int loop_iterations = 100;
  int j = 0;

  for(int i = 0; i < 255000; i += 1) // bring volume up
  {
    j = i / 100;
    analogWrite(buzzer, j);
  }
  
//  for(int i = 255; i >= 0; i -= 1) // bring volume down
//  {
//    analogWrite(buzzer, i);
//  }



//  while(1)
//  {

//output another frequency
//    for(i=0;i<loop_iterations;i++)
//      {
//      digitalWrite(buzzer,HIGH);
//      delay(delay_high);//wait for delay_high ms
//      digitalWrite(buzzer,LOW);
//      delay(delay_low);//wait for delay_low ms
//      }
      //output a frequency
//    for(i=0;i<loop_iterations;i++)
//      {
//      digitalWrite(buzzer,HIGH);
//      delay(1);//wait for 1ms
//      digitalWrite(buzzer,LOW);
//      delay(1);//wait for 1ms
//      }


//  }
} 
