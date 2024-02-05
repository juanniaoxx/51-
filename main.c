#include "reg52.h"
 
typedef unsigned int u16;	 
typedef unsigned char u8;
 
void delay(u16 t)
{
    u16 x,y;
	   for(x=0;x<t;x++)
	   for(y=0;y<330;y++);
}
void main()
{
	u16 i;
	while(1)
	{	    
		for(i=0;i<8;i++)
		{
			P2=~(0x01<<i);	
			delay(300); 
		}   
        if(i==8)
            i=0;	
    }
}
