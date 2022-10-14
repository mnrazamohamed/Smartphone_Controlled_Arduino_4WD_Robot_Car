
#define ACTA_MTR1 5        
#define ACTB_MTR1 6       
#define ACTA_MTR2 10      
#define ACTB_MTR2 11    

#define INPUT_11  2       
#define INPUT_12  3       
#define INPUT_13  4       
#define INPUT_14  7       

#define INPUT_21  8      
#define INPUT_22  9        
#define INPUT_23  12      
#define INPUT_24  13       

int Instruction;          
int CarSpeed = 100;     
int coff_speed = 4;

void setup() {  
       
    pinMode(ACTA_MTR1, OUTPUT);
    pinMode(ACTB_MTR1, OUTPUT);
    pinMode(ACTA_MTR2, OUTPUT);
    pinMode(ACTA_MTR2, OUTPUT);
  
    pinMode(INPUT_11, OUTPUT);
    pinMode(INPUT_12, OUTPUT);
    pinMode(INPUT_13, OUTPUT);
    pinMode(INPUT_14, OUTPUT);
    
    pinMode(INPUT_21, OUTPUT);
    pinMode(INPUT_22, OUTPUT);
    pinMode(INPUT_23, OUTPUT);
    pinMode(INPUT_24, OUTPUT);

  Serial.begin(9600); 

  } 

void goForward(){ 

      digitalWrite(INPUT_11, HIGH);
      digitalWrite(INPUT_12, LOW);
      analogWrite(ACTA_MTR1, CarSpeed);

      digitalWrite(INPUT_13, LOW);
      digitalWrite(INPUT_14, HIGH);
      analogWrite(ACTB_MTR1, CarSpeed);


      digitalWrite(INPUT_21, LOW);
      digitalWrite(INPUT_22, HIGH);
      analogWrite(ACTA_MTR2, CarSpeed);


      digitalWrite(INPUT_23, HIGH);
      digitalWrite(INPUT_24, LOW);
      analogWrite(ACTA_MTR2, CarSpeed);

  }

void goBackward(){ 

      digitalWrite(INPUT_11, LOW);
      digitalWrite(INPUT_12, HIGH);
      analogWrite(ACTA_MTR1, CarSpeed);


      digitalWrite(INPUT_13, HIGH);
      digitalWrite(INPUT_14, LOW);
      analogWrite(ACTB_MTR1, CarSpeed);


      digitalWrite(INPUT_21, HIGH);
      digitalWrite(INPUT_22, LOW);
      analogWrite(ACTA_MTR2, CarSpeed);


      digitalWrite(INPUT_23, LOW);
      digitalWrite(INPUT_24, HIGH);
      analogWrite(ACTA_MTR2, CarSpeed);

  }

void GoRightSide(){ 

      digitalWrite(INPUT_11, LOW);
      digitalWrite(INPUT_12, HIGH);
      analogWrite(ACTA_MTR1, CarSpeed);


      digitalWrite(INPUT_13, HIGH);
      digitalWrite(INPUT_14, LOW);
      analogWrite(ACTB_MTR1, CarSpeed);


      digitalWrite(INPUT_21, LOW);
      digitalWrite(INPUT_22, HIGH);
      analogWrite(ACTA_MTR2, CarSpeed);


      digitalWrite(INPUT_23, HIGH);
      digitalWrite(INPUT_24, LOW);
      analogWrite(ACTA_MTR2, CarSpeed);


  }

void GoLeftSide(){

      digitalWrite(INPUT_11, HIGH);
      digitalWrite(INPUT_12, LOW);
      analogWrite(ACTA_MTR1, CarSpeed);


      digitalWrite(INPUT_13, LOW);
      digitalWrite(INPUT_14, HIGH);
      analogWrite(ACTB_MTR1, CarSpeed);

        
      digitalWrite(INPUT_21, HIGH);
      digitalWrite(INPUT_22, LOW);
      analogWrite(ACTA_MTR2, CarSpeed);


      digitalWrite(INPUT_23, LOW);
      digitalWrite(INPUT_24, HIGH);
      analogWrite(ACTA_MTR2, CarSpeed);

        
  }

