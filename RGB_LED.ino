//Define pins

const int Blue = 3;
const int Green = 5;
const int Red = 6;

void setup()
 {
pinMode(Red, OUTPUT);
pinMode(Green, OUTPUT);
pinMode(Blue, OUTPUT);
}

// Define variables
//int redValue; 
//int greenValue;
//int blueValue;

void loop() 
{ // color code #00c9cc (R = 0, G = 201, B = 204)
analogWrite(Red, 0);
analogWrite(Green, 201);
analogWrite(Blue, 204);

delay(1000);//Keep color 1 second

// Color code #F7788A (R = 247, G = 168, B = 138)
analogWrite(Red, 247);
analogWrite(Green, 120);
analogWrite(Blue, 138);

delay(1000);//Keep color 1 second

// Color code #34A853 (R = 52, G = 168, B = 83)
analogWrite(Red, 52);
analogWrite(Green, 168);
analogWrite(Blue, 83);

delay(1000);//Keep color 1 second


}
