#include "GLOBAL.h"

void draw_vertical(int, int, int, int);
void draw_horizontal(int, int, int, int);
void draw_diagonal(int, int, int, int, int);

// The setXPin function set up 4 pins for 4-bit X coordinate
void setup() {
  pinMode(22, OUTPUT); // LSB
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT); // MSB
  pinMode(26, OUTPUT); // LSB
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT); // LSB
  Serial.begin(19200);
}

char letter;
static char name[256] = {};

unsigned index = 0;
unsigned index2 = 0;


void loop() {
  //spellName();
  //memset(name, "/0", 256);
  //letter = "/0";
  if(Serial.available() > 0)
  {
    Serial.flush();
    //memset(name, "/0", 256);
    index=0;
    //Serial.flush();
    while(Serial.available())
    {
      name[index++] = Serial.read();
      //Serial.print(name[index]);
    }
  }
  //Serial.print(index);
  for(unsigned i = 0; i < count * 2.5; i++)
  {
    switch(name[index2])
    {
      case 'A':
      case 'a':
        draw(A_x, A_y, A_direction, A_size);
        break;
      case 'B':
      case 'b':
        draw(B_x, B_y, B_direction, B_size);
        break;
      case 'C':
      case 'c':
        draw(C_x, C_y, C_direction, C_size);
        break;
      case 'D':
      case 'd':
        draw(D_x, D_y, D_direction, D_size);
        break;
      case 'E':
      case 'e':
        draw(E_x, E_y, E_direction, E_size);
        break;
      case 'F':
      case 'f':
        draw(F_x, F_y, F_direction, F_size);
        break;
      case 'G':
      case 'g':
        draw(G_x, G_y, G_direction, G_size);
        break;
      case 'H':
      case 'h':
        draw(H_x, H_y, H_direction, H_size);
        break;
      case 'I':
      case 'i':
        draw(I_x, I_y, I_direction, I_size);
        break;
      case 'J':
      case 'j':
        draw(J_x, I_y, I_direction, I_size);
        break;
      case 'K':
      case 'k':
        draw(K_x, K_y, K_direction, K_size);
        break;
      case 'L':
      case 'l':
        draw(L_x, L_y, L_direction, L_size);
        break;
      case 'M':
      case 'm':
        draw(M_x, M_y, M_direction, M_size);
        break;
      case 'N':
      case 'n':
        draw(N_x, N_y, N_direction, N_size);
        break; 
      case 'O':
      case 'o':
        draw(O_x, O_y, O_direction, O_size);
        break; 
      case 'P':
      case 'p':
        draw(P_x, P_y, P_direction, P_size);
        break;
      case 'Q':
      case 'q':
        draw(Q_x, Q_y, Q_direction, Q_size);
        break; 
      case 'R':
      case 'r':
        draw(R_x, R_y, R_direction, R_size);
        break; 
      case 'S':
      case 's':
        draw(S_x, S_y, S_direction, S_size);
        break; 
      case 'T':
      case 't':
        draw(T_x, T_y, T_direction, T_size);
        break; 
      case 'U':
      case 'u':
        draw(U_x, U_y, U_direction, U_size);
        break; 
      case 'V':
      case 'v':
        draw(V_x, V_y, V_direction, V_size);
        break; 
      case 'W':
      case 'w':
        draw(W_x, W_y, W_direction, W_size);
        break; 
      case 'X':
      case 'x':
        draw(X_x, X_y, X_direction, X_size);
        break; 
      case 'Y':
      case 'y':
        draw(Y_x, Y_y, Y_direction, Y_size);
        break; 
      case 'Z':
      case 'z':
        draw(Z_x, Z_y, Z_direction, Z_size);
        break; 
      default:
        delay(1);
    }
  }
  if(index2<index)
  {
    index2++;
    delay(1);

  }
  else
  {
    index2=0;
    drawPoopAnimation();
    drawHeart();
    //drawWallEAnimation();
  }

}

