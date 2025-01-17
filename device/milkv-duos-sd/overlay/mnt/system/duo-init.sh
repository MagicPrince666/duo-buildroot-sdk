#!/bin/sh

insmod /mnt/system/ko/gpio_backlight.ko
insmod /mnt/system/ko/ads7846.ko
insmod /mnt/system/ko/fb_ili9341.ko
insmod /mnt/system/ko/aic8800_bsp.ko
insmod /mnt/system/ko/aic8800_fdrv.ko
insmod /mnt/system/ko/aic8800_btlpm.ko

wpa_supplicant -i wlan0 -c /etc/wpa_supplicant.conf &

# Set Pin-29(GP22) to GPIO
# devmem 0x0502707c 32 0x111
# devmem 0x03001068 32 0x3

# Set Pin-19(GP14) to GPIO
# duo-pinmux -w GP14/GP14 > /dev/null

# Insmod PWM Module
# insmod /mnt/system/ko/cv180x_pwm.ko

