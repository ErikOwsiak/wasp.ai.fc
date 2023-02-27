/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

/*
   This file has been auto generated from unified-targets repo.

   The auto generation is transitional only, please remove this comment once the file is edited.
*/

#define FC_TARGET_MCU     STM32F745

#define BOARD_NAME        HGLRCF745
#define MANUFACTURER_ID   HGLR

#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_ICM20689
#define USE_ACC_SPI_ICM20689
#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500
#define USE_BARO_SPI_BMP280
#define USE_BARO_SPI_DPS310
#define USE_MAX7456
#define USE_SDCARD

#define BEEPER_PIN           PD15
#define MOTOR1_PIN           PB0
#define MOTOR2_PIN           PB1
#define MOTOR3_PIN           PE9
#define MOTOR4_PIN           PE11
#define RX_PPM_PIN           PA3
#define SONAR_TRIGGER_PIN    PB10
#define SONAR_ECHO_PIN       PB11
#define LED_STRIP_PIN        PD12
#define UART1_TX_PIN         PA9
#define UART3_TX_PIN         PB10
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PB11
#define UART6_RX_PIN         PC7
#define UART7_RX_PIN         PE7
#define LED0_PIN             PE0
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PC10
#define SPI4_SCK_PIN         PE2
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI3_MISO_PIN        PC11
#define SPI4_MISO_PIN        PE5
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define SPI3_MOSI_PIN        PC12
#define SPI4_MOSI_PIN        PE6
#define ADC_VBAT_PIN         PC3
#define ADC_RSSI_PIN         PC5
#define ADC_CURR_PIN         PC2
#define BARO_CS_PIN          PA1
#define SDCARD_CS_PIN        PE4
#define SDCARD_DETECT_PIN    PE3
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PD0
#define GYRO_2_EXTI_PIN      PE8
#define GYRO_1_CS_PIN        PA15
#define GYRO_2_CS_PIN        PA4
#define USB_DETECT_PIN       PC4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PE13, 1,  1) \
    TIMER_PIN_MAP( 1, PB0 , 2,  0) \
    TIMER_PIN_MAP( 2, PB1 , 2,  0) \
    TIMER_PIN_MAP( 3, PE9 , 1,  2) \
    TIMER_PIN_MAP( 4, PE11, 1,  1) \
    TIMER_PIN_MAP( 5, PD12, 1,  0) \
    TIMER_PIN_MAP( 6, PB10, 1,  0) \
    TIMER_PIN_MAP( 7, PB11, 1,  0) \
    TIMER_PIN_MAP( 8, PC6 , 2,  0) \
    TIMER_PIN_MAP( 9, PC7 , 2,  1) \
    TIMER_PIN_MAP(10, PA3 , 1,  0) \
    TIMER_PIN_MAP(11, PA2 , 3, -1) \



#define SPI4_TX_DMA_OPT     0
#define ADC1_DMA_OPT        1

//TODO #define GYRO_TO_USE FIRST
#define MAG_ALIGN DEFAULT
//TODO #define MAG_BUSTYPE I2C
#define MAG_I2C_INSTANCE (I2CDEV_2)
//TODO #define MAG_I2C_ADDRESS 0
//TODO #define MAG_SPI_DEVICE 0
//TODO #define BARO_BUSTYPE SPI
#define BARO_SPI_INSTANCE SPI1
#define BARO_I2C_INSTANCE (I2CDEV_0)
//TODO #define BARO_I2C_ADDRESS 0
//TODO #define ADC_DEVICE 1
//TODO #define BLACKBOX_DEVICE SDCARD
//TODO #define DSHOT_BURST OFF
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
//TODO #define IBATA_SCALE 400
#define BEEPER_INVERTED
//TODO #define BEEPER_OD OFF
#define BEEPER_PWM_HZ 0
//TODO #define SDCARD_DETECT_INVERTED ON
#define USE_SDCARD_SPI
#define SDCARD_SPI_INSTANCE SPI4
//TODO #define MAX7456_CLOCK NOMINAL
#define MAX7456_SPI_INSTANCE SPI2
//TODO #define MAX7456_PREINIT_OPU OFF
//TODO #define LED_INVERSION 0
//TODO #define DASHBOARD_I2C_BUS 2
//TODO #define DASHBOARD_I2C_ADDR 60
//TODO #define USB_MSC_PIN_PULLUP ON
#define FLASH_SPI_INSTANCE SPI0
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI3
//TODO #define GYRO_1_I2CBUS 0
//TODO #define GYRO_1_I2C_ADDRESS 0
#define GYRO_1_ALIGN CW90_DEG
#define USE_SPI_GYRO
#define GYRO_2_SPI_INSTANCE SPI1
//TODO #define GYRO_2_I2CBUS 0
//TODO #define GYRO_2_I2C_ADDRESS 0
#define GYRO_2_ALIGN DEFAULT
//TODO #define I2C1_PULLUP OFF
//TODO #define I2C1_OVERCLOCK ON
//TODO #define I2C2_PULLUP OFF
//TODO #define I2C2_OVERCLOCK ON
//TODO #define I2C3_PULLUP OFF
//TODO #define I2C3_OVERCLOCK ON
//TODO #define I2C4_PULLUP OFF
//TODO #define I2C4_OVERCLOCK ON
//TODO #define MCO2_ON_PC9 OFF
