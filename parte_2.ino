// C++ code
//

const int RED = 12;
const int BLUE = 2;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, LOW);
  
  delay(1000);
  
  
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, HIGH);
  
  delay(1000);
}