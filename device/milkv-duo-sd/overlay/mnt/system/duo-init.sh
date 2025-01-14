#!/bin/sh

insmod /mnt/system/ko/8723ds.ko
insmod /mnt/system/ko/gpio_backlight.ko
insmod /mnt/system/ko/ads7846.ko
insmod /mnt/system/ko/fb_ili9341.ko

mount devpts /dev/pts -t devpts

wpa_supplicant -i wlan0 -c /etc/wpa_supplicant.conf &

exit 0

# Set Pin-29(GP22) to GPIO
# devmem 0x0502707c 32 0x111
# devmem 0x03001068 32 0x3

# Set Pin-19(GP14) to GPIO
# duo-pinmux -w GP14/GP14 > /dev/null

# Insmod PWM Module
# insmod /mnt/system/ko/cv180x_pwm.ko

