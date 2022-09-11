//************************************************************
//
 //Read the analog voltage (0 to 5V) at RA0 and display the voltage in the range of 0 to 15V
#define VREF 15
#define RES 1023
#define LOW 1050
#define HIGH 1350
#define BITSHIFT 8

void Init(void);
void LCD_Command(unsigned char);
void Lcd_Data(unsigned char);
void LCDOutput(unsigned int);
void Delay(unsigned int);
unsigned char k[10];
unsigned int HiValue,LoValue,Value,BeforePoint,AfterPoint,CheckPoint,rem;
unsigned long Voltage;
void LCD_OutputWord(unsigned char, char *);
int AfterDecimal(unsigned int);
void main()
{
 Init();                                                    //Initialization
 while(1)
 {
  ADCON0=0x81;                                  //Configure the A/D control registers
  ADCON0|=0x04;                                 //Start ADC conversion
  while(ADCON0&0x04);                     //Wait for conversion to complete
  LoValue = ADRESL;                         //Read the low 8bit value
  HiValue = ADRESH;                         //Read the upper 8 bit value
  Value=((unsigned int)HiValue<<BITSHIFT)+(unsigned int)LoValue;      //Load the 10bit result into Value
  Voltage = (Value*VREF);                //Scale the value to the range 0 to 48
  BeforePoint = Voltage / RES;
  rem = Voltage % RES;
  AfterPoint  = AfterDecimal(rem);
  CheckPoint = ((AfterPoint/100)) + BeforePoint*100;

  if (BeforePoint < 10)
  {
   LCD_Command(0x80);
   Lcd_Data(0x20);
   LCD_Command(0x81);
  }
  else
  {
   LCD_Command(0x80);
  }
  LCDOutput(BeforePoint);                      //LCD display function is called
  Delay(1000);
  LCD_Command(0x82);
  Lcd_Data('.');
  Delay(1000);
  LCD_Command(0x83);
  if (rem > 9 && rem < 100)
  {
   LCD_Data(0x30);
   LCD_Command(0x84);
  }
  else if(rem < 10)
  {
   LCD_Data(0x30);
   LCD_Command(0x84);
   LCD_Data(0x31);
   LCD_Command(0x85);
  }
  LCDOutput(AfterPoint);                      //LCD display function is called
  Delay(1000);
  LCD_Command(0x88);
  Lcd_Data('V');
  Delay(1000);
  if(CheckPoint > HIGH)
        {
          LCD_OutputWord(0xC0,"HIGH VOLTAGE");
        }
  else if(CheckPoint < LOW)
        {
          LCD_OutputWord(0xC0, "LOW VOLTAGE");
        }
  else
        {
          LCD_OutputWord(0xC0, "  NORMAL   ");
        }
   delay_ms(100);
  
  }
}
void Init(void)                                 // Initialization
{
 TRISA = 0X01;                             // PORTA RA0is made as input
 TRISD = 0X00;                             //PORTD is made as output
 TRISC = 0X00;                             //PORTC is made as output
 TRISE = 0x00;
 ADCON0 = 0X81;                       //Configure the A/D control registers
 ADCON1 = 0X8E;
 LCD_Command(0x38);              // Initialize the 2 lines and 5*7 Matrix LCD
 LCD_Command(0x38);
 LCD_Command(0x38);
 LCD_Command(0x38);
 LCD_Command(0x06);               //Increment cursor (shift cursor to right)
 LCD_Command(0x0C);               //Display on, cursor off
 LCD_Command(0x01);                //Clear display screen

//*define the output function*// *BCD conversion*//
}
void LCDOutput(unsigned int i)
 {
  unsigned char n,s=0,j=1;
  unsigned int m;
  m=i;                                //Assign formal argument to other variable
  while(m!=0)                   //Check that value is zero or not
  {
   s=m-(m/10)*10;             //Store the remainder of m/10 in s
   k[j]=s;                            //Move s to an array
   j++;                                //Increment the array address
   m=m/10;                        //Divide the value by 10 store the quotient in m
  }
 k[j]='\0';                         //Assign the null value at the end of the array
 j=j-1;
 if (j == 0)
 {
  Lcd_Data(0x30);
 }
 while(j != 0)                              //Decrement the array address
 {
   n = 0x30 + k[j];
   Lcd_Data(n);
   j--;
 }
}
//*define the command function*//
//LCD connections
 //RS...RC3
 //EN...RC0
void Lcd_Command(unsigned char i)
{
 PORTE&=~0x04;                 //RS=0
 PORTD=i;
 PORTE |= 0x02;                   // RS=0,R/W=0,EN=1
 PORTE&= ~0x02;                // RS=0,R/W=0,EN=0
 Delay(100);
}
void Lcd_data(char i)
{
 PORTE|=0x04;                    //RS=1
 PORTD=i;
 PORTE|=0x02;                          // RS=1,R/W=0,EN=1
 PORTE&=~0x02;                     // RS=0,R/W=0,EN=0
 Delay(100);
}

void Delay(unsigned int DelayCount)
{
 while(--DelayCount);
}
void LCD_OutputWord(unsigned char start_address, char *word)
{

     int i;
     LCD_Command(start_address);
     for(i = 0; i < 100; i++)
     {
         LCD_Data(word[i]);
         delay_ms(20);
         LCD_Command(start_address + i + 1);
         if (word[i] == '\0')
            break;
     }
}
int AfterDecimal(unsigned int d)
{
    char i,q = 0;
    int afterpoint;
    i = 1;
    while(i <= 4)
    {
        q = (d * 10) / RES;
        d = (d * 10) % RES;
        afterpoint = (afterpoint*10) + q;
        i += 1;
    }
    return afterpoint;
}