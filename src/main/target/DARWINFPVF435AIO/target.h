/*
 * This file is part of INAV.
 * Custom Target for DarwinFPV F435 45A AM32 AIO (with PB11 & PA8 Servo support)
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "DF35"
#define USBD_PRODUCT_STRING     "DarwinFPV F435 AIO"

#define LED0                    PC13
#define LED1                    PC14
#define LED0_INVERTED
#define LED1_INVERTED

#define BEEPER                  PC15
#define BEEPER_INVERTED

// *************** Gyro & ACC **********************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7
#define SPI1_NSS_PIN            PA4

// ICM42605/ICM42688P
#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN      CW0_DEG
#define ICM42605_SPI_BUS        BUS_SPI1
#define ICM42605_CS_PIN         SPI1_NSS_PIN

// *************** I2C/Baro/Mag/EXT *********************
#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C2_SCL                PH2        // SCL pad
#define I2C2_SDA                PH3        // SDA pad
#define USE_I2C_PULLUP

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C2
#define USE_BARO_BMP280
#define USE_BARO_DPS310

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C2
#define USE_MAG_ALL
#define DEFAULT_I2C_BUS         BUS_I2C2

// *************** OSD *****************************
#define USE_SPI_DEVICE_2 
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15
#define SPI2_NSS_PIN            PB12

#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          SPI2_NSS_PIN

// *************** SD/BLACKBOX **************************
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_SPI_BUS          BUS_SPI1
#define M25P16_CS_PIN           PB5

#define USE_FLASH_W25N01G
#define W25N01G_SPI_BUS         BUS_SPI1
#define W25N01G_CS_PIN          PB5

// *************** UART *****************************
#define USE_VCP
#define USE_USB_DETECT

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PB0
#define UART2_RX_AF             6
#define UART2_TX_PIN            PA2
#define UART2_TX_AF             7

// UART3_TX (PB11) is disabled to use as Servo output
#define USE_UART3
#define UART3_RX_PIN            PB10
#define UART3_TX_PIN            NONE

#define USE_UART5
#define UART5_RX_PIN            PB8
#define UART5_TX_PIN            PB9

#define USE_UART7
#define UART7_RX_PIN            PB3
#define UART7_TX_PIN            PB4

#define SERIAL_PORT_COUNT       6

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART7

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1

#define ADC1_DMA_STREAM             DMA2_CHANNEL1
#define ADC_CHANNEL_1_PIN           PA0
#define ADC_CHANNEL_2_PIN           PA1
#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2

#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_CURRENT_METER | FEATURE_TELEMETRY | FEATURE_VBAT | FEATURE_OSD)

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff
#define TARGET_IO_PORTE         BIT(2)
#define TARGET_IO_PORTH         BIT(1)|BIT(2)|BIT(3)

#define MAX_PWM_OUTPUT_PORTS        6
#define USE_DSHOT
#define USE_ESC_SENSOR
