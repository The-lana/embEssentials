#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

    // Insert code
    DDRD = DDRD |(1<<PD2);  //set D2 as output
   // DDRB = DDRB |(1<<PB0);
    DDRD = (DDRD & ~(1<<PD1)); //set D1 as input
    DDRC = (DDRC & ~(1<<PC6));  //set D0 as input
    PORTD =(PORTD | (1<< PD1));     //set bit(to set value of d1 to pullup
    PORTC =(PORTC | (1<< PC6));     //set bit to set value of C6 to pullup
    while(1)
    {

        if(!(PIND&(1<<PD1))&&(!(PINC&(1<<PC6))))
        {
      PORTD|=(1<<PD2);
      _delay_ms(250);
        }
        else
        {
            PORTD&=(~(1<<PD2));
            _delay_ms(250);
        }
    }
    ;

    return 0;
}
