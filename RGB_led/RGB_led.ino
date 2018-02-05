int red_Pin= 9;
int green_Pin = 10;
int blue_Pin = 11;

void setup()
{
 pinMode(red_Pin, OUTPUT);
 pinMode(green_Pin, OUTPUT);
 pinMode(blue_Pin, OUTPUT);
}

void loop()
{
 renkSetup(255, 0, 0); //Red
 delay(1500);
 renkSetup(0, 255, 0); //Green
 delay(1500);
 renkSetup(0, 0, 255); //Blue
 delay(1500);
 renkSetup(255, 255, 0); //Yellow
 delay(1500);
 renkSetup(255, 0, 255); //Magenta
 delay(1500); 
 renkSetup(255, 69, 0); //OrangeRed
 delay(1500);
 renkSetup(255, 255, 255); //White
 delay(1500);
}

void  renkSetup(int red, int green, int blue)

{

 analogWrite(red_Pin, red);
 analogWrite(green_Pin, green);
 analogWrite(blue_Pin, blue);
}
