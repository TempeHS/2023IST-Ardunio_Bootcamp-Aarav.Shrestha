/*
  Author: Aarav Shrestha

  Learning Intention:
  The students will learn basic math and arithmetic operations in C++

  Success Criteria:
    1.  I know the arithmetic operation symbols %, *, +, -, / & =
    2.  I can perform arithmetic calculations
    3.  I know how to access more information in the documentation about math and arithmetic
    4.  I can access the order of operations documentation and use parenthesis to control
        the order of operations
    5.  I understand short-hand incrementation and decrementation
    6.  I can seed and generate a random number
    7.  I can map an analogue value on a range of 0-1023 to a PWM value on a range of 0-255

  Student Notes:
    % (remainder)
    * (multiplication)
    + (addition)
    - (subtraction)
    / (division)
    = (assignment operator)
    all data types must be the same
       to  convert to float use float()
       float()
       long()
       int()

    "myResult += 3" will add 3 to whatever value myResult is
    "myResult++" will add 1 to whatever value myResult is
  Documentation:
    https://www.arduino.cc/reference/en/#structure
    https://en.cppreference.com/w/cpp/language/operator_precedence
    https://www.arduino.cc/reference/en/language/functions/random-numbers/random/
    https://www.arduino.cc/reference/en/language/functions/math/map/
  Schematic:
      https://www.tinkercad.com/things/ihcHlUXS9Y7?sharecode=bOdn0Sm9OuCJ6qI9GAwdyLsZDEUcecsmUharAUXXRIQ
      https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.mathComputation/Bootcamp-MAP-PotLED.png
*/
static unsigned int myNumber1 = 4;
static unsigned int myNumber2 = 5;
float myResult = 0;

void setup() {
Serial.begin(9600);
Serial.println("configured at 9600");
Serial.println("---------------------");
/*myResult += float(myNumber1) / float(myNumber2*2); */
randomSeed(analogRead(0));
myResult = random(0,100);
Serial.println(myResult);

}

void loop() {

}