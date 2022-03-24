/**************************************************************************//**
*
* @copyright (C) 2019 Nuvoton Technology Corp. All rights reserved.
*
* SPDX-License-Identifier: Apache-2.0
*
* Change Logs:
* Date            Author       Notes
* 2020-12-12      Wayne        First version
*
******************************************************************************/

#include <rtconfig.h>
#include <rtdevice.h>
#include <drv_gpio.h>


/* defined the LED_R pin: PB13 */
#define LED_R   NU_GET_PININDEX(NU_PB, 13)

/* defined the LED_Y pin: PB8 */
#define LED_Y   NU_GET_PININDEX(NU_PB, 8)


int main(int argc, char **argv)
{
    /* set LED_R pin mode to output */
    rt_pin_mode(LED_R, PIN_MODE_OUTPUT);

    /* set LED_Y pin mode to output */
    rt_pin_mode(LED_Y, PIN_MODE_OUTPUT);

    while (1)
    {
        rt_pin_write(LED_Y, PIN_LOW);
        rt_thread_mdelay(100);
        rt_pin_write(LED_R, PIN_LOW);
        rt_thread_mdelay(100);

        rt_pin_write(LED_Y, PIN_HIGH);
        rt_thread_mdelay(100);
        rt_pin_write(LED_R, PIN_HIGH);
        rt_thread_mdelay(100);


    }

    return 0;
}
