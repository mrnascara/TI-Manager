#include <ti/screen.h>
#include <ti/getcsc.h>
#include <stdlib.h>
#include <sys/basicusb.h>
#include <ti/getkey.h>
#include "USB.h"
void USBSTUFF(){
/* Clear the homescreen */
if (k_5)
{
    /*stuff from the original app*/
 os_ClrHome();

    /* Print a string */
    os_PutStrFull("This program will disable the usb timers & controllers.");

    uint16_t os_GetKey(void);
    os_ClrHome();
    os_PutStrFull("press any key to continue....");

   uint16_t os_GetKey(void);
    /*disables usb timers*/
    void boot_USBDisableTimers(void);

    /* notify usb timers are off */
    ;os_PutStrFull("usb timers off.");
    
}

   
}
