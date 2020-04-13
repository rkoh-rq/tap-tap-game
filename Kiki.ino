//Kiki's Delivery Service - A Town with An Ocean View
//for the tap tap game
//by Rachel ^_^

//set game settings here
#define SPEED 40 //Recommended SPEED for this song is 20 (the higher the speed, the faster the song)

#define melodylength 1000
#define basslength 1000

//chose between hard mode and leisure mode (EXACTLY ONE MUST BE TRUE)
#define leisuremode true // if leisure mode is enabled, you will unlimited lives and your score will be kept count
#define hardmode false //if lives mode is enabled, you will only have UP TO X lives (aka notes that you can miss) before game is over
#define livesCount 99 //set your number of lives (maximum is 99)

//if not keeping track of bass notes, set checkbass to false (and vice versa)
#define checkbass false

//here are the frequencies of all the notes
#define B0  31
#define C1  33
#define CS1 35
#define D1  37
#define DS1 39
#define E1  41
#define F1  44
#define FS1 46
#define G1  49
#define GS1 52
#define A1  55
#define AS1 58
#define B1  62
#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define AS2 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
#define C6  1047
#define CS6 1109
#define D6  1175
#define DS6 1245
#define E6  1319
#define F6  1397
#define FS6 1480
#define G6  1568
#define GS6 1661
#define A6  1760
#define AS6 1865
#define B6  1976
#define C7  2093
#define CS7 2217
#define D7  2349
#define DS7 2489
#define E7  2637
#define F7  2794
#define FS7 2960
#define G7  3136
#define GS7 3322
#define A7  3520
#define AS7 3729
#define B7  3951
#define C8  4186
#define CS8 4435
#define D8  4699
#define DS8 4978

//declare pins
#define button0 5
#define button1 4
#define button2 3
#define button3 2 //melody

#define buttonA 7
#define buttonB 6 //bass

#define h 1

#define buzzer 11

//separate the parts such that each line consists of up to 4 different melody notes
//it is recommended to keep have a consistent number of notes to make things easier

int oceanIntro[]={
  E4,  B4,  A4,  G4,
  G4,  FS4, E4,  FS4,
  A4,  G4,  FS4, G4,
  D5,  h,   0,   C5,
  B4,  h,   0,   A4,
  A4,  h,   0,   G4, 
  A4,  h,   h,    0, 
  B4,  h,   h,    0, 
};

int oceanIntroBass[]={
  A2, A2, B2, C3, CS3, CS3, D3, DS3,
};

int oceanVerse1[]={
  0,   0,   0,   B4,
  G5,  h,   0,   B4, 
  FS5, h,   0,   B4, 
  E5,  0,   D5,  C5,
  D5,  h,   0,   B4,
  A4,  C5,  E5,  G5,
  FS5, D5,  B4,  A4,
  B4,  h,   0,   DS3, //(DS3)
};

int oceanVerse1Bass[]={
  B4,  E3,  D3,  C3,  B2,  A2,  D3,  B2,  
};

int oceanVerse2[]={
  0,   0,   0,   B4,
  G5,  h,   0,   B4, 
  FS5, h,   0,   B4, 
  E5,  0,   D5,  C5,
  D5,  h,   0,   B4,
  A4,  C5,  E5,  G5,
  A5,  B5,  FS5, D5,
  E5,  h,   0,   B4, //(E3, B4)
};

int oceanVerse2Bass[]={
  DS3, E3,  D3,  C3,  B2,  A2,  B2,  E3,
};

int oceanVerse3[]={
  0,   0,   E4,  FS4, 
  G4,  G4,  G4,  G4, 
  G4,  FS4, E4,  FS4,
  D4,  h,   0,   0,
  0,   0,   0,   C4,
  E4,  E4,  E4,  E4,  
  E4,  D4,  C4,  D4,  
  B3,  h,   0,   0, 
};

int oceanVerse3Bass[]={
  E2, 0, 
  C3, E3, C3, E3,
  B2, D3, B2, D3,
  A2, C3, A2, C3,
  G2, B2,
};

