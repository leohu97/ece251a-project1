//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <SI_EFM8BB3_Register_Enums.h>                  // SFR declarations
#include "InitDevice.h"

// $[Generated Includes]
// [Generated Includes]$
SI_SBIT(LED0, SFR_P1, 4);
SI_SBIT(LED1, SFR_P1, 5);
SI_SBIT(LED2, SFR_P1, 6);
SI_SBIT(SW0, SFR_P0, 2);
SI_SBIT(SW1, SFR_P0, 3);

//#define DISP_BC_DRIVEN   0             // 0 = Board Controller drives display
//#define DISP_EFM8_DRIVEN 1             // 1 = EFM8 drives display
//-----------------------------------------------------------------------------
// main() Routine
// ----------------------------------------------------------------------------
void main(void) {
	// Call hardware initialization routine
	enter_DefaultMode_from_RESET();


	while(1) //infinite loop
		  {
			  //LED0=1; //Green light on 0
			  //LED1=1; //Blue light on 0
			  //LED2=1; //Red light on 0
			  long lkj = 0;
			  double jkl = 150;

while(1){
	 	 	  //LED0=1;
	 	 	  //LED1=1;
			  if(SW0==0){
					  jkl=jkl+10;
					  //LED1=0;
				  }
			  if(SW1==0){
					  jkl=jkl-10;
					  //LED2=0;
				  }
			  for(lkj=0;lkj<jkl;lkj++){

			  }
			  LED0=0;
			  for(lkj=0;lkj<jkl;lkj++){

			  }
			  LED0=1;


		  }}
	}
// $[Generated Run-time code]
// [Generated Run-time code]$

