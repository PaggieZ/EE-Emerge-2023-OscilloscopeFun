#define IMAGE_TYPE const uint8_t PROGMEM



uint8_t UP = 0;
uint8_t DOWN = 1;
uint8_t RIGHT = 2;
uint8_t LEFT = 3;

uint8_t UP_RIGHT = 4;
uint8_t DOWN_LEFT = 5;
uint8_t DOWN_RIGHT = 6;
uint8_t UP_LEFT = 7;

/*
SET: DELAY: COUNT
original: 10, 250
rounded: 1, 1000
*/


int drawdelay = 10;
int count = 250;

//A
uint8_t A_x[] = {8, 8, 10, 10, 6, 6, 8, 8, 6, 6, 3, 2, 3, 3, 4, 12, 13, 13, 14, 14, 10, 10, 8};
uint8_t A_y[] = {7, 9, 9, 13, 13, 9, 9, 7, 7, 2, 2, 3, 3, 14, 15, 15, 14, 3, 3, 2, 2, 7, 7};
uint8_t A_direction[] = {UP, RIGHT, UP, LEFT, DOWN, RIGHT, DOWN, LEFT, DOWN, LEFT, UP, LEFT, UP, UP_RIGHT, RIGHT, DOWN_RIGHT, DOWN, RIGHT, DOWN, LEFT, UP, LEFT};
uint8_t A_size = 22;

//B
uint8_t B_x[] =  {3, 3, 4,  4,  3,  3, 12, 13, 13, 12, 6,  6, 10, 11, 11, 10, 6, 6, 10, 11, 11, 10, 6, 6, 12, 13, 13, 12, 3};
uint8_t B_y[] =  {2, 3, 3, 13, 13, 14, 14, 13,  9,  8, 8, 13, 13, 12, 10,  9, 9, 3,  3,  4,  6,  7, 7, 8,  8,  7,  3,  2, 2};
uint8_t B_direction[] = {UP, RIGHT, UP, LEFT, UP, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, UP, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, DOWN, RIGHT, UP_RIGHT, UP, UP_LEFT, LEFT, UP, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT};
uint8_t B_size = 28;

//C
uint8_t C_x[] = {3,  3,  5, 13, 13,  7,  6, 6, 7, 13, 13, 5, 3};
uint8_t C_y[] = {4, 12, 14, 14, 11, 11, 10, 6, 5,  5,  2, 2, 4};
uint8_t C_direction[] = {UP, UP_RIGHT, RIGHT, DOWN, LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, DOWN, LEFT, UP_LEFT};
uint8_t C_size = 12;

//D
uint8_t D_x[] = {3, 11, 13, 13, 11,  3,  3,  4, 4, 10, 11, 11, 10,  6, 6, 4, 4, 3, 3};
uint8_t D_y[] = {2,  2,  4, 12, 14, 14, 13, 13, 4,  4,  5, 11, 12, 12, 4, 4, 3, 3, 2};
uint8_t D_direction[] = {RIGHT, UP_RIGHT, UP, UP_LEFT, LEFT, DOWN, RIGHT, DOWN, RIGHT, UP_RIGHT, UP, UP_LEFT, LEFT, DOWN, LEFT, DOWN, LEFT, DOWN};
uint8_t D_size = 18;

//E
uint8_t E_x[] = {1, 1, 2, 2, 1, 1, 13, 13, 11, 11, 5, 5, 9, 9, 11, 11, 9, 9, 5, 5, 11, 11, 13, 13, 1};
uint8_t E_y[] = {2, 3, 3, 13, 13, 14, 14, 11, 11, 12, 12, 9, 9, 10, 10, 6, 6, 7, 7, 4, 4, 5, 5, 2, 2};
uint8_t E_direction[] = {UP, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, UP, LEFT, DOWN, RIGHT, UP, RIGHT, DOWN, LEFT, UP, LEFT, DOWN, RIGHT, UP, RIGHT, DOWN, LEFT};
uint8_t E_size = 24;

//F
uint8_t F_x[] = {2, 2, 3,  3,  2,  2, 11, 11, 10, 10,  5, 5, 10, 10, 11, 11, 10, 10, 5, 5, 6, 6, 2};
uint8_t F_y[] = {2, 3, 3, 13, 13, 14, 14, 11, 11, 12, 12, 9,  9, 10, 10,  6,  6,  7, 7, 3, 3, 2, 2};
uint8_t F_direction[] = {UP, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, UP, LEFT, DOWN, RIGHT, UP, RIGHT, DOWN, LEFT, UP, LEFT, DOWN, RIGHT, DOWN, LEFT};
uint8_t F_size = 22;

