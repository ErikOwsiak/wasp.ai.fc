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

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        ALIENWHOOPF4
#define MANUFACTURER_ID   ALWH

#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_MPU6500
#define USE_MAX7456

#define BEEPER_PIN           PA2
#define MOTOR1_PIN           PC9
#define MOTOR2_PIN           PC8
#define MOTOR3_PIN           PC7
#define MOTOR4_PIN           PC6
#define LED_STRIP_PIN        PA0
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PA2
#define UART3_TX_PIN         PC10
#define UART4_TX_PIN         PA0
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PC11
#define UART4_RX_PIN         PA1
#define LED0_PIN             PC12
#define LED1_PIN             PD2
#define SPEKTRUM_RX_BIND_PIN PC13
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PB3
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI3_MISO_PIN        PB4
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define SPI3_MOSI_PIN        PB5
#define FLASH_CS_PIN         PA15
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PC14
#define GYRO_1_CS_PIN        PA4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PC9 , 2,  0) \
    TIMER_PIN_MAP( 1, PC8 , 1,  0) \
    TIMER_PIN_MAP( 2, PC7 , 1,  0) \
    TIMER_PIN_MAP( 3, PC6 , 2,  0) \
    TIMER_PIN_MAP( 4, PA0 , 2,  0) \



#define ADC1_DMA_OPT        1

//TODO #define MAG_BUSTYPE SLAVE
//TODO #define BLACKBOX_DEVICE SPIFLASH
#define BEEPER_INVERTED
//TODO #define BEEPER_OD OFF
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI2
#define FLASH_SPI_INSTANCE SPI3
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
