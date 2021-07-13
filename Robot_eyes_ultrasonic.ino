

const int trigpin=8;
const int echopin=9;
float duration;
float distance;
int red_light_pin1= 2;
int green_light_pin1 = 4;
int blue_light_pin1 = 3;
int red_light_pin2= 5;
int green_light_pin2 = 7;
int blue_light_pin2 = 6;
  
void setup()
{
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(red_light_pin1, OUTPUT);
  pinMode(green_light_pin1, OUTPUT);
  pinMode(blue_light_pin1, OUTPUT);
  pinMode(red_light_pin2, OUTPUT);
  pinMode(green_light_pin2, OUTPUT);
  pinMode(blue_light_pin2, OUTPUT);
   
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin1, red_light_value);
  analogWrite(green_light_pin1, green_light_value);
  analogWrite(blue_light_pin1, blue_light_value);
  analogWrite(red_light_pin2, red_light_value);
  analogWrite(green_light_pin2, green_light_value);
  analogWrite(blue_light_pin2, blue_light_value);
}

void loop()
{
 
 digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
      
  duration = pulseIn(echopin, HIGH);
  distance = (duration*.0343)/2;


  if ( distance > 100 && distance < 250){
     RGB_color(0, 255, 0); // Green Color

    }
  
  
  else 
  {
    RGB_color(255, 255, 0); // Yellow Color
  }
 
}
  