//G
uint8_t G_x[] = {5, 3, 3, 5, 13, 13, 11, 11, 6, 5, 5, 6, 11, 11, 9, 9, 7, 7, 9, 9, 13, 13, 12, 5};
uint8_t G_y[] = {2, 4, 12, 14, 14, 11, 11, 12, 12, 11, 5, 4, 4, 7, 7, 6, 6, 10, 10, 9, 9, 3, 2, 2};
uint8_t G_direction[] = {UP_LEFT, UP, UP_RIGHT, RIGHT, DOWN, LEFT, UP, LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, UP, LEFT, DOWN, LEFT, UP, RIGHT, DOWN, RIGHT, DOWN, DOWN_LEFT, LEFT};
uint8_t G_size = 23;

//H
uint8_t H_x[] = {3, 3, 4, 4, 3, 3, 7, 7, 6, 6, 10, 10, 9, 9, 13, 13, 12, 12, 13, 13, 9, 9, 10, 10, 6, 6, 7, 7, 3};
uint8_t H_y[] = {3, 4, 4, 13, 13, 14, 14, 13, 13, 10, 10, 13, 13, 14, 14, 13, 13, 4, 4, 3, 3, 4, 4, 8, 8, 5, 4, 3, 3};
uint8_t H_direction[] = {UP, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, RIGHT, DOWN, LEFT, UP, RIGHT, UP, LEFT, DOWN, RIGHT, DOWN, LEFT};
uint8_t H_size = 28;

//I
uint8_t I_x[] = {5, 5, 7, 7, 5, 5, 12, 12, 10, 10, 12, 12, 5};
uint8_t I_y[] = {2, 4, 4, 12, 12, 14, 14, 12, 12, 4, 4, 2, 2};
uint8_t I_direction[] = {UP, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, RIGHT, DOWN, LEFT};
uint8_t I_size = 12;

//J
uint8_t J_x[] = {5, 5, 4, 4, 8, 8, 7, 7, 8, 10, 10,  9,  9, 13, 13, 12, 12, 11, 7, 5};
uint8_t J_y[] = {4, 6, 6, 8, 8, 6, 6, 5, 4,  4, 12, 12, 14, 14, 12, 12,  3,  2, 2, 4};
uint8_t J_direction[] = {UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, DOWN_RIGHT, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, DOWN_LEFT, LEFT, UP_LEFT};
uint8_t J_size = 19;

//K
uint8_t K_x[] = {1, 1, 2, 2, 1, 1, 6, 6, 5, 5, 8, 7, 7, 13, 13, 12, 7, 12, 13, 13, 7, 7, 8, 5, 5, 6, 6, 1}; // X-Coordinate, the last index has the first point
uint8_t K_y[] = {2, 3, 3, 13, 13, 14, 14, 13, 13, 10, 13, 13, 14, 14, 13, 13, 8, 3, 3, 2, 2, 3, 3, 6, 3, 3, 2, 2};
uint8_t K_direction[] = {UP, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, UP_RIGHT, LEFT, UP, RIGHT, DOWN, LEFT, DOWN_LEFT, DOWN_RIGHT, RIGHT, DOWN, LEFT, UP, RIGHT, UP_LEFT, DOWN, RIGHT, DOWN, LEFT};
uint8_t K_size = 27;

//L
uint8_t L_x[] = {5,5,6,6,5,5,10,10,9,9,12,12,14,14,5};
uint8_t L_y[] = {2,4,4,11,11,13,13,11,11,4,4,6,6,2,2};
uint8_t L_direction[] = {UP, RIGHT,UP,LEFT,UP,RIGHT,DOWN,LEFT,DOWN,RIGHT,UP,RIGHT,DOWN,LEFT};
uint8_t L_size = 14;



//M
uint8_t M_x[] = {3,3,5,9,13,15,15,13,13,9,5,5,3};
uint8_t M_y[] = {2,14,14,10,14,14,2,2,10,6,10,2,2};
uint8_t M_direction[] = {UP,RIGHT,DOWN_RIGHT,UP_RIGHT, RIGHT, DOWN,LEFT,UP,DOWN_LEFT,UP_LEFT, DOWN,LEFT};
uint8_t M_size = 12;

//N
uint8_t N_x[] = {3,3,5,9,9,11,11,9,5,5,3};
uint8_t N_y[] = {4,13,13,8,13,13,4,4,8,4,4};
uint8_t N_direction[] = {UP,RIGHT,DOWN_RIGHT,UP,RIGHT, DOWN,LEFT,UP_LEFT, DOWN,LEFT};
uint8_t N_size = 10;

