/*
 * Anyview-universal braille sensor
 * version 1 (control of actuators using arduino)
 * components - 6 relays, bench power supply, arduino, actuators with the arrangment.
 * code and project by V.Vamsi krishna
 * For any doubts please be free to contact varigonda.vamsi@gmail.com
 */

int pin1 = 1; //as per the braille setup, check the repo for more info
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z; //all the alphabets


void setup() {
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
}

void loop() {

  Serial.println("let's get started");
  char var = Serial.read(); //input the required character to be displayed on braille 
  Serial.println(var);


  switch (var) {      //simple switch case program for each letter
    case a:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, LOW);
      pinMode(pin4, LOW);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500); // it's better to have maximum delay of 500 or lower to prevent the coils from burning
      break;
    case b:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, LOW);
      pinMode(pin4, LOW);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case c:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, LOW);
      pinMode(pin4, HIGH);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case d:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, LOW);
      pinMode(pin4, HIGH);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case e:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, LOW);
      pinMode(pin4, LOW);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case f:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, LOW);
      pinMode(pin4, HIGH);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case g:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, LOW);
      pinMode(pin4, HIGH);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case h:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, LOW);
      pinMode(pin4, LOW);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case i:
      pinMode(pin1, LOW);
      pinMode(pin2, HIGH);
      pinMode(pin3, LOW);
      pinMode(pin4, HIGH);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case j:
      pinMode(pin1, LOW);
      pinMode(pin2, HIGH);
      pinMode(pin3, LOW);
      pinMode(pin4, HIGH);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case k:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, HIGH);
      pinMode(pin4, LOW);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case l:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, HIGH);
      pinMode(pin4, LOW);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case m:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, HIGH);
      pinMode(pin4, LOW);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;
    case n:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, HIGH);
      pinMode(pin4, HIGH);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;

    case o:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, HIGH);
      pinMode(pin4, LOW);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;

    case p:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, HIGH);
      pinMode(pin4, HIGH);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500);
      break;

    case q:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, HIGH);
      pinMode(pin4, HIGH);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;

    case r:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, HIGH);
      pinMode(pin4, LOW);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;

    case s:
      pinMode(pin1, LOW);
      pinMode(pin2, HIGH);
      pinMode(pin3, HIGH);
      pinMode(pin4, HIGH);
      pinMode(pin5, LOW);
      pinMode(pin6, LOW);
      delay(500);
      break;

    case t:
      pinMode(pin1, LOW);
      pinMode(pin2, HIGH);
      pinMode(pin3, HIGH);
      pinMode(pin4, HIGH);
      pinMode(pin5, HIGH);
      pinMode(pin6, LOW);
      delay(500);
      break;

    case u:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, HIGH);
      pinMode(pin4, LOW);
      pinMode(pin5, LOW);
      pinMode(pin6, HIGH);
      delay(500);
      break;

    case v:
      pinMode(pin1, HIGH);
      pinMode(pin2, HIGH);
      pinMode(pin3, HIGH);
      pinMode(pin4, LOW);
      pinMode(pin5, LOW);
      pinMode(pin6, HIGH);
      delay(500);
      break;

    case w:
      pinMode(pin1, LOW);
      pinMode(pin2, HIGH);
      pinMode(pin3, LOW);
      pinMode(pin4, HIGH);
      pinMode(pin5, HIGH);
      pinMode(pin6, HIGH);
      delay(500);
      break;

    case x:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, HIGH);
      pinMode(pin4, HIGH);
      pinMode(pin5, LOW);
      pinMode(pin6, HIGH);
      delay(500);
      break;

    case y:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, HIGH);
      pinMode(pin4, HIGH);
      pinMode(pin5, HIGH);
      pinMode(pin6, HIGH);
      delay(500);
      break;

    case z:
      pinMode(pin1, HIGH);
      pinMode(pin2, LOW);
      pinMode(pin3, HIGH);
      pinMode(pin4, LOW);
      pinMode(pin5, HIGH);
      pinMode(pin6, HIGH);
      delay(500);
      break;
    default:
      // statements
      break;
  }