int oceanVerse4[]={
  0,   0,   0,   B3,  
  GS3, A3,  C4,  E4,  
  D4,  C4,  0,   C4,
  AS3, B3,  D4,  FS4,
  A4,  G4,  FS4, G4,
  B4,  h,   0,   A4,
  E4,  h,   0,   D4,
  B3,  h,   0,   A4,
  E3,  h,   0,   FS3,
  0,   0,   0,   0,
};

int oceanVerse4Bass[]={
  G2, A2, D3, B2, E3, CS3, A2, D3, D3, D3,
};

int oceanBridge[]={
  E5,  DS5, E5,  B4, 
  C5,  h,   0,   0,
  D5,  CS5, D5,  A4, 
  B4,  h,   0,   0,
  C5,  B4,  C5,  G4, 
  A4,  h,   0,   0,
  B4,  AS4, B4,  FS4, 
  G4,  h,   0,   0,
};

int oceanBridgeBass[]={
  E3, A2, D3, G2, C3, A2, B2, C2,
  E3, A2, D3, G2, C3, A2, B2, C2,
};

int oceanOutro1[]={
  D5, FS5, A5, 
  B5, A5, G5, 
  A5, G5, FS5,
  G5, FS5, E5,
  D5, G5, B5,
  C6, B5, A5,
  B5, A5, G5,
  A5, h, 0,
  D5, FS5, A5,
  D6, h, D6, 
  D6, CS6, B5,
  A5, h, 0,
  G5, h, G5,
  F5, E5, D5,
  D5, h, 0,
};

int oceanOutro1Bass[]={
  D2, A2,
};

int oceanOutro2[]={
  
};

int oceanOutro2Bass[]={
  
};

int mNotes[]={
  0,0,0,0,
};
int bNotes[]={
  0,0,
};

//this part is for the Led Matrix
#include "LedControl.h" // We have to include the library
LedControl lc=LedControl(12,9,10,4); //(DIn, CLK, CS, Number of LED matrices)

// declare constant for all used rows in bytes
byte bassDisplay[] = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
  };
byte melodyDisplay[] = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
  };

byte score9_[] = {
    B01110000,
    B01010000,
    B01110000,
    B01000000,
    B01110000,
  };
byte score8_[] = {
    B01110000,
    B01010000,
    B01110000,
    B01010000,
    B01110000,
  };
byte score7_[] = {
    B01110000,
    B01000000,
    B00100000,
    B00100000,
    B00100000,
  };
byte score6_[] = {
    B01110000,
    B00010000,
    B01110000,
    B01010000,
    B01110000,
  };
byte score5_[] = {
    B01110000,
    B00010000,
    B01110000,
    B01000000,
    B01110000,
  };
byte score4_[] = {
    B01010000,
    B01010000,
    B01110000,
    B01000000,
    B01000000,
  };
byte score3_[] = {
    B01110000,
    B01000000,
    B01110000,
    B01000000,
    B01110000,
  };
byte score2_[] = {
    B01110000,
    B01000000,
    B01110000,
    B00010000,
    B01110000,
  };
byte score1_[] = {
    B01000000,
    B01000000,
    B01000000,
    B01000000,
    B01000000,
  };

byte score_9[] = {
    B00000111,
    B00000101,
    B00000111,
    B00000100,
    B00000111,
  };
byte score_8[] = {
    B00000111,
    B00000101,
    B00000111,
    B00000101,
    B00000111,
  };
byte score_7[] = {
    B00000111,
    B00000100,
    B00000010,
    B00000010,
    B00000010,
  };
byte score_6[] = {
    B00000111,
    B00000001,
    B00000111,
    B00000101,
    B00000111,
  };
byte score_5[] = {
    B00000111,
    B00000001,
    B00000111,
    B00000100,
    B00000111,
  };
byte score_4[] = {
    B00000101,
    B00000101,
    B00000111,
    B00000100,
    B00000100,
  };
byte score_3[] = {
    B00000111,
    B00000100,
    B00000111,
    B00000100,
    B00000111,
  };
