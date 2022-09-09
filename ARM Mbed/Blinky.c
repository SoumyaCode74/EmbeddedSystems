#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

void down_to_up(int delay);
void up_to_down(int delay);
void all_on(void);
void all_off(void);

int main() {
    while (1) {
        down_to_up(250);
        all_on();
        wait_ms(250);
        all_off();
        wait_ms(250);
        all_on();
        wait_ms(250);
        all_off();
        wait_ms(250);
        all_on();
        wait_ms(250);
        all_off();
        wait_ms(250);
        all_on();
        wait_ms(250);
        all_off();
        wait_ms(250);
        up_to_down(250);
        
    }
}

void down_to_up(int delay){
    led1 = !led1;
        printf("Blink! LED 1 is now %d\n", led1.read());

        wait_ms(delay);
        
        led2 = !led2;
        printf("Blink! LED 2 is now %d\n", led2.read());

        wait_ms(delay);
        
        led3 = !led3;
        printf("Blink! LED 3 is now %d\n", led3.read());

        wait_ms(delay);
        
        led4 = !led4;
        printf("Blink! LED 4 is now %d\n", led4.read());

        wait_ms(delay);
}
void up_to_down(int delay){
    led4 = !led4;
    printf("Blink! LED 4 is now %d\n", led4.read());

    wait_ms(delay);
    
    led3 = !led3;
    printf("Blink! LED 3 is now %d\n", led3.read());

    wait_ms(delay);
    
    led2 = !led2;
    printf("Blink! LED 2 is now %d\n", led2.read());

    wait_ms(delay);
    
    led1 = !led1;
    printf("Blink! LED 1 is now %d\n", led1.read());

    wait_ms(delay);
    
}
void all_on(void){
    led1 = 1;
    led2 = 1;
    led3 = 1;
    led4 = 1;
}
void all_off(void){
    led1 = 0;
    led2 = 0;
    led3 = 0;
    led4 = 0;
}