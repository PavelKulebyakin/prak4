
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	LED[0] = 0; LED[1] = 0; LED[2] = 0; LED[3] = 0; i = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	if(!blink){
		if(LED_Buttons[0]) LED[0] = 1;
		else LED[0] = 0;
		if(LED_Buttons[1]) LED[1] = 1;
		else LED[1] = 0;
		if(LED_Buttons[2]) LED[2] = 1;
		else LED[2] = 0;
		if(LED_Buttons[3]) LED[3] = 1;
		else LED[3] = 0;
	}
	else{
		if(i%2 == 0) LED[0] = !LED[0];
		if(i%3 == 0) LED[1] = !LED[1];
		if(i%4 == 0) LED[2] = !LED[2];
		if(i%5 == 0) LED[3] = !LED[3];
	}
	i ++; 
}

void _EXIT ProgramExit(void)
{

}