byte score_2[] = {
    B00000111,
    B00000100,
    B00000111,
    B00000001,
    B00000111,
  };
byte score_1[] = {
    B00000100,
    B00000100,
    B00000100,
    B00000100,
    B00000100,
  };
byte score_0[] = {
    B00000111,
    B00000101,
    B00000101,
    B00000101,
    B00000111,
  };
  
int comingTones[16];
int notespeed;
int bcount;

bool correctPress;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  if (leisuremode*hardmode==1){
    Serial.println("Error: multiple modes selected");
    while(1);
  }
  if (leisuremode+hardmode==0){
    Serial.println("Error: no mode selected");
    while(1);
  }
  
  lc.shutdown(0,false);  // Wake up displays
  lc.shutdown(1,false);
  lc.shutdown(2,false);
  lc.shutdown(3,false);
  lc.setIntensity(0,1);  // Set intensity levels
  lc.setIntensity(1,1);
  lc.setIntensity(2,1);
  lc.setIntensity(3,1);
  lc.clearDisplay(0);  // Clear Displays
  lc.clearDisplay(1);
  lc.clearDisplay(2);
  lc.clearDisplay(3);

  pinMode(button0, INPUT_PULLUP);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
}

void loop() {
  // wait for a button to be pressed
  if (buttonsPressed()==true){
    bcount = 0;
    if (hardmode==true){
      while (gameStart()==true){
      }
      noTone(buzzer);
      gameOver();
    }
    else if (leisuremode==true){
      while (bcount<618){
        gameStart();
      }
      noTone(buzzer);
    }
  }
}


bool buttonsPressed(){
  if (digitalRead(button0)+digitalRead(button1)+digitalRead(button2)+digitalRead(button3)+digitalRead(buttonA)+digitalRead(buttonB)!=6){
    return true;
  }
  else{
    return false;
  }
}

bool gameStart(){
  shiftDisplay();
  generateDisplay();
  updateDisplay();
  setTone();
  if (hardmode == true){
    static uint8_t gameLives=livesCount;
    if (correctPress==false){
      gameLives--;
      updateScore(gameLives);
    }
    if (gameLives==0){
      gameLives=livesCount;
      return false;
    }
    else{
      return true;
    }
  }
  else if (leisuremode == true){
    return true;
  }
}

void updateScore(int gameLives){
  if (gameLives/10==0){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, B00000000);
    }
  }
  else if (gameLives/10==1){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score1_[i]);
    }
  }
  else if (gameLives/10==2){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score2_[i]);
    }
  }  
  else if (gameLives/10==3){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score3_[i]);
    }
  }  
  else if (gameLives/10==4){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score4_[i]);
    }
  }  
  else if (gameLives/10==5){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score5_[i]);
    }
  }  
  else if (gameLives/10==6){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score6_[i]);
    }
  }  
  else if (gameLives/10==7){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score7_[i]);
    }
  }  
  else if (gameLives/10==8){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score8_[i]);
    }
  }  
  else if (gameLives/10==9){
    for (int i = 0; i < 5; i++){
      lc.setRow(2, 7-i, score9_[i]);
    }
  }  
  if (gameLives%10==9){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_9[i]);
    }
  }
  if (gameLives%10==8){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_8[i]);
    }
  }
  if (gameLives%10==7){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_7[i]);
    }
  }
  if (gameLives%10==6){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_6[i]);
    }
  }
  if (gameLives%10==5){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_5[i]);
    }
  }
  if (gameLives%10==4){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_4[i]);
    }
  }
  if (gameLives%10==3){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_3[i]);
    }
  }
  if (gameLives%10==2){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_2[i]);
    }
  }
  if (gameLives%10==1){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_1[i]);
    }
  }
  if (gameLives%10==0){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_0[i]);
    }
  }
}

