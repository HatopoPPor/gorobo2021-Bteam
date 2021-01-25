#pragma once
void Get_number();
void cal_omuni(byte move_X, byte move_Y, byte move_turn, int turn_Gyro);
void toggle_R1(byte INPUT_R1);
void toggle_R2(byte INPUT_R2);
void toggle_batu(byte INPUT_batu);
void toggle_L2(byte INPUT_L2);
void toggle_L1(byte INPUT_L1);
void toggle_sankaku(byte INPUT_sankaku);
void toggle_sikaku(byte INPUT_sikaku);
void click_maru(byte INPUT_maru);
void cal_Servo(byte cal_kakudo);
void cal_syoukou(byte move_Motor);
void move_zyouge();
void Slave_Send_omuni(byte Motor_power_omuni1, byte Motor_power_omuni2, byte Motor_power_omuni3, byte Motor_power_omuni4, byte Motor_power_omuni_muki);
void Slave_Send_syoukou(byte Motor_power_syoukou, byte Motor_muki_syoukou);
void Slave_Send_dansa(byte Motor_power_air);
void Slave_Send_hanakaisyuu(byte hanakaisyuu_Servo);
void Slave_Send_nae(byte Motor_power1, byte Motor_power2, byte Motor_power3, byte Motor_muki);
void Slave_Send_hassya(byte hassya_sorenoid);
void Gyro_cal(byte turning, byte stop_Gyro, byte Gyro_reset);
void cal_nae(byte zyouge, byte kankaku, byte oshidasi, byte kaisyuu);

byte controller_SHARE() ;
byte controller_OPTIONS() ;
byte controller_closs_up() ;
byte controller_closs_right() ;
byte controller_closs_down() ;
byte controller_closs_left();
byte controller_bottun_L2() ;
byte controller_bottun_R2() ;
byte controller_bottun_L1() ;
byte controller_bottun_R1() ;
byte controller_bottun_sankaku();
byte controller_bottun_maru() ;
byte controller_bottun_batu() ;
byte controller_bottun_sikaku();
byte controller_right_X() ;
byte controller_right_Y() ;
byte controller_left_X() ;
byte controller_left_Y() ;
byte Motor_power_omuni_1() ;
byte Motor_power_omuni_2() ;
byte Motor_power_omuni_3() ;
byte Motor_power_omuni_4() ;
byte Motor_power_omuni_Send_muki() ;
byte toggle_Send_R1() ;
byte toggle_Send_R2() ;
byte toggle_Send_L2() ;
byte toggle_Send_batu() ;
byte toggle_Send_L1();
byte toggle_Send_sankaku();
byte toggle_Send_sikaku();
byte click_Send_maru();
byte Servo_kakudo();
byte Motor_power_shoukou();
byte Motor_muki_shoukou();
byte omuni_power1_zyouge();
byte omuni_power2_zyouge();
byte omuni_power3_zyouge();
byte omuni_power4_zyouge();
byte omuni_muki_zyouge();
byte airsirinder_zyouge();
int Gyro_power();
byte reset_move();
byte Motor_power_nae_zyouge_return();
byte Motor_power_nae_zengo_return();
byte Motor_power_kankaku_return();
byte Motor_muki_return();