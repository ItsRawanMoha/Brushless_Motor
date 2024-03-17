// Motor A

int enA = 2;
int in1 = 7;
int in2 = 6;

// Motor B

int enB = 3;
int in3 = 5;
int in4 = 4;

void setup()

{

  // Set all the motor control pins to outputs

  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void demoTwo()

{
  // This function will run the motors across the range of possible speeds
  // Note that maximum speed is determined by the motor itself and the operating voltage

  // Turn on motors

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 

  // Accelerate from zero to maximum speed
for (int i = 0; i < 256; i++)

  {

    analogWrite(enA, i);
    analogWrite(enB, i);

    delay(20);

  } 

  // Decelerate from maximum speed to zero

  for (int i = 255; i >= 0; --i)

  {

    analogWrite(enA, i);
    analogWrite(enB, i);

    delay(20);

  } 

  // Now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);  

}

void loop()

{

  demoTwo();

}