void gameOver(){
  lc.clearDisplay(0);  // Clear Displays
  lc.clearDisplay(1);
  lc.clearDisplay(2);
  lc.clearDisplay(3);
  for (int i = 0; i < 7; i++){
    bassDisplay[i]=B00000000;
  }
  for (int i = 0; i < 7; i++){
    melodyDisplay[i]=B00000000;
  }
  for (int i = 0; i < 7; i++){
    comingTones[i]=0;
  }
  for (int k = 0; k < 4; k++){
    for (int i = 0; i < 5; i++){
      lc.setRow(3, 7-i, score_0[i]);
    }
    delay(100);
    lc.clearDisplay(3);
    delay(100);
  }
}

/****************************************************/
void playTone(int noteLength, int note, int correctButton){
  noTone(buzzer);
  delay(noteLength/12);
  tone(buzzer, note);
  correctPress=false;
  for (int i=0; i<noteLength; i++){
    if (correctButton==0){
      correctPress=true;
    }
    else if (bassDisplay[0]!=B00000000){
        if (checkbass == false){
          correctPress=true;
        }
      }
    else if (digitalRead(button0)+digitalRead(button1)+digitalRead(button2)+digitalRead(button3)+digitalRead(buttonA)+digitalRead(buttonB)==5){
      if (digitalRead(correctButton)==LOW){
        correctPress=true;
      }
    }
    delay(1);
  }
}

