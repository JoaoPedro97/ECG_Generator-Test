int VetSeq[16][4] = {
  {LOW,  LOW,  LOW,  LOW},
  {HIGH, LOW,  LOW,  LOW},
  {LOW,  HIGH, LOW,  LOW},
  {HIGH, HIGH, LOW,  LOW},
  {LOW,  LOW,  HIGH, LOW},
  {HIGH, LOW,  HIGH, LOW },
  {LOW,  HIGH, HIGH, LOW },
  {HIGH, HIGH, HIGH, LOW},
  {LOW,  LOW,  LOW,  HIGH },
  {HIGH, LOW,  LOW,  HIGH },
  {LOW,  HIGH, LOW,  HIGH },
  {HIGH, HIGH, LOW,  HIGH },
  {LOW,  LOW,  HIGH, HIGH },
  {HIGH, LOW,  HIGH, HIGH },
  {LOW,  HIGH, HIGH, HIGH },
  {HIGH, HIGH, HIGH, HIGH }  
};

int pinos[4] = {5,6,7,8};

void setup()
  {
    for(int i=0;i<4; i++)
    {
      pinMode(pinos[i], OUTPUT);
    }
   Serial.begin(9600);
  }

void loop()
{
  for(int a=0;a<16;a++)
  {
    digitalWrite(pinos[0],VetSeq[a][0]);
    Serial.println(pinos[0],VetSeq[a][0]);
    digitalWrite(pinos[1],VetSeq[a][1]);
    Serial.println(pinos[0],VetSeq[a][1]);
    digitalWrite(pinos[2],VetSeq[a][2]);
    Serial.println(pinos[0],VetSeq[a][2]);
    digitalWrite(pinos[3],VetSeq[a][3]);
    Serial.println(pinos[0],VetSeq[a][3]);
  }
}
