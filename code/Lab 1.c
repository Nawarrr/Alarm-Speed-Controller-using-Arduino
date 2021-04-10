int Button = 2;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 8;
int buzzer = 9;
int pot = 0;



void setup()
{
pinMode(Button,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4 ,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(buzzer,OUTPUT);
 
}

void loop()
{
  
bool buttonValue = digitalRead(Button);
int potValue = analogRead(pot);


  if ( potValue <=  169) {
digitalWrite(led1 , LOW);
digitalWrite(led2 , LOW);
digitalWrite(led3 , LOW);
digitalWrite(led4 , LOW);
digitalWrite(led5 , LOW);
digitalWrite(led6 , HIGH);}
  
  else if(potValue <=  339){
digitalWrite(led1 , LOW);
digitalWrite(led2 , LOW);
digitalWrite(led3 , LOW);
digitalWrite(led4 , LOW);
digitalWrite(led5 , HIGH);
digitalWrite(led6 , HIGH);
 }
  
  else if(potValue <=  509){
digitalWrite(led1 , LOW);
digitalWrite(led2 , LOW);
digitalWrite(led3 , LOW);
digitalWrite(led4 , HIGH);
digitalWrite(led5 , HIGH);
digitalWrite(led6 , HIGH);
}
  else if(potValue <=  679){
digitalWrite(led1 , LOW);
digitalWrite(led2 , LOW);
digitalWrite(led3 , HIGH);
digitalWrite(led4 , HIGH);
digitalWrite(led5 , HIGH);
digitalWrite(led6 , HIGH);
}  
  else if(potValue <=  849){
digitalWrite(led1 , LOW);
digitalWrite(led2 , HIGH);
digitalWrite(led3 , HIGH);
digitalWrite(led4 , HIGH);
digitalWrite(led5 , HIGH);
digitalWrite(led6 , HIGH);
} 
  else if(potValue <=  1023){
digitalWrite(led1 , HIGH);
digitalWrite(led2 , HIGH);
digitalWrite(led3 , HIGH);
digitalWrite(led4 , HIGH);
digitalWrite(led5 , HIGH);
digitalWrite(led6 , HIGH);
  }; if (buttonValue == 1) {
    for(int i = 0 ; i<3 ; i++){  
  tone(buzzer, 1000);
  delay(1000);
  noTone(buzzer);
  delay(1100 - potValue);}
  }
  
}
 