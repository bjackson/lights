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
  digitalWrite(dataPin, LOW);
  digitalWrite(clockPin1, LOW);
  digitalWrite(clockPin2, LOW);
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
    digitalWrite(clockPin1, LOW); 
   }
   Serial.println("Clock pin 1 toggled 8 times.");
  } else if (readData == 51)
  {
    digitalWrite(clockPin2, HIGH);
    digitalWrite(clockPin2, LOW);
    Serial.println("Clock pin 2 toggled once.");
  }
  delay(300);
}