//O
uint8_t O_x[] = {3, 3, 5,  5,  6,  8,  9, 9, 8, 6, 5, 5, 3,  3,  4, 10, 11, 11, 10, 4, 3};
uint8_t O_y[] = {4, 8, 8, 11, 12, 12, 11, 6, 5, 5, 6, 8, 8, 12, 14, 14, 12,  4,  2, 2, 4};
uint8_t O_direction[] = {UP, RIGHT, UP, UP_RIGHT, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, UP_LEFT, UP, LEFT, UP, UP_RIGHT, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, UP_LEFT};
uint8_t O_size = 20;

//P
uint8_t P_x[] = {4,4,5,5,4,4,12,13,13,10,9,8,8,9,10,10,13,13,12,8,8,10,10,4};
uint8_t P_y[] = {2, 3, 3, 10, 10, 12, 12, 11, 9, 9, 10, 10, 7, 7, 8, 9, 9, 7, 6, 6, 3, 3, 2, 2};
uint8_t P_direction[] = {UP,RIGHT,UP,LEFT,UP,RIGHT,DOWN_RIGHT,DOWN,LEFT,UP_LEFT,LEFT,DOWN,RIGHT,UP_RIGHT,UP,RIGHT,DOWN,DOWN_LEFT,LEFT,DOWN,RIGHT,DOWN,LEFT};
uint8_t P_size = 23;

//Q
uint8_t Q_x[] = {3,3,5,5,6,11,12,12,11,10,7,8,5,5,3,3,4,13,14,14,13,12,14,11,9,4,3};
uint8_t Q_y[] = {5,8,8,11,12,12,11,5,5,6,6,5,5,8,8,13,14,14,13,5,4,4,2,2,4,4,5};
uint8_t Q_direction[] = {UP,RIGHT,UP,UP_RIGHT,RIGHT,DOWN_RIGHT,DOWN,LEFT,UP_LEFT,LEFT,DOWN_RIGHT,LEFT,UP,LEFT,UP,UP_RIGHT,RIGHT,DOWN_RIGHT,DOWN,DOWN_LEFT,LEFT,DOWN_RIGHT,LEFT,UP_LEFT,LEFT,UP_LEFT};
uint8_t Q_size= 28;

//R
uint8_t R_x[] = {11, 11, 12, 12, 7, 7, 11, 11, 13, 14, 14, 13, 3, 3, 5, 5, 3, 3, 8, 8, 7, 7, 11, 11, 10, 10, 14, 14, 13, 13, 9, 11};
uint8_t R_y[] = {10, 11, 11, 14, 14, 11, 11, 10, 10, 11, 15, 16, 16, 14, 14, 4, 4, 2, 2, 4, 4, 9, 5, 4, 4, 2, 2, 4, 4, 6, 11, 10 };
uint8_t R_direction[] = {UP, RIGHT, UP, LEFT, DOWN, RIGHT, DOWN, RIGHT, UP_RIGHT, UP, UP_LEFT, LEFT, DOWN, RIGHT, DOWN, LEFT, DOWN, RIGHT, UP, LEFT, UP, DOWN_RIGHT, DOWN, LEFT, DOWN, RIGHT, UP, LEFT, UP, UP_LEFT, RIGHT};
uint8_t R_size = 30;

//S
uint8_t S_x[] = {2, 2, 5, 5, 9, 9, 2, 2, 12, 12, 10, 10, 5, 5, 12, 12, 2};
uint8_t S_y[] = {2, 5, 5, 4, 4, 7, 7, 14, 14, 11, 11, 12, 12, 9, 9, 2, 2};
uint8_t S_direction[] = {UP, RIGHT, DOWN, RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, UP, LEFT, DOWN, RIGHT, DOWN, LEFT};
uint8_t S_size = 16;

//T
uint8_t T_x[] = {7, 7, 3, 3, 13, 13, 9, 9, 7};
uint8_t T_y[] = {2, 12, 12, 14, 14, 12, 12, 2, 2};
uint8_t T_direction[] = {UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, LEFT};
uint8_t T_size = 8;

//U
uint8_t U_x[] = {5,4,4,3,3,6,6,5,5,6,10,11,11,10,10,13,13,12,12,11,5};
uint8_t U_y[] = {3,4,11,11,12,12,11,11,6,5,5,6,11,11,12,12,11,11,4,3,3};
uint8_t U_direction[] = {UP_LEFT,UP,LEFT,UP,RIGHT,DOWN, LEFT, DOWN,DOWN_RIGHT,RIGHT, UP_RIGHT,UP,LEFT,UP,RIGHT,DOWN, LEFT,DOWN,DOWN_LEFT,LEFT};
uint8_t U_size = 20;

//V
uint8_t V_x[] = {9, 3, 3, 2, 2, 6, 6, 5, 5, 9, 13, 13, 12, 12, 16, 16, 15, 15, 9};
uint8_t V_y[] = {4, 10, 13, 13, 14, 14, 13, 13, 11, 7, 11, 13, 13, 14, 14, 13, 13, 10, 4};
uint8_t V_direction[] = {UP_LEFT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, DOWN_RIGHT, UP_RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, DOWN_LEFT};
uint8_t V_size = 18;

