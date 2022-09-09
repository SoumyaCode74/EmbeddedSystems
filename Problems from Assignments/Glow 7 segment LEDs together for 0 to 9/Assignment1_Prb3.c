#define SHORT_DELAY 2
#define LONG_DELAY 1000
#define LOOP_TIMES LONG_DELAY/(4*SHORT_DELAY)
#define TIMES 200
#define ZERO   0x3F
#define ONE    0x06
#define TWO    0x5B
#define THREE  0x4F
#define FOUR   0x66
#define FIVE   0x6D
#define SIX    0x7D
#define SEVEN  0x07
#define EIGHT  0x7F
#define NINE   0x6F

unsigned char digit[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
void Init(void);
void Glow(unsigned char, unsigned char);

void main() {
     unsigned char i, j;
     Init();
     while(1)
     {
             i = 0;
             while(i < 10)
             {
                     /*j = 1;
                     while (j <= TIMES)
                     { Glow(4, i);
                       delay_ms(SHORT_DELAY);
                       Glow(8, i);
                       delay_ms(SHORT_DELAY);
                       j++;
                     }
                     PORTD = 0;
                     delay_ms(LONG_DELAY);*/
                   
                   for(j = 1; j <= LOOP_TIMES; j++)
                   {     //first segment
                         Glow(4, digit[i]);
                         delay_ms(SHORT_DELAY);
                         //second segment
                         Glow(8, digit[i]);
                         delay_ms(SHORT_DELAY);
                         //third segment
                         Glow(16, digit[i]);
                         delay_ms(SHORT_DELAY);
                         //fourth segment
                         Glow(32, digit[i]);
                         delay_ms(SHORT_DELAY);
                   }
                   i++;
             }
                         /*for(i = 1; i <= 250; i++)
                         {PORTA = 0x04;             //first segment
                         Glow(0);
                         delay_ms(SHORT_DELAY);
                         PORTA = PORTA << 1;       //second segment
                         Glow(0);
                         delay_ms(SHORT_DELAY);
                         PORTA = PORTA << 1;       //third segment
                         Glow(0);
                         delay_ms(SHORT_DELAY);
                         PORTA = PORTA << 1;       //fourth segment
                         Glow(0);
                         delay_ms(SHORT_DELAY);}
                         for(i = 1; i <= 250; i++)
                         {PORTA = 0x04;             //first segment
                         Glow(1);
                         delay_ms(SHORT_DELAY);
                         PORTA = PORTA << 1;       //second segment
                         Glow(1);
                         delay_ms(SHORT_DELAY);
                         PORTA = PORTA << 1;       //third segment
                         Glow(1);
                         delay_ms(SHORT_DELAY);
                         PORTA = PORTA << 1;       //fourth segment
                         Glow(1);
                         delay_ms(SHORT_DELAY);}*/
     
     }
     
}

void Init(void)
{
     TRISA = 0;
     TRISD = 0;
}

void Glow(unsigned char enable,unsigned char digit)
{
     PORTA = enable;
     switch(digit)
     {
            case 0:
                 PORTD = ZERO;
                 break;
            case 1:
                 PORTD = ONE;
                 break;
            case 2:
                 PORTD = TWO;
                 break;
            case 3:
                 PORTD = THREE;
                 break;
            case 4:
                 PORTD = FOUR;
                 break;
            case 5:
                 PORTD = FIVE;
                 break;
            case 6:
                 PORTD = SIX;
                 break;
            case 7:
                 PORTD = SEVEN;
                 break;
            case 8:
                 PORTD = EIGHT;
                 break;
            case 9:
                 PORTD = NINE;
                 break;
            default:
                 ;
     }
}