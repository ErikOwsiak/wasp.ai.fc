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

#define BOARD_NAME        FPVM_BETAFLIGHTF7
#define MANUFACTURER_ID   FPVM

#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500
#define USE_MAX7456

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
#define UART2_TX_PIN         PA2
#define UART3_TX_PIN         PB10
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PB11
#define UART6_RX_PIN         PC7
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
#define CAMERA_CONTROL_PIN   PC8
#define ADC_VBAT_PIN         PC3
#define ADC_RSSI_PIN         PC5
#define ADC_CURR_PIN         PC2
#define BARO_CS_PIN          PA1
#define FLASH_CS_PIN         PE4
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PD0
#define GYRO_2_EXTI_PIN      PE8
#define GYRO_1_CS_PIN        PA4
#define GYRO_2_CS_PIN        PA15
#define USB_DETECT_PIN       PC4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PC8 , 2,  1) \
    TIMER_PIN_MAP( 1, PE13, 1,  1) \
    TIMER_PIN_MAP( 2, PB0 , 2,  0) \
    TIMER_PIN_MAP( 3, PB1 , 2,  0) \
    TIMER_PIN_MAP( 4, PE9 , 1,  2) \
    TIMER_PIN_MAP( 5, PE11, 1,  1) \
    TIMER_PIN_MAP( 6, PD12, 1,  0) \
    TIMER_PIN_MAP( 7, PB10, 1,  0) \
    TIMER_PIN_MAP( 8, PB11, 1,  0) \
    TIMER_PIN_MAP( 9, PC6 , 2,  0) \
    TIMER_PIN_MAP(10, PC7 , 2,  1) \
    TIMER_PIN_MAP(11, PA3 , 1,  0) \
    TIMER_PIN_MAP(12, PA2 , 3, -1) \



#define ADC1_DMA_OPT        1

//TODO #define MAG_BUSTYPE I2C
#define MAG_I2C_INSTANCE (I2CDEV_2)
#define BARO_SPI_INSTANCE SPI1
//TODO #define BLACKBOX_DEVICE SPIFLASH
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
#define BEEPER_INVERTED
//TODO #define BEEPER_OD OFF
#define MAX7456_SPI_INSTANCE SPI2
//TODO #define DASHBOARD_I2C_BUS 2
#define FLASH_SPI_INSTANCE SPI4
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW90_DEG
#define GYRO_1_ALIGN_YAW 900
#define GYRO_2_SPI_INSTANCE SPI3
#define GYRO_2_ALIGN CW270_DEG
#define GYRO_2_ALIGN_YAW 2700