//W
uint8_t W_x[] = {5, 2, 2, 1, 1, 5, 5, 4, 4, 6, 8, 10, 12, 12, 11, 11, 15, 15, 14, 14, 11, 10, 8, 6, 5};
uint8_t W_y[] = {5, 8, 13, 13, 14, 14, 13, 13, 9, 7, 9, 7, 9, 13, 13, 14, 14, 13, 13, 8, 5, 5, 7, 5, 5};
uint8_t W_direction[] = {UP_LEFT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, DOWN_RIGHT, UP_RIGHT, DOWN_RIGHT, UP_RIGHT, UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, DOWN_LEFT, LEFT, UP_LEFT, DOWN_LEFT, LEFT};
uint8_t W_size = 24;

//X
uint8_t X_x[] = {1, 1, 2, 7, 3, 2, 2, 6, 6, 5, 8, 11, 10, 10, 14, 14, 13, 9, 14, 15, 15, 11, 11, 12, 8, 4, 5, 5, 1};
uint8_t X_y[] = {3, 4, 4, 9, 13, 13, 14, 14, 13, 13, 10, 13, 13, 14, 14, 13, 13, 9, 4, 4, 3, 3, 4, 4, 8, 4, 4, 3, 3};
uint8_t X_direction[] = {UP, RIGHT, UP_RIGHT, UP_LEFT, LEFT, UP, RIGHT, DOWN, LEFT, DOWN_RIGHT, UP_RIGHT, LEFT, UP, RIGHT, DOWN, LEFT, DOWN_LEFT, DOWN_RIGHT, RIGHT, DOWN, LEFT, UP, RIGHT, UP_LEFT, DOWN_LEFT, RIGHT, DOWN, LEFT};
uint8_t X_size = 28;

//Y
uint8_t Y_x[] = {1, 1, 2, 7, 2, 1, 1, 7, 7, 6, 9, 12, 11, 11, 16, 16, 15, 5, 6, 6, 1};
uint8_t Y_y[] = {2, 3, 3, 8, 13, 13, 14, 14, 13, 13, 10, 13, 13, 14, 14, 13, 13, 3, 3, 2, 2};
uint8_t Y_direction[] = {UP, RIGHT, UP_RIGHT, UP_LEFT, LEFT, UP, RIGHT, DOWN, LEFT, DOWN_RIGHT, UP_RIGHT, LEFT, UP, RIGHT, DOWN, LEFT, DOWN_LEFT, RIGHT, DOWN, LEFT};
uint8_t Y_size = 20;

//Z
uint8_t Z_x[] = {3, 3, 10, 4, 4, 3, 3, 4, 4, 14, 14, 7, 13, 13, 14, 14, 13, 13, 3};
uint8_t Z_y[] = {3, 4, 11, 11, 10, 10, 14, 14, 13, 13, 12, 5, 5, 6, 6, 2, 2, 3, 3};
uint8_t Z_direction[] = {UP, UP_RIGHT, LEFT, DOWN, LEFT, UP, RIGHT, DOWN, RIGHT, DOWN, DOWN_LEFT, RIGHT, UP, RIGHT, DOWN, LEFT, UP, LEFT};
uint8_t Z_size = 18;












uint8_t HB_x[] = {9, 2, 2, 4, 7, 9, 11, 14, 16, 16, 9};
uint8_t HB_y[] = {3, 10, 12, 14, 14, 12, 14, 14, 12, 10, 3};
uint8_t HB_direction[] = {UP_LEFT, UP, UP_RIGHT, RIGHT, DOWN_RIGHT, UP_RIGHT, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT};
uint8_t HB_size = 10;

uint8_t HM_x[] = {9, 4, 4, 6, 7, 9, 11, 12, 14, 14, 9};
uint8_t HM_y[] = {5, 10, 11, 13, 13, 11, 13, 13, 11, 10, 5};
uint8_t HM_direction[] = {UP_LEFT, UP, UP_RIGHT, RIGHT, DOWN_RIGHT, UP_RIGHT, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT};
uint8_t HM_size = 10;


uint8_t HS_x[] = {9, 5, 5, 6, 7, 9, 11, 12, 13, 13, 9};
uint8_t HS_y[] = {6, 10, 11, 12, 12, 10, 12, 12, 11, 10, 6};
uint8_t HS_direction[] = {UP_LEFT, UP, UP_RIGHT, RIGHT, DOWN_RIGHT, UP_RIGHT, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT};
uint8_t HS_size = 10;

