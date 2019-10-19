
int enA = 5;
int enB = 10;
int in1 = ;
int in2 = ;
int in3 = ;
int in4 = ;
int trigPinForwad = ;
int echoPinForward = ;
int trigPinBackward = ;
int echoPinBackward = ;
int trigPinLeft = ;
int echoPinLeft = ;
int trigPinRight = ;
int echoPinRight = ;
long duration_forward, duration_backward, duration_right, duration_left;
float distance_forward, distance_backward, distance_right, distance_left;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(trigPinForward, OUTPUT);
  pinMode(echoPinForward, INPUT);
  pinMode(trigPinBackward, OUTPUT);
  pinMode(echoPinBackward, INPUT);
  pinMode(trigPinLeft, OUTPUT);
  pinMode(echoPinLeft, INPUT); 
  pinMode(trigPinRight, OUTPUT);
  pinMode(echoPinRight, INPUT);      
  
}

void forward(){
  Serial.println("FORWARD");
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
}

void backward(){
  Serial.println("BACKWARD");
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
}

void right(){
  Serial.println("RIGHT");
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
}

void left(){
  Serial.println("LEFT");
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
}

float calculateDistanceForward(){
  //sending HIGH pulse
    digitalWrite(trigPinForward, LOW);
    delayMicroseconds(10);
    digitalWrite(trigPinForward, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPinForward, LOW);

  //Recieving HIGH pulse
    duration_forward = pulseIn(echoPinForward, HIGH);   //returns time in microseconds
    distance_forward =    duration_forward*0.034/2;   //returns distance in centimeters
    return distance_forward;
}

float calculateDistanceBackward(){
  //sending HIGH pulse
    digitalWrite(trigPinBackward, LOW);
    delayMicroseconds(10);
    digitalWrite(trigPinBackward, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPinBackward, LOW);

  //Recieving HIGH pulse
    duration_backward = pulseIn(echoPinBackward, HIGH);   //returns time in microseconds
    distance_backward =    duration_backward*0.034/2;   //returns distance in centimeters
    return distance_backward;
}

float calculateDistanceLeft(){
  //sending HIGH pulse
    digitalWrite(trigPinLeft, LOW);
    delayMicroseconds(10);
    digitalWrite(trigPinLeft, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPinLeft, LOW);

  //Recieving HIGH pulse
    duration_left = pulseIn(echoPinLeft, HIGH);   //returns time in microseconds
    distance_left =    duration_left*0.034/2;   //returns distance in centimeters
    return distance_left;
}

float calculateDistanceRight(){
  //sending HIGH pulse
    digitalWrite(trigPinRight, LOW);
    delayMicroseconds(10);
    digitalWrite(trigPinRight, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPinRight, LOW);

  //Recieving HIGH pulse
    duration_right = pulseIn(echoPinRight, HIGH);   //returns time in microseconds
    distance_right =    duration_right*0.034/2;   //returns distance in centimeters
    return distance_right;
}

void loop() {
  // put your main code here, to run repeatedly:

  

}
