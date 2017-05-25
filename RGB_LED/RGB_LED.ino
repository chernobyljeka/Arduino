int R = 13;
int G = 12;
int B = 11;
int ButPin = 8; // Подключаем кнопку к выходу 10
int c = 0; // флаг состояния
byte flag = 0;

void setup() {
  
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT); 
  pinMode(ButPin, INPUT);
  
}

void led_on()
{
  if(c == 0) 
  {
    digitalWrite(R, HIGH); 
  }
  
  else 
  {
    digitalWrite(R, LOW);
  } 

if(c == 1) 
  {
    digitalWrite(G, HIGH);
  }
  else 
  {
    digitalWrite(G, LOW);
  } 

  if(c == 2) 
  {
    digitalWrite(B, HIGH);
    
  }
  else 
  {
    digitalWrite(B, LOW);
  } 
}


void loop() 
{

if(digitalRead(ButPin) == HIGH && flag == 0) 
 { 
 c ++;
 flag = 1;

 if(c > 2) // Если номер режима превышает требуемого
 { // то отсчет начинается с нуля
 c = 0;
 }
 }

 if(digitalRead(ButPin) == LOW && flag == 1)
 {
 flag = 0;
 }
  
 if(digitalRead(ButPin) == HIGH) 
  {
    led_on();
  }
}
