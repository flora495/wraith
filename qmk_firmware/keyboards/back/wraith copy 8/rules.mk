# This file intentionally left blank
SERIAL_DRIVER = vendor

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360

#OLED_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

#LTO_ENABLE = yes
#I2C_DRIVER_REQUIRED = yes

#Add trackball.c to the compilation target.
SRC += trackball.c