/*
void spellName(){
  for(int i = 0; i < name_size; i++){
    for(int j = 9; j < count; j++){
      switch(name[i]){
        case 1: // A
          draw(A_x, A_y, A_direction, A_size);
          break;
        case 2: // B
          draw(B_x, B_y, B_direction, B_size);
          break;
        case 3: // C
          draw(C_x, C_y, C_direction, C_size);
          break;
        case 4: // D
          draw(D_x, D_y, D_direction, D_size);
          break;
        case 5: // E
          draw(E_x, E_y, E_direction, E_size);
          break;
        case 6: // F
          draw(F_x, F_y, F_direction, F_size);
          break;
        case 7: // G
          draw(G_x, G_y, G_direction, G_size);
          break;
        case 8: // H
          draw(H_x, H_y, H_direction, H_size);
          break;
        case 9: // I
          draw(I_x, I_y, I_direction, I_size);
          break;
        case 10: // J
          draw(J_x, I_y, I_direction, I_size);
          break;
        case 11: // K
          draw(K_x, K_y, K_direction, K_size);
          break;
        case 12: // L
          draw(L_x, L_y, L_direction, L_size);
          break;
        case 13: // M
          draw(M_x, M_y, M_direction, M_size);
          break;
        case 14: // N
          draw(N_x, N_y, N_direction, N_size);
          break; 
        case 15: // O
          draw(O_x, O_y, O_direction, O_size);
          break; 
        case 16: // P
          draw(P_x, P_y, P_direction, P_size);
          break;
        case 17: // Q
          draw(Q_x, Q_y, Q_direction, Q_size);
          break;
        case 18: // R
          draw(R_x, R_y, R_direction, R_size);
          break;
        case 19: // S
          draw(S_x, S_y, S_direction, S_size);
          break;
        case 20: // T
          draw(T_x, T_y, T_direction, T_size);
          break;
        case 21: // U
          draw(U_x, U_y, U_direction, U_size);
          break;
        case 22: // V
          draw(V_x, V_y, V_direction, V_size);
          break;
        case 23: // W
          draw(W_x, W_y, W_direction, W_size);
          break;
        case 24: // X
          draw(X_x, X_y, X_direction, X_size);
          break;
        case 25: // Y
          draw(Y_x, Y_y, Y_direction, Y_size);
          break;
        case 26: // Z
          draw(Z_x, Z_y, Z_direction, Z_size);
          break;
      }                  
    }
  }
}
*/

void drawPoopAnimation(){
  for(int i = 0; i < count * 3; i ++){
    draw(poop1_x, poop1_y, poop1_direction, poop1_size);
  }
  for(int i = 0; i < count * 0.09; i ++){
    draw(poop2_x, poop2_y, poop2_direction, poop2_size);
  }
  for(int i = 0; i < count * 0.09; i ++){
    draw(poop3_x, poop3_y, poop3_direction, poop3_size);
  }
  for(int i = 0; i < count * 0.5; i ++){
    draw(poop4_x, poop4_y, poop4_direction, poop4_size);
  }
  for(int i = 0; i < count * 0.09; i ++){
    draw(poop3_x, poop3_y, poop3_direction, poop3_size);
  }
  for(int i = 0; i < count * 0.09; i ++){
    draw(poop2_x, poop2_y, poop2_direction, poop2_size);
  }
  for(int i = 0; i < count * 1; i ++){
    draw(poop1_x, poop1_y, poop1_direction, poop1_size);
  }
}

void drawWallEAnimation(){
  draw(wall_LE_x, wall_LE_y, wall_LE_direction, wall_LE_size);
  draw(wall_neck_x, wall_neck_y, wall_neck_direction, wall_neck_size);
  draw(wall_RE_x, wall_RE_y, wall_RE_direction, wall_RE_size);
  draw(wall_up_x, wall_up_y, wall_up_direction, wall_up_size);
  draw(wall_RH_x, wall_RH_y, wall_RH_direction, wall_RH_size);
  draw(wall_RL_x, wall_RL_y, wall_RL_direction, wall_RL_size);
  draw(wall_LL_x, wall_LL_y, wall_LL_direction, wall_LL_size);
  draw(wall_LH_x, wall_LH_y, wall_LH_direction, wall_LH_size);
  draw(wall_back_x, wall_back_y, wall_back_direction, wall_back_size);
}

