#include <avr/io.h>
#include <util/delay.h>


int main(void)
{

    // Insert code
       DDRD &= ~(1<<0);
       PORTD |= (1<<0);
       DDRD &= ~(1<<2);
       PORTD |= (1<<2);
       DDRD |= (1<<1);
       DDRD |= (1<<3);

       while(1)
       {
        if (!(PIND & 1))
         {
            PORTD |= (1<<1);
            _delay_ms(5000);
         }
          else if(!(PIND & 4))
          {
            PORTD |= (1<<3);
          }
       }

    return 0;
}
