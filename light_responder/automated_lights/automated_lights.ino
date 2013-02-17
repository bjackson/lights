// Alex Smith

int dataPin = 8;
int clockPin1 = 9;
int clockPin2 = 10;
int incSig = 0;
int readData = 1;
  int on=0;

void setup() 
{
  Serial.begin(9600);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin1, OUTPUT);
  pinMode(clockPin2, OUTPUT);

}

void loop()
{
    on++;
    if (on%2){
    digitalWrite(dataPin, LOW); 
    }
    else{
    digitalWrite(dataPin, HIGH);
    }

    for (int i = 0; i < 8; i++)
  {
    digitalWrite(clockPin1, HIGH);
    delay(100);
    digitalWrite(clockPin1, LOW); 
    delay(100);
   }
   Serial.println("Clock pin 1 toggled 8 times.");
    digitalWrite(clockPin2, HIGH);
    delay(100);
    digitalWrite(clockPin2, LOW);
    Serial.println("Clock pin 2 toggled once.");
    delay(500);
  }


