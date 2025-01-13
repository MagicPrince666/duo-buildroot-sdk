#include <stdint.h>
#include <string.h>
#include "hal_pinmux.h"

void pinmux_init(void)
{
    hal_pinmux_config(PINMUX_UART0);
}
