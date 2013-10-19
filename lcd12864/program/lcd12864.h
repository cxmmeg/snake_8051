#ifndef __REG51_H__
#define __REG51_H__

sbit RS=P2^0;
sbit RW=P2^1;
sbit EN=P2^2;

#define LCDb_BASCMD   0x30     // ����ָ�
#define LCDb_CLS   0x01     // ����
#define LCDb_HOME   0x02     // ��ַ����ԭ�㣬���ı�DDRAM����
#define LCDb_ENTRY   0x06     // �趨����ģʽ�����ӣ���Ļ���ƶ�
#define CurserRight 0x04

#define LCDb_CURON     0x0E     // ��ʾ���
#define LCDb_CURFLA   0x0F     // �򿪹����˸
#define LCDb_C2L   0x10     // �������
#define LCDb_C2R   0x14     // �������
#define LCDb_D2L   0x18     // ��Ļ����
#define LCDb_D2R   0x1C     // ��Ļ����
#define LCDb_ON     0x0C     // ����ʾ
#define LCDb_OFF   0x08         // �ر���ʾ

#define LCDb_EXTCMD1   0x34     // ����ָ����رջ�ͼ��ʾ
#define LCDb_EXTCMD2   0x36     // ����ָ����򿪻�ͼ��ʾ
#define LCDb_EXTCLS   0x01     // ����
#define LCDb_REVL1   0x04     // ���Ե�1��
#define LCDb_REVL2   0x05     // ���Ե�2��
#define LCDb_REVL3   0x06     // ���Ե�3��
#define LCDb_REVL4   0x07     // ���Ե�4��
#define sleep   0x08     // ˯��ģʽ
#define Dissleep   0x0C     // ����˯��ģʽ

//Basic functions
extern void delayus(unsigned int t);
extern void lcd_write_command(unsigned char command);//write command to LCD
extern void lcd_write_data(unsigned char RWdata);//write data to LCD
extern unsigned char lcd_read_data(void);//read data from LCD
extern void lcd_init(void);//LCD initialization
extern void first_page(void);//clear screen

//string functions
extern void display_string(unsigned char line,unsigned char space,unsigned char *string);//display string (default string function.)
extern void display_string_58(unsigned char x,unsigned char y,unsigned char *string,unsigned int drgree);//display ASCII for 5*8 size

//figure functions
extern void set_dot(unsigned char x,unsigned char y);
extern void clear_dot(unsigned char x,unsigned char y);
//basic shapes
extern void draw_line(unsigned char x1,unsigned char y1,unsigned char x2,unsigned char y2);//draw a line
extern void draw_box(unsigned char x,unsigned char y,unsigned char num_x,unsigned char num_y,bit fill);//draw a box
extern void draw_frame(void);//draw the frame
extern void draw_circle(unsigned char x,unsigned char y,unsigned char r,bit fill);//draw circle
//draw picture
//one line picture
extern void draw_8bits(unsigned char x,unsigned char y,unsigned char data8bit);//draw 8 bit in x axis
extern void draw_8bits90(unsigned char x,unsigned char y,unsigned char data8bit);//draw 8 bit in x axis	but in 90 degree change system
extern void draw_8bits180(unsigned char x,unsigned char y,unsigned char data8bit);//draw 8 bit in x axis but in 180 degree change system
extern void draw_8bits270(unsigned char x,unsigned char y,unsigned char data8bit);//draw 8 bit in x axis but in 270 degree change system
//mutiple line s picture
extern void draw_picture(unsigned char x,unsigned char y,unsigned char x_l,unsigned char y_l,unsigned char *picture);//draw a picture
extern void draw_picture90(unsigned char x,unsigned char y,unsigned char x_l,unsigned char y_l,unsigned char *picture);//draw a picture in 90 degree
extern void draw_picture180(unsigned char x,unsigned char y,unsigned char x_l,unsigned char y_l,unsigned char *picture);//draw a picture in 180 degree
extern void draw_picture270(unsigned char x,unsigned char y,unsigned char x_l,unsigned char y_l,unsigned char *picture);//draw a picture in 270 degree
#endif