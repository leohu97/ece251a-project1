//-----------------------------------------------------------------------------
// main.c
//-----------------------------------------------------------------------------
// Copyright 2015 Silicon Laboratories, Inc.
// http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt
//
// Program Description:
//
// Use scope to observe DAC outputs on P3.0 and P3.1.
// Move joystick left/right to change functions.
// Move joystick up/down to change frequency.
//
// Resources:
//   SYSCLK - 24.5 MHz HFOSC0 / 1
//   DAC0
//   DAC1
//   DAC2
//   DAC3
//   ADC0   - 10-bit, VREF = VDD (3.3 V)
//   SPI0   - 1 MHz
//   Timer2 - 2 MHz (SPI CS delay)
//   Timer3 - 1 kHz (1 ms tick)
//   Timer4 - 150 kHz interrupt (DAC update trigger)
//   P0.2   - Push button (kill splash screen)
//   P0.3   - Push button (kill splash screen)
//   P0.6   - SPI SCK
//   P1.0   - SPI MOSI
//   P1.7   - ADC input / Joystick (analog voltage divider)
//   P2.6   - SPI CS (Active High)
//   P3.0   - DAC0 output
//   P3.1   - DAC1 output
//   P3.4   - Display enable
//
//-----------------------------------------------------------------------------
// How To ms: EFM8BB3 STK
//-----------------------------------------------------------------------------
// 1) Place the switch in "AEM" mode.
// 2) Connect the EFM8BB3 STK board to a PC using a mini USB cable.
// 3) Compile and download code to the EFM8BB3 STK board.
//    In Simplicity Studio IDE, select Run -> Debug from the menu bar,
//    click the Debug button in the quick menu, or press F11.
// 4) Run the code.
//    In Simplicity Studio IDE, select Run -> Resume from the menu bar,
//    click the Resume button in the quick menu, or press F8.
// 5) The Function Generator demo should start.
//    Press any button, move joystick, or wait 4 sec to kill splash screen
//    Use scope to observe DAC output on P3.0 and P3.1.
//    Move the joystick left/right to change functions.
//    Move the joystick up/down to increase/decrease the frequency.
//
// Target:         EFM8BB3
// Tool chain:     Generic
//
// Release 0.1 (ST)
//    - Initial Revision
//    - 15 JUL 2015
//

/////////////////////////////////////////////////////////////////////////////
// Includes
/////////////////////////////////////////////////////////////////////////////

#include "bsp.h"
#include "InitDevice.h"
#include "disp.h"
#include "function_generator.h"
#include "render.h"
#include  <stdio.h>


//---------------------------------------------------------------------------
// main() Routine
// --------------------------------------------------------------------------
int main(void)
{
	static SI_SEGMENT_VARIABLE(line[16]=0, uint8_t, RENDER_LINE_SEG);
	int y;
	int z;
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	long t;
	int time=1730;
char timer[9];


timer[8]=0;
timer[2]=58;
timer[5]=46;
	enter_DefaultMode_from_RESET();
  // Enable all interrupts
  IE_EA = 1;
  DISP_Init();
  while (1){

	  DISP_ClearLine(50,0xFF);
	  DISP_ClearLine(60,0xFF);


  for(a=0;a<10;a++)
  	  {
	 timer[0]=a+48;
	 for(b=0;b<10;b++)
	 	 {
		 timer[1]=b+48;
		 for(c=0;c<6;c++)
		 	 {
			 timer[3]=c+48;
			 for(d=0;d<10;d++)
			 	 {
				 timer[4]=d+48;
				 for(e=0;e<10;e++)
				 	 {
					 timer[6]=e+48;
					 for(f=0;f<10;f++)
					 	 {
						 timer[7]=f+48;
						 for (y = 0; y < FONT_HEIGHT; y++)
						 	 {
							 RENDER_StrLine(line, 30, y, timer);
							 DISP_WriteLine(4+y, line);
						 	 }

						 	 for(t=0;t<time;t++)
							 {
							 _nop_;
							 }
					 	 }
				 	 	 }
				 	 }
			 	 }
		 	 }
	 	 }
  }
}







