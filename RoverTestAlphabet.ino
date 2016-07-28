#include <Alpha.h>
#include <Wire.h>
#include <Adafruit_MotorShield.h>

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
// Or, create it with a different I2C address (say for stacking)
 Adafruit_MotorShield AFMS2 = Adafruit_MotorShield(0x61); 

// Select which 'port' M1, M2, M3 or M4. In this case, M1
Adafruit_DCMotor *pixel1 = AFMS.getMotor(1);
Adafruit_DCMotor *pixel2 = AFMS.getMotor(2);
Adafruit_DCMotor *pixel3 = AFMS.getMotor(3);
Adafruit_DCMotor *pixel4 = AFMS.getMotor(4);
Adafruit_DCMotor *pixel5 = AFMS2.getMotor(1);

int character;
int pattern;
Alpha Alpha;
int pixel;

byte letters[26][5][5]={
      {
    {1,1,1,1,0},      //Letter A
        {0,0,1,0,1},    
          {0,0,1,0,1},    
            {0,0,1,0,1},    
            {1,1,1,1,0}
    },
    {   
    {1,1,1,1,1},      //Letter B  
    {1,0,1,0,1},    
    {1,0,1,0,1},    
    {1,0,1,0,1},    
    {0,1,0,1,0}     
          },
    {
    {0,1,1,1,0},      //Letter C
    {1,0,0,0,1},    
    {1,0,0,0,1},    
    {1,0,0,0,1},    
    {1,0,0,0,1}     
    },
    {
    {1,1,1,1,1},      //Letter D
    {1,0,0,0,1},  
    {1,0,0,0,1},  
    {1,0,0,0,1},  
    {1,1,1,1,1}   
    },  
    {
    {1,1,1,1,1},      //Letter E
    {1,0,1,0,1},  
    {1,0,1,0,1},  
    {1,0,1,0,1},  
    {1,0,1,0,1}   
          },
    {
    {1,1,1,1,1},    //Letter F 
    {0,0,1,0,1},  
    {0,0,1,0,1},  
    {0,0,0,0,1},  
    {0,0,0,0,1}   
    },
    {
    {0,1,1,1,0},      //Letter G
    {1,0,0,0,1},  
    {1,0,1,0,1},  
    {1,0,1,0,1},  
    {1,1,1,0,1}   
    },
    {
    {1,1,1,1,1},      //Letter H
    {0,0,1,0,0},  
    {0,0,1,0,0},  
    {0,0,1,0,0},  
    {1,1,1,1,1}
    },   
    {
    {1,1,1,1,1},      //Letter I
    {0,0,0,0,0},  
    {0,0,0,0,0},  
    {0,0,0,0,0},  
    {0,0,0,0,0}   
    },
    {
    {0,1,0,0,0},      //Letter J
    {1,0,0,0,0},  
    {1,0,0,0,1},  
    {1,0,0,0,1},  
    {0,1,1,1,1}   
    },
    {
    {1,1,1,1,1},      //Letter K
    {0,0,1,0,0},  
    {0,0,1,1,0},  
    {0,0,1,0,0},  
    {1,1,0,0,0}   
          },
    {
    {1,1,1,1,1},    //Letter L
    {1,0,0,0,0},  
    {1,0,0,0,0},  
    {1,0,0,0,0},  
    {1,0,0,0,0}   
    },
    {
    {1,1,1,1,1},    //Letter M
    {0,0,0,1,0},  
    {0,0,1,0,0},  
    {0,0,0,1,0},  
    {1,1,1,1,1}   
    },
    {
    {1,1,1,1,1},    //Letter N
    {0,0,0,0,1},  
          {0,1,1,1,0},  
    {1,0,0,0,0},  
    {1,1,1,1,1}   
          },
    {
    {0,1,1,1,0},    //Letter O
    {1,0,0,0,1},  
    {1,0,0,0,1},  
    {1,0,0,0,1},  
    {0,1,1,1,0}   
          },
    {
    {1,1,1,1,1},    //Letter P
    {0,0,1,0,1},  
    {0,0,1,0,1},  
    {0,0,1,0,1},  
    {0,0,0,1,0}   
    },
    {
    {0,1,1,1,0},    //Letter Q
    {1,0,0,0,1},  
    {1,0,0,0,1},  
    {1,1,1,1,0},  
    {1,0,0,0,0}   
    },
    {
    {1,1,1,1,1},    //Letter R 
    {0,0,1,0,1},  
    {0,0,1,0,1},  
    {0,1,1,0,1},  
    {1,0,0,1,0}   
    },
    {
    {1,0,0,1,0},    //Letter S
    {1,0,1,0,1},  
    {1,0,1,0,1},  
    {1,0,1,0,1},  
    {0,1,0,0,1}   
    },
    {
    {0,0,0,0,1},    //Letter T
    {0,0,0,0,1},  
    {1,1,1,1,1},  
    {0,0,0,0,1},  
    {0,0,0,0,1}   
    },
    {
    {0,1,1,1,1},    //Letter U
    {1,0,0,0,0},  
    {1,0,0,0,0},  
    {1,0,0,0,0},  
    {0,1,1,1,1}   
    },      
    {
    {0,1,1,1,1},    //Letter V
    {1,0,0,0,0},  
    {1,0,0,0,0},  
    {1,0,0,0,0},  
    {0,1,1,1,1}   
    },
    {
    {1,1,1,1,1},    //Letter W
    {0,1,0,0,0},  
    {0,0,1,0,0},  
    {0,1,0,0,0},  
    {1,1,1,1,1}   
    },
    {
    {1,0,0,0,1},    //Letter X
    {0,1,0,1,0},  
    {0,0,1,0,0},  
    {0,1,0,1,0},  
    {1,0,0,0,1}   
          },
    {
    {0,0,0,1,1},    //Letter Y
    {0,0,1,0,0},  
    {1,1,1,0,0},  
    {0,0,1,0,0},  
    {0,0,0,1,1}   
    },      
    {
    {1,1,0,0,1},    //Letter Z
    {1,0,1,0,1},  
    {1,0,1,0,1},  
    {1,0,1,0,1},  
    {1,0,0,1,1}   
    }  
    };


void setup() {
Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0){
    character = Serial.read();
    pattern = Alpha.letterPattern(character); 
  for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
     pixel = letters[pattern][x][y];
     if (y<4) Serial.print(pixel);    
     if (y==4)Serial.println(pixel); 
    }
  }   
  } 
}




