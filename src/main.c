/*
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

    // Insert code
    DDRB = DDRB |(1<<PB0);   //set B0 as output
    DDRD = (DDRD & ~(1<<PD1));  //set D1 as input
    PORTD =(PORTD | (1<< PD1));        //set bit(to set value of d1 to pullup
    while(1)
    {
        if(!(PIND&(1<<PD1)))
        {
      PORTB|=(1<<PB0);
      _delay_ms(250);
        }
        else
        {
            PORTB&=(~(1<<PB0));
            _delay_ms(250);
        }
    }
    ;

    return 0;
}
