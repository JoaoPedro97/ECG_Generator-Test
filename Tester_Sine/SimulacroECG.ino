#define pwm 11

#define Bot_A 3
#define Bot_B 4
#define Bot_C 5

int StateA;
int StateB;
int StateC;

float sine;
int sine_i;

int Vetor[50]={0,0,0,0,1,1,2,5,5,6,7,4,5,6,6,5,4,3,3,2,2,1,0,0,-1,-3,-4,-1,6,12,24,50,75,100,54,25,2,8,3,-2,-5,-7,-13,-8,-4,0,0,0,0,0};

void setup()
{
  pinMode(pwm, OUTPUT);
  pinMode(Bot_A, INPUT);
  pinMode(Bot_B, INPUT);
  pinMode(Bot_C, INPUT);
  Serial.begin(9600);
}

void loop()
{
  for (int i=0;i<50;i++)
  {
    analogWrite(pwm, Vetor[i]);
    Serial.println(Vetor[i]);
    delay(5);
  }
}