void drawKeysightAnimation(){
    for(int i = 0; i < count * 0.926; i ++){
    draw(K_x, K_y, K_direction, K_size);
  }
  for(int i = 0; i < count * 1.042; i ++){
    draw(E_x, E_y, E_direction, E_size);
  }
  for(int i = 0; i < count * 1.25; i ++){
    draw(Y_x, Y_y, Y_direction, Y_size);
  }
  for(int i = 0; i < count * 1.563; i ++){
    draw(S_x, S_y, S_direction, S_size);
  }
  for(int i = 0; i < count * 2.083; i ++){
    draw(I_x, I_y, I_direction, I_size);
  }
  for(int i = 0; i < count * 1.087; i ++){
    draw(G_x, G_y, G_direction, G_size);
  }
  for(int i = 0; i < count * 0.893; i ++){
    draw(H_x, H_y, H_direction, H_size);
  }
  for(int i = 0; i < count * 3.125; i ++){
    draw(T_x, T_y, T_direction, T_size);
  }

delay(300);

  drawHeart();  
  
delay(300);

  

//delay(300);

  for(int i = 0; i < count; i ++){
    drawKeysight();
  }  
}

void drawHeart(){
  for(int i = 0; i < count; i ++){
    draw(HS_x, HS_y, HS_direction, HS_size);
  } 
  for(int i = 0; i < count; i ++){
    draw(HM_x, HM_y, HM_direction, HM_size);
  } 
  for(int i = 0; i < count; i ++){
    draw(HB_x, HB_y, HB_direction, HB_size);
  }   
  for(int i = 0; i < count; i ++){
    draw(HM_x, HM_y, HM_direction, HM_size);
  } 
  for(int i = 0; i < count; i ++){
    draw(HB_x, HB_y, HB_direction, HB_size);
  }   
  for(int i = 0; i < count; i ++){
    draw(HM_x, HM_y, HM_direction, HM_size);
  } 
  for(int i = 0; i < count *2; i ++){
    draw(HS_x, HS_y, HS_direction, HS_size);
  }   
  for(int i = 0; i < count; i ++){
    draw(HS_x, HS_y, HS_direction, HS_size);
  } 
  for(int i = 0; i < count; i ++){
    draw(HM_x, HM_y, HM_direction, HM_size);
  } 
  for(int i = 0; i < count; i ++){
    draw(HB_x, HB_y, HB_direction, HB_size);
  }   
  for(int i = 0; i < count; i ++){
    draw(HM_x, HM_y, HM_direction, HM_size);
  } 
  for(int i = 0; i < count; i ++){
    draw(HB_x, HB_y, HB_direction, HB_size);
  }   
  for(int i = 0; i < count; i ++){
    draw(HM_x, HM_y, HM_direction, HM_size);
  } 
  for(int i = 0; i < count *2; i ++){
    draw(HS_x, HS_y, HS_direction, HS_size);
  }   

}

void drawKeysight(){
  draw(key_x, key_y, key_direction, key_size);
  draw(sight_x, sight_y, sight_direction, sight_size);
  draw(logo_x, logo_y, logo_direction, logo_size);
  draw(back_x, back_y, back_direction, back_size);
  draw(key_x, key_y, key_direction, key_size);
  draw(sight_x, sight_y, sight_direction, sight_size);
  draw(logo_x, logo_y, logo_direction, logo_size);
  draw(back_x, back_y, back_direction, back_size);
}

void draw(uint8_t x[], uint8_t y[], uint8_t direction[], uint8_t size) {
	//int x[] = {1, 1, 2, 2, 1, 1, 6, 6, 5, 5, 8, 7, 7, 13, 13, 12, 7, 12, 13, 13, 7, 7, 8, 5, 5, 6, 6, 1}; // X-Coordinate, the last index has the first point
	//int y[] = {2, 3, 3, 13, 13, 14, 14, 13, 13, 10, 13, 13, 14, 14, 13, 13, 8, 3, 3, 2, 2, 3, 3, 6, 3, 3, 2, 2}; // Y-Coordinate
	//int direction[] = {UP, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, UP_RIGHT, LEFT, UP, RIGHT, DOWN, LEFT, DOWN_LEFT, DOWN_RIGHT, RIGHT, DOWN, LEFT, UP, RIGHT, UP_LEFT, DOWN, RIGHT, DOWN, LEFT};
	// Set initial a,b coordinate values
	int index = 0;

  while(index < size){    
    switch (direction[index]) {
      case 0: // UP
      case 1: // DOWN
        draw_vertical(direction[index], x[index] - 1, y[index] - 1, y[index + 1] - 1);
        break;
      case 2: // RIGHT
      case 3: // LEFT
        draw_horizontal(direction[index], y[index] - 1, x[index] - 1, x[index + 1] - 1);
      case 4:
      case 5:
      case 6:
      case 7:
        draw_diagonal(direction[index], x[index] - 1, y[index] - 1, x[index + 1] - 1, y[index + 1] - 1);
        break;
    }
    index++;
  }
}
void SetXY(uint8_t Xvalue, uint8_t Yvalue) {
  /* for mega, connect from pin 22 to 29 and use PORTA in code
     for uno, connect from pin 0 to 7 and use PORTD in code */
  PORTA = (Xvalue<<4 | (Yvalue&0x0F)); // for mega
  // PORTD = (Xvalue<<4 | (Yvalue&0x0F)); // for uno
}