// drawing KEY
// int key_x[] = {5, 4, 2, 2, 1, 1, 2, 2, 4, 5, 3, 3, 5/* end of K */, 9, 9, 6, 6, 8, 8, 6, 6, 9, 9, 5, 5 /*end of E*/, 10, 10, 9, 9, 10, 10, 11, 11, 12, 12, 11, 11, 10 /*end of Y*/, 5};
// int key_y[] = {11, 11, 13, 11, 11, 16, 14, 14, 16, 16, 14, 13, 11/*end of K */, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 11 /*end of E*/, 11, 13, 13, 16, 16, 14, 14, 16, 16, 13, 13, 11, 11 /*end of Y*/, 11};
// int key_direction[] = {LEFT, UP_LEFT, DOWN, LEFT, UP, RIGHT, DOWN, UP_RIGHT, RIGHT, DOWN_LEFT, DOWN, DOWN_RIGHT /*K*/, RIGHT, UP, LEFT, UP, RIGHT, UP, LEFT, UP, RIGHT, UP, LEFT, DOWN /*E*/, RIGHT, UP, LEFT, UP, RIGHT, DOWN, RIGHT, UP, RIGHT, DOWN, LEFT, DOWN, LEFT /*Y*/, LEFT};
// int key_size = 38;
// Updated KEY
uint8_t key_x[] = {5, 4, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 4, 3, 3, 4, 5/* end of K */, 9,  9,  6,  6,  8,  8,  6,  6,  9,  9, 5, 5 /*end of E*/, 10, 10, 9, 9, 10, 10, 11, 11, 12, 12, 11, 11, 10 /*end of Y*/, 5};
uint8_t key_y[] = {11, 11, 12, 13, 12, 11, 11, 12, 13, 14, 15, 16, 16, 15, 14, 15, 16, 16, 15, 14, 13, 12, 11/*end of K */, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 11 /*end of E*/, 11, 13, 13, 16, 16, 14, 14, 16, 16, 13, 13, 11, 11 /*end of Y*/, 11};
uint8_t key_direction[] = {LEFT, UP_LEFT, UP_LEFT, DOWN, DOWN, LEFT, UP, UP, UP, UP, UP, RIGHT, DOWN, DOWN, UP_RIGHT, UP_RIGHT, RIGHT, DOWN_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, DOWN_RIGHT/*K*/, RIGHT, UP, LEFT, UP, RIGHT, UP, LEFT, UP, RIGHT, UP, LEFT, DOWN /*E*/, RIGHT, UP, LEFT, UP, RIGHT, DOWN, RIGHT, UP, RIGHT, DOWN, LEFT, DOWN, LEFT /*Y*/, LEFT};
uint8_t key_size = 48;



// drawing SIGHT
uint8_t sight_x[] = {3, 1, 1, 2, 2, 1, 1, 3, 3, 2, 2, 3, 3/*end of S*/, 6, 6, 5, 5, 6, 6, 3, 3, 4, 4, 3, 3, 6 /*end of I*/, 9, 9, 7, 7, 8, 8, 10, 10, 9, 9, 6, 6, 9 /*end of G*/, 10, 11, 11, 12, 12, 13, 13, 12, 12, 11, 11, 10, 10, 11, 11, 12, 12, 13 /*end of H*/, 16, 16, 15, 15, 14, 14, 13, 13 };
uint8_t sight_y[] = {11, 11, 8, 8, 7, 7, 6, 6, 9, 9, 10, 10, 11 /*end of S*/, 11, 10, 10, 7, 7, 6, 6, 7, 7, 10, 10, 11, 11 /*end of I*/, 11, 10, 10, 7, 7, 9, 9, 8, 8, 6, 6, 11, 11 /*end of G*/, 11, 11, 9, 9, 11, 11, 6, 6, 8, 8, 6, 6, 11, 11, 9, 9, 11, 11 /*end of H*/, 11, 10, 10, 6, 6, 10, 10, 11};
uint8_t sight_direction[] = {LEFT, DOWN, RIGHT, DOWN, LEFT, DOWN, RIGHT, UP, LEFT, UP, RIGHT, UP/*S*/, RIGHT, DOWN, LEFT, DOWN, RIGHT, DOWN, LEFT, UP, RIGHT, UP, LEFT, UP, RIGHT/*I*/, RIGHT, DOWN, LEFT, DOWN, RIGHT, UP, RIGHT, DOWN, LEFT, DOWN, LEFT, UP, RIGHT/*G*/, RIGHT, RIGHT, DOWN, RIGHT, UP, RIGHT, DOWN, LEFT, UP, LEFT, DOWN, LEFT, UP, RIGHT, DOWN, RIGHT, UP, RIGHT/*H*/, RIGHT, DOWN, LEFT, DOWN, LEFT, UP, LEFT, UP};
uint8_t sight_size = 64;

