#include <avr/io.h>
#include <util/delay.h>

void delay_ms(unsigned short del)
{
  while(del>0){ _delay_ms(1); del--; }
}

int main(void)
{
  DDRC|=0xF4; DDRD|=0x7F; DDRB=0xFF;
  
  while(1){
    PORTC&=~0xF4; PORTD&=~0x7F; PORTB&=~0xFF;
    PORTC|= 0x04; PORTD|= 0x02; PORTD|= 0x08; PORTD|= 0x20; PORTB|= 0x01;
    PORTB|= 0x04; PORTB|= 0x10; PORTB|= 0x40; PORTC|= 0x80; PORTC|= 0x20; delay_ms(10000);

    PORTC&=~0xF4; PORTD&=~0x7F; PORTB&=~0xFF;
    PORTD|= 0x01; PORTD|= 0x04; PORTD|= 0x10; PORTD|= 0x40; PORTB|= 0x02;
    PORTB|= 0x08; PORTB|= 0x20; PORTB|= 0x80; PORTC|= 0x40; PORTC|= 0x10; delay_ms(10000);
  }
  return 0;
}