void draw_tri() {
  int i = 0;
  // Diagnal Line starting at bottom right corner
  for(i = 0; i <=10; i++){
    SetXY(i,i);
    delayMicroseconds(drawdelay);
  }

  for(i = 10; i >= 0; i--){
      SetXY(i, 10);
      delayMicroseconds(drawdelay);
  }

  for(i = 10; i >= 0; i--){
      SetXY(0, i);
      delayMicroseconds(drawdelay);
  }
}

void draw_square(){
  int i = 0;
  
  // Horizontal right moving line
  // Verticle upward line
  for(i = 0; i <=10; i++){
    SetXY(i,0);
    delayMicroseconds(drawdelay);
  }

  // Verticle upward line
  for(i = 0; i <=10; i++){
    SetXY(10,i);
    delayMicroseconds(drawdelay);  
  }

  // Verticle Downwards line
  for(i = 10; i >=0; i--){
    SetXY(i,10);
    delayMicroseconds(drawdelay);
  }

  // Horizontal left moving line
  for(i = 10; i >= 0; i--){
    SetXY(0,i);
    delayMicroseconds(drawdelay);
  }
}



void draw_horizontal(int direction, int yval, int x1val, int x2val) {  
  if(direction == RIGHT){
    int curr_x = x1val;
    while(curr_x <= x2val) {
      SetXY(curr_x, yval);
      delayMicroseconds(drawdelay);
      curr_x += 1;
    }
  }
  else if(direction == LEFT){
    int curr_x = x1val;
    while(curr_x >= x2val){
      SetXY(curr_x, yval);
      delayMicroseconds(drawdelay);
      curr_x -= 1;
    }
  }
}

void draw_vertical(int direction, int xval, int y1val, int y2val){
  if(direction == UP){
    int curr_y = y1val;
    while(curr_y <= y2val) {
      SetXY(xval, curr_y);
      delayMicroseconds(drawdelay);
      curr_y += 1;
    }
  }
  else if(direction == DOWN){
    int curr_y = y1val;
    while(curr_y >= y2val){
      SetXY(xval, curr_y);
      delayMicroseconds(drawdelay);
      curr_y -= 1;
    }
  }
}

void draw_diagonal(int direction, int x1val, int y1val, int x2val, int y2val){
  if(direction == DOWN_LEFT) {
    int curr_x = x1val;
    int curr_y = y1val;
    while(curr_x >= x2val) {
      SetXY(curr_x, curr_y);
      delayMicroseconds(drawdelay);
      curr_x -= 1;
      curr_y -= 1;
    }
  }
  else if(direction == DOWN_RIGHT) {
    int curr_x = x1val;
    int curr_y = y1val;
    while(curr_x <= x2val) {
      SetXY(curr_x, curr_y);
      delayMicroseconds(drawdelay);
      curr_x += 1;
      curr_y -= 1;
    }   
  }
  else if(direction == UP_RIGHT) {
    int curr_x = x1val;
    int curr_y = y1val;
    while(curr_x <= x2val) {
      SetXY(curr_x, curr_y);
      delayMicroseconds(drawdelay);
      curr_x += 1;
      curr_y += 1;
    }
  }
  else if(direction == UP_LEFT) {
    int curr_x = x1val;
    int curr_y = y1val;
    while(curr_x >= x2val) {
      SetXY(curr_x, curr_y);
      delayMicroseconds(drawdelay);
      curr_x -= 1;
      curr_y += 1;
    }
  }
}