/*
int logo_x[] = {13, 15, 16, 2, 3, 5, 9, 13};
int logo_y[] = {5, 3, 4, 4, 3, 5, 1, 5};
int logo_direction[] = {DOWN_RIGHT, UP_RIGHT, LEFT, DOWN_RIGHT, UP_RIGHT, DOWN_RIGHT, UP_RIGHT};
int logo_size = 8;
*/
uint8_t logo_x[] = {13, 13, 15, 16, 2, 3, 5, 9, 13};
uint8_t logo_y[] = {11, 5, 3, 4, 4, 3, 5, 1, 5};
uint8_t logo_direction[] = {DOWN, DOWN_RIGHT, UP_RIGHT, LEFT, DOWN_RIGHT, UP_RIGHT, DOWN_RIGHT, UP_RIGHT};
uint8_t logo_size = 8;

uint8_t back_x[] = {13, 13, 12, 12, 11, 11, 10, 10, 9, 9, 6, 6};
uint8_t back_y[] = {5, 6, 6, 8, 8, 6, 6, 8, 8, 6, 6, 11};
uint8_t back_direction[] = {UP, LEFT, UP, LEFT, DOWN, LEFT, UP, LEFT, DOWN, LEFT, UP};
uint8_t back_size = 11;
/* 
int tri_x[] = {1, 4, 4, 1};
int tri_y[] = {1, 1, 4, 1};
int tri_direction[] = {RIGHT, UP, DOWN_LEFT};
*/

uint8_t wall_LE_x[] = {7, 6, 6, 5, 3, 2, 2, 5, 7, 7, 3, 4, 4, 5, 5, 7, 7};
uint8_t wall_LE_y[] = {13, 12, 11, 10, 10, 11, 13, 16, 16, 14, 14, 14, 12, 12, 14, 14, 13};
uint8_t wall_LE_direction[] = {DOWN_LEFT, DOWN, DOWN_LEFT, LEFT, UP_LEFT, UP, UP_RIGHT, RIGHT, DOWN, LEFT, RIGHT, DOWN, RIGHT, UP, RIGHT, DOWN};
uint8_t wall_LE_size = 16;

uint8_t wall_neck_x[] = {7, 7, 9, 9, 7, 9, 9, 7, 9, 9, 8, 7, 8, 9};
uint8_t wall_neck_y[] = {13, 9, 9, 10, 10, 10, 11, 11, 11, 14, 15, 14, 15, 14};
uint8_t wall_neck_direction[] = {DOWN, RIGHT, UP, LEFT, RIGHT, UP, LEFT, RIGHT, UP, UP_LEFT, DOWN_LEFT, UP_RIGHT, DOWN_RIGHT};
uint8_t wall_neck_size = 13;

uint8_t wall_RE_x[] = {9, 9, 11, 14, 14,/* */ 13, 11, 10, 10, 9, 9, 13, 12, 12, 11, 11, 9, 9};
uint8_t wall_RE_y[] = {14, 16, 16, 13, 11, 10, 10, 11, 12, 13, 14, 14, 14, 12, 12, 14, 14, 9};
uint8_t wall_RE_direction[] = {UP, RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, UP_LEFT, UP, UP_LEFT, UP, RIGHT, LEFT, DOWN, LEFT, UP, LEFT, DOWN};
uint8_t wall_RE_size = 17;

uint8_t wall_up_x[] = {9, 9, 8, 8, 7, 7, 6, 6, 5, 5, 6, 6, 10, 10, 5, 11, 11, 10};
uint8_t wall_up_y[] = {9, 7, 7, 9, 9, 7, 7, 9, 9, 8, 8, 7, 7, 9, 9, 9, 8, 8};
uint8_t wall_up_direction[] = {DOWN, LEFT, UP, LEFT, DOWN, LEFT, UP, LEFT, DOWN, RIGHT, DOWN, RIGHT, UP, LEFT, RIGHT, DOWN, LEFT};
uint8_t wall_up_size = 17;

uint8_t wall_RH_x[] = {10, 10, 14, 14, 10, 10, 13, 13, 11, 11};
uint8_t wall_RH_y[] = {8, 6, 6, 8, 8, 6, 6, 7, 7, 5};
uint8_t wall_RH_direction[] = {DOWN, RIGHT, UP, LEFT, DOWN, RIGHT, UP, LEFT, DOWN};
uint8_t wall_RH_size = 9;

