#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <pthread.h>
#include "buttons.h"
#include "camera.h"
#include "device.h"
#include "display.h"
#include "log.h"
#include "fonts/fonts.h"
#include "client.h"


void *sent_timeout(void *time)
{
    /* PUT CODE HERE */
}

void *send_image(void *arg)
{
    /* PUT CODE HERE */
}

void intHandler(int dummy)
{
    log_info("Ctl-C caught! Stopping...");
    display_exit();
    exit(0);
}

int main(void)
{

    signal(SIGINT, intHandler);


    while (true)
    {
        delay_ms(200);


        if (button_center() == 0)
        {

            while (button_center() == 0)
            {
                delay_ms(1);
            }
        }

        if (button_up() == 0)
        {

            while (button_up() == 0)
            {
                delay_ms(1);
            }
        }

        if (button_down() == 0)
        {
           

            while (button_down() == 0)
            {
                delay_ms(1);
            }
        }

        if (button_left() == 0)
        {
            while (button_down() == 0)
            {
                delay_ms(1);
            }
        }

        if (button_right() == 0)
        {
            while (button_down() == 0)
            {
                delay_ms(1);
            }
        }

        // Draw status bar
        /* PUT CODE HERE */
    }
}

