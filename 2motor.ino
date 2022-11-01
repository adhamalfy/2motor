#define motor1Pin1  13
#define motor1Pin2  12
#define motor2Pin1  8
#define motor2Pin2  4



int dir;
int c=0;        
int dirStop=0;

void setup() {
    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
    pinMode(motor2Pin1, OUTPUT);
    pinMode(motor2Pin2, OUTPUT);
    Serial.begin(9600);
    }

 

void loop() {


    if(Serial.available() > 0){     

      dir = Serial.read();   

      c=0;

    }   


    if (dir == 'F') {

        digitalWrite(motor1Pin1, HIGH);

        digitalWrite(motor1Pin2, LOW); 

        digitalWrite(motor2Pin1, HIGH);

        digitalWrite(motor2Pin2, LOW);

        if(c == 0){

          Serial.println("Forward");

          c=1;

        }

     }   



    if (dir == 'R') {

        digitalWrite(motor1Pin1, HIGH);

        digitalWrite(motor1Pin2, LOW); 

        digitalWrite(motor2Pin1, LOW);

        digitalWrite(motor2Pin2, LOW);

        if(c == 0){

          Serial.println("RIGHT");

          c=1;

        }

    }


 


    if (dir == 'L') {

        digitalWrite(motor1Pin1, LOW);

        digitalWrite(motor1Pin2, LOW); 

        digitalWrite(motor2Pin1, HIGH);

        digitalWrite(motor2Pin2, LOW);

        if(c == 0){

          Serial.println("LEFT");

          c=1;

        }

    }

   



    else if (dir == 'S' || dirStop == 1) {

        digitalWrite(motor1Pin1, LOW); 

        digitalWrite(motor1Pin2, LOW); 

        digitalWrite(motor2Pin1, LOW);

        digitalWrite(motor2Pin2, LOW);

        if(c == 0){

          Serial.println("STOP");

          c=1;

        }

        dirStop=0;

    }

   

    else if (dir == 'B') {

        digitalWrite(motor1Pin1, LOW); 

        digitalWrite(motor1Pin2, HIGH);

        digitalWrite(motor2Pin1, LOW);

        digitalWrite(motor2Pin2, HIGH);

        if(c== 0){

          Serial.println("BACK");

          c=1;

        }

    }

    

}