uint8_t wall_RL_x[] = {11, 12, 12, 13, 13, 14, 14, 12, 12, 11, 11, 12, 9, 9, 10, 10, 11, 11, 11, 10, 10, 9, 9};
uint8_t wall_RL_y[] = {5, 5, 4, 4, 3, 3, 1, 1, 3, 3, 1, 1, 1, 3, 3, 4, 4, 5, 4, 4, 3, 3, 2};
uint8_t wall_RL_direction[] = {RIGHT, DOWN, RIGHT, DOWN, RIGHT, DOWN, LEFT, UP, LEFT, DOWN, RIGHT, LEFT, UP, RIGHT, UP, RIGHT, UP, DOWN, LEFT, DOWN, LEFT, DOWN};
uint8_t wall_RL_size = 22;

uint8_t wall_LL_x[] = {9, 7, 7, 5, 5, 4, 4, 5, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 6, 6, 5, 5};
uint8_t wall_LL_y[] = {2, 2, 1, 1, 3, 3, 1, 1, 1, 3, 3, 4, 4, 5, 5, 4, 4, 3, 3, 2, 3, 3, 4, 4, 5};
uint8_t wall_LL_direction[] = {LEFT, DOWN, LEFT, UP, LEFT, DOWN, RIGHT, LEFT, UP, RIGHT, UP, RIGHT, UP, RIGHT, DOWN, RIGHT, DOWN, RIGHT, DOWN, UP, LEFT, UP, LEFT, UP};
uint8_t wall_LL_size = 24;

uint8_t wall_LH_x[] = {5, 5, 3, 3, 2, 2, 6, 6, 2, 2, 5};
uint8_t wall_LH_y[] = {5, 7, 7, 6, 6, 8, 8, 6, 6, 8, 8};
uint8_t wall_LH_direction[] = {UP, LEFT, DOWN, LEFT, UP, RIGHT, DOWN, LEFT, UP, RIGHT};
uint8_t wall_LH_size = 10;

uint8_t wall_back_x[] = {5, 5, 7, 7};
uint8_t wall_back_y[] = {8, 9, 9, 13};
uint8_t wall_back_direction[] = {UP, RIGHT, UP};
uint8_t wall_back_size = 3;

uint8_t poop1_x[]  = {1, 1, 3, 2, 1, 1, 2, 13, 15, 15, 14, 12, 10, 9, 6, 5, 5, 10, 10, 12, 14, 14, 12, 11, 10, 9, 9, 10, 11, 11, 12, 12, 11, 10,  9,  9,  8,  7,  8,  9,  9,  7,  5,  6,  6,  5,  4,  2, 2, 3, 4, 4, 5, 6, 6, 5, 4, 3, 2, 1};
uint8_t poop1_y[] = {7, 5, 3, 4, 3, 2, 1,  1,  3,  5,  6,  4,  4, 3, 3, 4, 5,  5,  4,  4,  6,  7,  9,  8,  9, 8, 7,  6,  7,  8,  9, 11, 12, 12, 13, 12, 11, 11, 11, 12, 13, 15, 15, 14, 13, 12, 12, 10, 8, 7, 7, 8, 9, 8, 7, 6, 7, 7, 8, 7};
uint8_t poop1_direction[] = {DOWN, DOWN_RIGHT, UP_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, UP_RIGHT, UP, UP_LEFT, DOWN_LEFT, LEFT, DOWN_LEFT, LEFT, UP_LEFT, UP, RIGHT, DOWN, RIGHT, UP_RIGHT, UP, UP_LEFT, DOWN_LEFT, UP_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, UP_RIGHT, UP, UP_RIGHT, UP, UP_LEFT, LEFT, UP_LEFT, DOWN, DOWN_LEFT, LEFT, RIGHT, UP_RIGHT, UP, UP_LEFT, LEFT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, UP, UP_RIGHT, DOWN_RIGHT, DOWN, DOWN_LEFT, UP_LEFT, LEFT, UP_LEFT, DOWN_LEFT};
uint8_t poop1_size = 59;

uint8_t poop2_x[]  = {1, 1, 3, 2, 1, 1, 2, 13, 15, 15, 14, 12, 10, 9, 6, 5, 5, 10, 10, 12, 14, 14, 12, 11, 10, 9, 9, 10, 11, 11, 12, 12, 11, 10,  9,  9,  8,  7,  8,  9,  9,  7,  5,  6,  6,  5,  4,  2, 2, 3, /* start of left eye */ 4, 4, 6, 6, 5, 4 /* end of left eye */ , 3, 2, 1};
uint8_t poop2_y[] = {7, 5, 3, 4, 3, 2, 1,  1,  3,  5,  6,  4,  4, 3, 3, 4, 5,  5,  4,  4,  6,  7,  9,  8,  9, 8, 7,  6,  7,  8,  9, 11, 12, 12, 13, 12, 11, 11, 11, 12, 13, 15, 15, 14, 13, 12, 12, 10, 8, 7, /* start of left eye */ 7, 8, 8, 7, 6, 7 /* end of left eye */ , 7, 8, 7};
uint8_t poop2_direction[] = {DOWN, DOWN_RIGHT, UP_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, UP_RIGHT, UP, UP_LEFT, DOWN_LEFT, LEFT, DOWN_LEFT, LEFT, UP_LEFT, UP, RIGHT, DOWN, RIGHT, UP_RIGHT, UP, UP_LEFT, DOWN_LEFT, UP_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, UP_RIGHT, UP, UP_RIGHT, UP, UP_LEFT, LEFT, UP_LEFT, DOWN, DOWN_LEFT, LEFT, RIGHT, UP_RIGHT, UP, UP_LEFT, LEFT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, /* start of left eye */ UP, RIGHT, DOWN, DOWN_LEFT, UP_LEFT /* end of left eye */, LEFT, UP_LEFT, DOWN_LEFT} ;
uint8_t poop2_size = 58;

