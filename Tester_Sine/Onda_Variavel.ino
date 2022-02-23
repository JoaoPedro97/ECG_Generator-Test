#define pwm 11

float sine;
int sine_i;

void setup()
{
  pinMode(pwm, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(int i=-180;i<180;i+=1)
  {
    sine = sin(i*(3.1415/180.0)*(map(analogRead(A0),0,1023,1,32)));
    sine_i = 127+int(sine*255.0/2.0);

    analogWrite(pwm, sine_i);
    Serial.println(sine_i);
    delay(5);
  }
}
