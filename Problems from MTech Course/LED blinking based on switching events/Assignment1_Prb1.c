#define DELAY 1000

unsigned char switchvalue;
void Init(void);
void blink(unsigned char);

void main() {
     Init();
     while(1)
     {
//        switchvalue = TRISB - PORTB;
          switchvalue = TRISB & ~PORTB;
        switch(switchvalue){
                      case 1:
                           blink(0xC0);
                           break;
                      case 2:
                           blink(0x03);
                           break;
                      case 4:
                           blink(0xE7);
                           break;
                      default:
                           blink(0x00);
                      }
     }
}
void Init(void){
//OSCCON = 0x60;       //INTRC at 4 MHz, register present in PIC16F87/88
TRISB = 7;           //RB0, RB1, RB2 as digital inputs
TRISD = 0;           //PORTD as outputs
}
void blink(unsigned char portval){
     PORTD = portval;
     delay_ms(DELAY);
     PORTD = 0;
     delay_ms(DELAY);
}