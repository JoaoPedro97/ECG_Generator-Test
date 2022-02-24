int vet[4] = {5,6,7,8};



void setup() {
  for(int i = 0;i<4;i++)
  {
    pinMode(vet[i], OUTPUT);
  }
    Serial.begin(9600);
}

void loop()
{ 
 for(int a=0;a<16;a++)
 {
  for(int b=0;b<8;b++)
  {
    for(int c=0;c<4;c++)
    {
      for(int d=0;d<2;d++)
      {
      digitalWrite(vet[0], LOW);
      delay(1);
      digitalWrite(vet[0], HIGH); 
      }
     digitalWrite(vet[1],LOW);
     delay(1);
     digitalWrite(vet[1],HIGH);
    }
    digitalWrite(vet[2],LOW);
    delay(1);
    digitalWrite(vet[2],HIGH);
  }
  digitalWrite(vet[3], LOW);
  delay(1);
  digitalWrite(vet[3], HIGH);
 }
}
