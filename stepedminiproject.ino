#include <Stepper.h>
#define STEPS 2048
Stepper stepper(STEPS,19,18,5,17);

char input1;
int curpos;
int pos;

void gotopos(int curpos,int pos){
  int posmove,stepmove ;
  posmove = curpos - pos;
  Serial.println(posmove);
  if(posmove<=0){
    posmove = 16 + posmove;
  }
  stepmove = posmove * 128 ;
  stepper.step(stepmove);
}

void setup() {
  Serial.begin(9600);
  pos = 1;
  curpos = pos;
  stepper.setSpeed(8);
}

void loop() {
  while(Serial.available() == 0){}
    input1 = Serial.read();
    //Serial.println(input1);
  
  switch(input1){
    case '4':
      //pos1
      pos = 1;
      Serial.println("1");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case '5':
      //pos2
      pos = 2;
      Serial.println("2");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case '6':
      //pos3
      pos = 3;
      Serial.println("3");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case '7':
      //pos4
      pos = 4;
      Serial.println("4");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'r':
      //pos5
      pos = 5;
      Serial.println("5");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 't':
      //pos6
      pos = 6;
      Serial.println("6");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'y':
      //pos7
      pos = 7;
      Serial.println("7");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'u':
      //pos8
      pos = 8;
      Serial.println("8");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'f':
      //pos9
      pos = 9;
      Serial.println("9");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'g':
      //pos10
      pos = 10;
      Serial.println("10");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'h':
      //pos11
      pos = 11;
      Serial.println("11");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'j':
      //pos12
      pos = 12;
      Serial.println("12");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'v':
      //pos13
      pos = 13;
      Serial.println("13");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'b':
      //pos14
      pos = 14;
      Serial.println("14");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'n':
      //pos15
      pos = 15;
      Serial.println("15");
      gotopos(pos,curpos);
      curpos = pos;
      break;
    case 'm':
      //pos16
      pos = 16;
      Serial.println("16");
      gotopos(pos,curpos);
      curpos = pos;
      break;
  }
}