void setTone(){
  if (comingTones[0]==h){
    delay(melodylength/SPEED);
    correctPress=true;
  }
  else if (comingTones[0]==0){
    correctPress=true;
    delay(melodylength/SPEED);
    if (comingTones[1]==0){
      noTone(buzzer);
    }
  }
  else{
    if (melodyDisplay[0]!=B00000000){
      if (melodyDisplay[0]==B11000000){
        playTone(melodylength/SPEED,comingTones[0],button3);
      }
      if (melodyDisplay[0]==B00110000){
        playTone(melodylength/SPEED,comingTones[0],button2);
      }
      if (melodyDisplay[0]==B00001100){
        playTone(melodylength/SPEED,comingTones[0],button1);
      }
      if (melodyDisplay[0]==B00000011){
        playTone(melodylength/SPEED,comingTones[0],button0);
      }
    }
    else if (bassDisplay[0]!=B00000000){
      if (bassDisplay[0]==B00110000){
        playTone(basslength/SPEED,comingTones[0],buttonB);
      }
      if (bassDisplay[0]==B00001100){
        playTone(basslength/SPEED,comingTones[0],buttonA);
      }
    }
  }
}
/****************************************************/
void generateDisplay(){
  int cNote;
  int forcalc = (bcount-bcount%8)/2;
  int seg[] ={
    64, 128, 192, 256, 336, 400, 464, 528, 618,
  };
  /*
 int seg[] = {
   sizeof(oceanIntro)/2, sizeof(oceanVerse1)/2, sizeof(oceanVerse2)/2, sizeof(oceanVerse3)/2, 
   sizeof(oceanVerse4)/2, sizeof(oceanVerse1)/2, sizeof(oceanBridge)/2, sizeof(oceanOutro1)/2, 
 }
  */
  bcount = bcount%(618+8);
  //melody
  if (bcount%2==1){
    if (bcount<seg[0]){
      cNote = oceanIntro[bcount/2];
      mNotesBubble(oceanIntro[forcalc],oceanIntro[forcalc+1],oceanIntro[forcalc+2],oceanIntro[forcalc+3]);
    }
    else if (bcount<seg[1]){
      cNote = oceanVerse1[(bcount-seg[0])/2];
      forcalc=forcalc-seg[0]/2;
      mNotesBubble(oceanVerse1[forcalc],oceanVerse1[forcalc+1],oceanVerse1[forcalc+2],oceanVerse1[forcalc+3]);
    }
    else if (bcount<seg[2]){
      cNote = oceanVerse2[(bcount-seg[1])/2];
      forcalc=forcalc-seg[1]/2;
      mNotesBubble(oceanVerse2[forcalc],oceanVerse2[forcalc+1],oceanVerse2[forcalc+2],oceanVerse2[forcalc+3]);
    }
    else if (bcount<seg[3]){
      cNote = oceanVerse3[(bcount-seg[2])/2];
      forcalc=forcalc-seg[2]/2;
      mNotesBubble(oceanVerse3[forcalc],oceanVerse3[forcalc+1],oceanVerse3[forcalc+2],oceanVerse3[forcalc+3]);
    }
    else if (bcount<seg[4]){
      cNote = oceanVerse4[(bcount-seg[3])/2];
      forcalc=forcalc-seg[3]/2;
      mNotesBubble(oceanVerse4[forcalc],oceanVerse4[forcalc+1],oceanVerse4[forcalc+2],oceanVerse4[forcalc+3]);
    }
    else if (bcount<seg[5]){
      cNote = oceanVerse1[(bcount-seg[4])/2];
      forcalc=forcalc-seg[4]/2;
      mNotesBubble(oceanVerse1[forcalc],oceanVerse1[forcalc+1],oceanVerse1[forcalc+2],oceanVerse1[forcalc+3]);
    }
    else if (bcount<seg[6]){
      cNote = oceanVerse2[(bcount-seg[5])/2];
      forcalc=forcalc-seg[5]/2;
      mNotesBubble(oceanVerse2[forcalc],oceanVerse2[forcalc+1],oceanVerse2[forcalc+2],oceanVerse2[forcalc+3]);
    }
    else if (bcount<seg[7]){
      cNote = oceanBridge[(bcount-seg[6])/2];
      forcalc=forcalc-seg[6]/2;
      mNotesBubble(oceanBridge[forcalc],oceanBridge[forcalc+1],oceanBridge[forcalc+2],oceanBridge[forcalc+3]);
    }
    else if (bcount<seg[8]){
      cNote = oceanOutro1[(bcount-seg[7])/2];
      forcalc=forcalc-seg[7]/2;
      mNotesBubble(oceanOutro1[forcalc],oceanOutro1[forcalc+1],oceanOutro1[forcalc+2],oceanOutro1[forcalc+3]);
    }
  }
  //bass
  else if (bcount%8==0){
    if (bcount<seg[0]){
      cNote = oceanIntroBass[bcount/8];
      bNotesCompare(oceanIntroBass[bcount/8], oceanIntroBass[(bcount/8)-1]);
    }
    else if (bcount<seg[1]){
      cNote = oceanVerse1Bass[(bcount-seg[0])/8];
      bNotesCompare(oceanVerse1Bass[(bcount-seg[0])/8], oceanVerse1Bass[((bcount-seg[0])/8)-1]);
    }
    else if (bcount<seg[2]){
      cNote = oceanVerse2Bass[(bcount-seg[1])/8];
      bNotesCompare(oceanVerse2Bass[(bcount-seg[1])/8], oceanVerse2Bass[((bcount-seg[1])/8)-1]);
    }
    else if (bcount<seg[3]){
      cNote = oceanVerse3Bass[(bcount-seg[2])/4];
      bNotesCompare(oceanVerse3Bass[(bcount-seg[2])/4], oceanVerse3Bass[((bcount-seg[2])/4)-1]);
    }
    else if (bcount<seg[4]){
      cNote = oceanVerse4Bass[(bcount-seg[3])/8];
      bNotesCompare(oceanVerse4Bass[(bcount-seg[3])/8], oceanVerse4Bass[((bcount-seg[3])/8)-1]);
    }    
    else if (bcount<seg[5]){
      cNote = oceanVerse1Bass[(bcount-seg[4])/8];
      bNotesCompare(oceanVerse1Bass[(bcount-seg[4])/8], oceanVerse1Bass[((bcount-seg[4])/8)-1]);
    }
    else if (bcount<seg[6]){
      cNote = oceanVerse2Bass[(bcount-seg[5])/8];
      bNotesCompare(oceanVerse2Bass[(bcount-seg[5])/8], oceanVerse2Bass[((bcount-seg[5])/8)-1]);
    }
    else if (bcount<seg[7]){
      cNote = oceanBridgeBass[(bcount-seg[6])/8];
      bNotesCompare(oceanBridgeBass[(bcount-seg[6])/8], oceanBridgeBass[((bcount-seg[6])/8)-1]);
    }
  }

  else if (bcount%4==0 && bcount>seg[2] && bcount<seg[3]){
    cNote = oceanVerse3Bass[(bcount-seg[2])/4];
    bNotesCompare(oceanVerse3Bass[(bcount-seg[2])/4], oceanVerse3Bass[((bcount-seg[2])/4)-1]);
  }
  else if (bcount%6==0 && bcount>seg[7] && bcount<seg[8]){
    cNote = oceanOutro1Bass[((bcount-seg[7])/6)%2];
    bNotesCompare(oceanOutro1Bass[((bcount-seg[7])/6)%2], oceanOutro1Bass[((bcount-seg[7])/6)%2-1]);
  }
  
  //generate LED display
  if (cNote == 0){
    melodyDisplay[7] = B00000000;
    bassDisplay[7] = B00000000;
  }
  else if (cNote == h){
    melodyDisplay[7] = B00000000;
    bassDisplay[7] = B00000000;  
  }
  else if (cNote == mNotes[0]){
    melodyDisplay[7] = B00000011;
    bassDisplay[7] = B00000000;
  }
  else if (cNote == mNotes[1]){
    melodyDisplay[7] = B00001100;
    bassDisplay[7] = B00000000;
  }
  else if (cNote == mNotes[2]){
    melodyDisplay[7] = B00110000;
    bassDisplay[7] = B00000000;
  }
  else if (cNote == mNotes[3]){
    melodyDisplay[7] = B11000000;
    bassDisplay[7] = B00000000;
  }
  else if (cNote == bNotes[0]){
    melodyDisplay[7] = B00000000;
    bassDisplay[7] = B00001100;
  }
  else if (cNote == bNotes[1]){
    melodyDisplay[7] = B00000000;
    bassDisplay[7] = B00110000;
  }
  else {          //troubleshooting purposes
    Serial.println("ERROR");
    Serial.print("cNote = ");
    Serial.println(cNote);
    Serial.print("bcount = ");
    Serial.println(bcount);

    Serial.print("bNotes = ");
    Serial.print(bNotes[0]);
    Serial.print("    ");
    Serial.println(bNotes[1]);

    Serial.print("mNotes = ");
    Serial.print(mNotes[0]);
    Serial.print("    ");
    Serial.print(mNotes[1]);
    Serial.print("    ");
    Serial.print(mNotes[2]);
    Serial.print("    ");
    Serial.println(mNotes[3]);

    noTone(buzzer);
    delay(1000000000);
  }
    bcount++;
    comingTones[7]=cNote;
}
/****************************************************/
void shiftDisplay(){
  for (int i = 0; i < 7; i++){
    bassDisplay[i]=bassDisplay[i+1];
  }
  for (int i = 0; i < 7; i++){
    melodyDisplay[i]=melodyDisplay[i+1];
  }
  for (int i = 0; i < 7; i++){
    comingTones[i]=comingTones[i+1];
  }
}
/****************************************************/
void updateDisplay(){
  //bass
  for (int i = 0; i < 8; i++){
    lc.setRow(0, i, bassDisplay[i]);
  }
  //melody
  for (int i = 0; i < 8; i++){
    lc.setRow(1, i, melodyDisplay[i]);
  }
  delay(50);
}
/****************************************************/
void mNotesBubble(int sort1,int sort2,int sort3,int sort4){
  int a[]={sort1,sort2,sort3,sort4};
  for (int i = 1; i < 4; i++){
    int j = a[i];
    int k;
    for (k = i - 1; (k>=0) && (j<a[k]); k--){
      a[k+1]=a[k];
    }
    a[k+1]=j;
  }
  mNotes[0] = a[0];
  mNotes[1] = a[1];
  mNotes[2] = a[2];
  mNotes[3] = a[3];
}

void bNotesCompare(int newB, int prevB){
  if (newB>prevB){
    bNotes[1]=newB;
  }
  else if (newB<prevB){
    bNotes[0]=newB;
  }
}

