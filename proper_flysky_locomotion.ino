int x;
void setup() 
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(22,OUTPUT);
  digitalWrite(22,HIGH);
  Serial.begin(9600);
}
void loop()
{
  
  long a = pulseIn(9,HIGH);//ch3
  // long b = pulseIn(10,HIGH);
  long c = pulseIn(8,HIGH);//ch1
  // long s = pulseIn(11,HIGH);
  // long t = pulseIn(12,HIGH);
  
  
    
    Serial.println("locomotion: ");
    Serial.println(a);
    Serial.println(c);
    
    // x=map(s,996,1990,0,255);
    x= 150;
    
    if(a>1760)
    {
      // Serial.println(a);
      analogWrite(3,0);
      analogWrite(4,x);
      analogWrite(5,x);
      analogWrite(6,0);
    }
  if(a>1300 && a<1760)
    {
      Serial.println(a);
      analogWrite(3,0);
      analogWrite(4,0);
      analogWrite(5,0);
      analogWrite(6,0);
    }
    if(a<1300)
    {
      Serial.println(a);
      analogWrite(3,x);
      analogWrite(4,0);
      analogWrite(5,0);
      analogWrite(6,x);
    }
    if(c<1350)
    {
      
      analogWrite(3,0);
      analogWrite(4,x);
      analogWrite(5,0);
      analogWrite(6,x);
    }
    else if(c>1678)
    {
      
      analogWrite(3,x);
      analogWrite(4,0);
      analogWrite(5,x);
      analogWrite(6,0);
    }
    
  
  

}