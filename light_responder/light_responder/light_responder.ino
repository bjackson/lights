// Brett Jackson
// brett@brettjackson.org

int dataPin = 8;
int clockPin1 = 9;
int clockPin2 = 10;
int incSig = 0;
int readData = 1;

void setup() 
{
  Serial.begin(9600);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin1, OUTPUT);
  pinMode(clockPin2, OUTPUT);
}

void loop()
{
  readData = Serial.read();
  if (readData == 48)
  {
    digitalWrite(dataPin, LOW); 
    Serial.println("Set data pin low.");
  } else if (readData == 49)
  {
    digitalWrite(dataPin, HIGH);
    Serial.println("Set data pin high.");
  } else if (readData == 50)
  {
    for (int i = 0; i < 8; i++)
  {
    digitalWrite(clockPin1, HIGH);
    delay(50);
    digitalWrite(clockPin1, LOW); 
    delay(50);
   }
   Serial.println("Clock pin 1 toggled 8 times.");
  } else if (readData == 51)
  {
    digitalWrite(clockPin2, HIGH);
    delay(10);
    digitalWrite(clockPin2, LOW);
    Serial.println("Clock pin 2 toggled once.");
  }
}