void goForwardRight(){
      
      digitalWrite(INPUT_11, HIGH);
      digitalWrite(INPUT_12, LOW);
      analogWrite(ACTA_MTR1, CarSpeed/coff_speed);

      digitalWrite(INPUT_13, LOW);
      digitalWrite(INPUT_14, HIGH);
      analogWrite(ACTB_MTR1, CarSpeed/coff_speed);


      digitalWrite(INPUT_21, LOW);
      digitalWrite(INPUT_22, HIGH);
      analogWrite(ACTA_MTR2, CarSpeed);


      digitalWrite(INPUT_23, HIGH);
      digitalWrite(INPUT_24, LOW);
      analogWrite(ACTA_MTR2, CarSpeed);
 
  }

void goForwardLeft(){
      
      digitalWrite(INPUT_11, HIGH);
      digitalWrite(INPUT_12, LOW);
      analogWrite(ACTA_MTR1, CarSpeed);

      digitalWrite(INPUT_13, LOW);
      digitalWrite(INPUT_14, HIGH);
      analogWrite(ACTB_MTR1, CarSpeed);


      digitalWrite(INPUT_21, LOW);
      digitalWrite(INPUT_22, HIGH);
      analogWrite(ACTA_MTR2, CarSpeed/coff_speed);


      digitalWrite(INPUT_23, HIGH);
      digitalWrite(INPUT_24, LOW);
      analogWrite(ACTA_MTR2, CarSpeed/coff_speed);
 
  }

void goBackwardRight(){ 

      digitalWrite(INPUT_11, LOW);
      digitalWrite(INPUT_12, HIGH);
      analogWrite(ACTA_MTR1, CarSpeed/coff_speed);


      digitalWrite(INPUT_13, HIGH);
      digitalWrite(INPUT_14, LOW);
      analogWrite(ACTB_MTR1, CarSpeed/coff_speed);


      digitalWrite(INPUT_21, HIGH);
      digitalWrite(INPUT_22, LOW);
      analogWrite(ACTA_MTR2, CarSpeed);


      digitalWrite(INPUT_23, LOW);
      digitalWrite(INPUT_24, HIGH);
      analogWrite(ACTA_MTR2, CarSpeed);

  }

void goBackwardLeft(){ 

      digitalWrite(INPUT_11, LOW);
      digitalWrite(INPUT_12, HIGH);
      analogWrite(ACTA_MTR1, CarSpeed);


      digitalWrite(INPUT_13, HIGH);
      digitalWrite(INPUT_14, LOW);
      analogWrite(ACTB_MTR1, CarSpeed);


      digitalWrite(INPUT_21, HIGH);
      digitalWrite(INPUT_22, LOW);
      analogWrite(ACTA_MTR2, CarSpeed/coff_speed);


      digitalWrite(INPUT_23, LOW);
      digitalWrite(INPUT_24, HIGH);
      analogWrite(ACTA_MTR2, CarSpeed/coff_speed);

  }

void stopRobot(){  

      digitalWrite(INPUT_11, LOW);
      digitalWrite(INPUT_12, LOW);
      analogWrite(ACTA_MTR1, CarSpeed);


      digitalWrite(INPUT_13, LOW);
      digitalWrite(INPUT_14, LOW);
      analogWrite(ACTB_MTR1, CarSpeed);

  
      digitalWrite(INPUT_21, LOW);
      digitalWrite(INPUT_22, LOW);
      analogWrite(ACTA_MTR2, CarSpeed);

      
      digitalWrite(INPUT_23, LOW);
      digitalWrite(INPUT_24, LOW);
      analogWrite(ACTA_MTR2, CarSpeed);
  
  }
  
void loop(){
  
if (Serial.available() > 0) {
  Instruction = Serial.read();
  stopRobot();     


switch (Instruction) {
case 'W':goForward()		;break;
case 'S':goBackward()		;break;
case 'A':GoLeftSide()		;break;
case 'D':GoRightSide()		;break;
case 'E':goForwardRight()	;break;
case 'Q':goForwardLeft()	;break;
case 'C':goBackwardRight()	;break;
case 'Z':goBackwardLeft()	;break;
case '0':CarSpeed = 102		;break;
case '1':CarSpeed = 117		;break;
case '2':CarSpeed = 132		;break;
case '3':CarSpeed = 147		;break;
case '4':CarSpeed = 162		;break;
case '5':CarSpeed = 177		;break;
case '6':CarSpeed = 192		;break;
case '7':CarSpeed = 207		;break;
case '8':CarSpeed = 222		;break;
case '9':CarSpeed = 237		;break;
case 'q':CarSpeed = 255		;break;

}
}
}
