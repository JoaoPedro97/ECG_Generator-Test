#define pwm 11

#define Bot_A 3
#define Bot_B 4
#define Bot_C 5

int StateA;
int StateB;
int StateC;

float sine;
int sine_i;

float Vetor[500]={1.06,
1.06,
1.06,
0.86,
0.96,
1.06,
0.96,
0.96,
1.16,
1.01,
0.86,
1.06,
0.86,
0.77,
0.91,
0.96,
1.11,
1.06,
0.91,
0.96,
0.77,
0.81,
0.91,
1.01,
1.11,
1.06,
1.06,
0.96,
0.77,
0.72,
0.86,
0.81,
1.01,
1.16,
1.11,
1.11,
1.06,
0.91,
0.96,
0.96,
1.11,
1.35,
1.25,
1.11,
1.16,
1.06,
1.16,
1.25,
1.35,
1.45,
1.4 ,
1.4 ,
1.35,
1.16,
1.06,
1.01,
1.3 ,
1.6 ,
1.64,
1.6 ,
1.5 ,
1.5 ,
1.5 ,
1.35,
1.35,
1.4 ,
1.64,
1.6 ,
1.5 ,
1.35,
1.21,
1.16,
1.16,
1.01,
0.86,
0.96,
0.96,
0.86,
0.86,
0.77,
0.86,
0.96,
1.06,
0.96,
0.96,
1.06,
0.81,
0.77,
0.86,
0.86,
0.96,
1.11,
0.96,
0.81,
0.86,
0.77,
0.77,
0.77,
0.81,
0.96,
0.91,
0.86,
0.77,
0.67,
0.77,
0.72,
0.81,
0.86,
0.96,
0.91,
0.86,
0.77,
0.57,
0.67,
0.81,
0.91,
0.96,
0.96,
0.91,
0.86,
0.77,
0.62,
0.77,
0.91,
0.96,
0.96,
0.91,
0.86,
0.77,
0.77,
0.77,
0.72,
0.86,
1.06,
1.01,
0.91,
0.77,
0.67,
0.77,
0.77,
0.86,
0.97,
0.87,
0.63,
0.58,
0.68,
0.78,
0.87,
1.02,
1.26,
1.36,
1.56,
1.85,
2   ,
2.39,
2.87,
3.12,
3.46,
3.7 ,
3.51,
3.26,
3.12,
3.26,
3.22,
3.22,
2.87,
2.58,
2.24,
1.65,
1.31,
0.92,
0.53,
0.19,
0   ,
-0.3,
-0.6,
-1.0,
-1.4,
-1.6,
-1.6,
-1.8,
-1.9,
-1.9,
-1.8,
-1.8,
-1.9,
-1.9,
-1.7,
-1.5,
-1.2,
-0.7,
-0.3,
-0.0,
0.01,
0.01,
0.2 ,
0.3 ,
0.4 ,
0.83,
0.98,
1.08,
1.03,
0.93,
1.03,
0.88,
0.88,
1.03,
1.13,
1.23,
1.23,
1.13,
0.98,
1.18,
0.98,
1.03,
1.27,
1.23,
1.18,
1.32,
1.23,
0.98,
1.08,
1.23,
1.23,
1.27,
1.27,
1.27,
1.18,
1.23,
1.18,
1.18,
1.18,
1.18,
1.42,
1.42,
1.13,
1.18,
1.13,
1.08,
1.18,
1.32,
1.32,
1.42,
1.37,
1.23,
1.08,
1.18,
1.23,
1.37,
1.47,
1.47,
1.47,
1.37,
1.18,
1.27,
1.32,
1.37,
1.47,
1.52,
1.52,
1.37,
1.23,
1.27,
1.37,
1.42,
1.47,
1.52,
1.52,
1.62,
1.57,
1.42,
1.47,
1.57,
1.66,
1.76,
1.66,
1.71,
1.76,
1.62,
1.57,
1.66,
1.76,
1.82,
2.02,
2.06,
2.02,
1.97,
1.87,
1.87,
2.11,
2.16,
2.26,
2.26,
2.11,
2.16,
2.16,
2.06,
2.16,
2.31,
2.31,
2.5 ,
2.46,
2.36,
2.16,
2.21,
2.16,
2.26,
2.46,
2.5 ,
2.55,
2.46,
2.41,
2.31,
2.21,
2.21,
2.46,
2.46,
2.36,
2.31,
2.21,
2.02,
1.97,
1.92,
1.87,
1.97,
1.97,
1.97,
1.67,
1.48,
1.58,
1.53,
1.53,
1.58,
1.48,
1.43,
1.58,
1.28,
1.19,
1.19,
1.09,
1.19,
1.38,
1.24,
1.24,
1.19,
1.04,
1.09,
1.04,
1.14,
1.24,
1.14,
1.14,
1.09,
0.99,
0.94,
1.04,
1.04,
1.04,
1.19,
1.28,
1.09,
1.04,
0.89,
0.89,
1.04,
1.09,
1.09,
1.09,
1.04,
0.99,
0.99,
0.99,
0.89,
0.94,
1.19,
1.19,
1.09,
0.94,
0.99,
0.94,
0.94,
0.94,
1.09,
1.24,
1.19,
1.09,
1.04,
0.89,
0.89,
1.09,
1.09,
1.19,
1.24,
1.24,
1.14,
0.94,
0.94,
0.99,
1.09,
1.14,
1.33,
1.28,
1.14,
1.14,
1.09,
1.09,
1.24,
1.28,
1.33,
1.33,
1.28,
1.14,
1.09,
1.09,
1.19,
1.24,
1.43,
1.38,
1.33,
1.24,
1.19,
1.09,
1.09,
1.29,
1.44,
1.34,
1.2 ,
1.2 ,
1.15,
1.2 ,
1.2 ,
1.25,
1.39,
1.49,
1.39,
1.34,
1.2 ,
1.1 ,
1.15,
1.15,
1.15,
1.39,
1.39,
1.34,
1.25,
1.2 ,
1.15,
1.2 ,
1.29,
1.34,
1.39,
1.44,
1.2 ,
1.1 ,
1.1 ,
1.05,
1.29,
1.29,
1.25,
1.34,
1.25,
1.2 ,
1.1 ,
1.1 ,
1.25,
1.25,
1.34,
1.34,
1.2 ,
1.1 ,
1.11,
1.06,
1.06,
0.86,
0.96,
1.06,
0.96,
0.96,
1.16,
1.01,
0.86,
1.06,
0.86,
0.77,
0.91,
0.96,
1.11,
1.06,
0.91,
0.96,
0.77,
0.81,
0.91,
1.01,
1.11,
1.06,
1.06,
0.96,
0.77,
0.72,
};

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