uint8_t poop3_x[]  = {1, 1, 3, 2, 1, 1, 2, 13, 15, 15, 14, 12, 10, 9, 6, 5, 5, 10, 10, 12, 14, 14, 12, 11, 10, 9, 9, 10, 11, 11, 12, 12, 11, 10,  9,  9,  8,  7,  8,  9,  9,  7,  5,  6,  6,  5,  4,  2, 2, 3, /* start of left eye */ 4, 6, 5, 4 /* end of left eye */ , 3, 2, 1};
uint8_t poop3_y[] = {7, 5, 3, 4, 3, 2, 1,  1,  3,  5,  6,  4,  4, 3, 3, 4, 5,  5,  4,  4,  6,  7,  9,  8,  9, 8, 7,  6,  7,  8,  9, 11, 12, 12, 13, 12, 11, 11, 11, 12, 13, 15, 15, 14, 13, 12, 12, 10, 8, 7, /* start of left eye */ 7, 7, 6, 7 /* end of left eye */ , 7, 8, 7};
uint8_t poop3_direction[] = {DOWN, DOWN_RIGHT, UP_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, UP_RIGHT, UP, UP_LEFT, DOWN_LEFT, LEFT, DOWN_LEFT, LEFT, UP_LEFT, UP, RIGHT, DOWN, RIGHT, UP_RIGHT, UP, UP_LEFT, DOWN_LEFT, UP_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, UP_RIGHT, UP, UP_RIGHT, UP, UP_LEFT, LEFT, UP_LEFT, DOWN, DOWN_LEFT, LEFT, RIGHT, UP_RIGHT, UP, UP_LEFT, LEFT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, /* start of left eye */ RIGHT, DOWN_LEFT, UP_LEFT /* end of left eye */, LEFT, UP_LEFT, DOWN_LEFT} ;
uint8_t poop3_size = 56;

uint8_t poop4_x[]  = {1, 1, 3, 2, 1, 1, 2, 13, 15, 15, 14, 12, 10, 9, 6, 5, 5, 10, 10, 12, 14, 14, 12, 11, 10, 9, 9, 10, 11, 11, 12, 12, 11, 10,  9,  9,  8,  7,  8,  9,  9,  7,  5,  6,  6,  5,  4,  2, 2, 3, /* start of left eye */ 4, 5, 6, 5, 4 /* end of left eye */ , 3, 2, 1};
uint8_t poop4_y[] = {7, 5, 3, 4, 3, 2, 1,  1,  3,  5,  6,  4,  4, 3, 3, 4, 5,  5,  4,  4,  6,  7,  9,  8,  9, 8, 7,  6,  7,  8,  9, 11, 12, 12, 13, 12, 11, 11, 11, 12, 13, 15, 15, 14, 13, 12, 12, 10, 8, 7, /* start of left eye */ 7, 6, 7, 6, 7 /* end of left eye */ , 7, 8, 7};
uint8_t poop4_direction[] = {DOWN, DOWN_RIGHT, UP_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, UP_RIGHT, UP, UP_LEFT, DOWN_LEFT, LEFT, DOWN_LEFT, LEFT, UP_LEFT, UP, RIGHT, DOWN, RIGHT, UP_RIGHT, UP, UP_LEFT, DOWN_LEFT, UP_LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, UP_RIGHT, UP, UP_RIGHT, UP, UP_LEFT, LEFT, UP_LEFT, DOWN, DOWN_LEFT, LEFT, RIGHT, UP_RIGHT, UP, UP_LEFT, LEFT, DOWN_RIGHT, DOWN, DOWN_LEFT, LEFT, DOWN_LEFT, DOWN, DOWN_RIGHT, RIGHT, /* start of left eye */ DOWN_RIGHT, UP_RIGHT, DOWN_LEFT, UP_LEFT /* end of left eye */, LEFT, UP_LEFT, DOWN_LEFT} ;
uint8_t poop4_size = 57;
