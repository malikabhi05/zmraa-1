#pragma once

#if defined(CONFIG_BOARD_ARDUINO_101)
#define CONFIG_MRAA_PIN_COUNT 20
#define CONFIG_MRAA_GPIO_COUNT 20
#define CONFIG_MRAA_AIO_COUNT 0
#define CONFIG_MRAA_I2C_COUNT 1
#define CONFIG_MRAA_PWM_COUNT 2
#define CONFIG_MRAA_SPI_COUNT 1
#define CONFIG_MRAA_UART_COUNT 2
#define CONFIG_MRAA_PINMUX_COUNT 1
#elif defined(CONFIG_BOARD_ARDUINO_101_SSS)
#define CONFIG_MRAA_PIN_COUNT 20
#define CONFIG_MRAA_GPIO_COUNT 20
#define CONFIG_MRAA_AIO_COUNT 6
#define CONFIG_MRAA_I2C_COUNT 1
#define CONFIG_MRAA_PWM_COUNT 2
#define CONFIG_MRAA_SPI_COUNT 1
#define CONFIG_MRAA_UART_COUNT 0
#define CONFIG_MRAA_PINMUX_COUNT 1
#elif defined(CONFIG_BOARD_QUARK_D2000_CRB)
#define CONFIG_MRAA_PIN_COUNT 20
#define CONFIG_MRAA_GPIO_COUNT 20
#define CONFIG_MRAA_AIO_COUNT 19
#define CONFIG_MRAA_I2C_COUNT 1
#define CONFIG_MRAA_PWM_COUNT 2
#define CONFIG_MRAA_SPI_COUNT 1
#define CONFIG_MRAA_UART_COUNT 1
#define CONFIG_MRAA_PINMUX_COUNT 1
#elif defined(CONFIG_BOARD_QUARK_SE_DEVBOARD)
#define CONFIG_MRAA_PIN_COUNT 49
#define CONFIG_MRAA_GPIO_COUNT 31
#define CONFIG_MRAA_AIO_COUNT 0
#define CONFIG_MRAA_I2C_COUNT 2
#define CONFIG_MRAA_PWM_COUNT 4
#define CONFIG_MRAA_SPI_COUNT 2
#define CONFIG_MRAA_UART_COUNT 1
#define CONFIG_MRAA_PINMUX_COUNT 1
#elif defined(CONFIG_BOARD_QUARK_SE_SSS_DEVBOARD)
#define CONFIG_MRAA_PIN_COUNT 50
#define CONFIG_MRAA_GPIO_COUNT 31
#define CONFIG_MRAA_AIO_COUNT 19
#define CONFIG_MRAA_I2C_COUNT 2
#define CONFIG_MRAA_PWM_COUNT 4
#define CONFIG_MRAA_SPI_COUNT 2
#define CONFIG_MRAA_UART_COUNT 1
#define CONFIG_MRAA_PINMUX_COUNT 1
#endif

