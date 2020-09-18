/*
 * Copyright (c) 2020 Teltonika Telemedic
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _BLUENRG2_SOC_H_
#define _BLUENRG2_SOC_H_

#include <system_bluenrg2.h>

/* Add include for DTS generated information */
#include <devicetree.h>

#ifdef CONFIG_EXTI_STM32
#include <stm32f0xx_ll_exti.h>
#endif

#ifdef CONFIG_SERIAL_HAS_DRIVER
#include <stm32f0xx_ll_usart.h>
#endif

#ifdef CONFIG_CLOCK_CONTROL_STM32_CUBE
#include <stm32f0xx_ll_utils.h>
#include <stm32f0xx_ll_bus.h>
#include <stm32f0xx_ll_rcc.h>
#include <stm32f0xx_ll_system.h>
#endif /* CONFIG_CLOCK_CONTROL_STM32_CUBE */

#if defined(CONFIG_COUNTER_RTC_STM32)
#include <stm32f0xx_ll_rtc.h>
#include <stm32f0xx_ll_exti.h>
#include <stm32f0xx_ll_pwr.h>
#endif

#ifdef CONFIG_IWDG_STM32
#include <stm32f0xx_ll_iwdg.h>
#endif

#ifdef CONFIG_WWDG_STM32
#include <stm32f0xx_ll_wwdg.h>
#endif

#ifdef CONFIG_I2C_STM32
#include <stm32f0xx_ll_i2c.h>
#endif

#ifdef CONFIG_SPI_STM32
#include <stm32f0xx_ll_spi.h>
#endif

#ifdef CONFIG_GPIO_STM32
#include <stm32f0xx_ll_gpio.h>
#endif

#ifdef CONFIG_ADC_STM32
#include <stm32f0xx_ll_adc.h>
#endif

#ifdef CONFIG_DAC_STM32
#include <stm32f0xx_ll_dac.h>
#endif

#ifdef CONFIG_DMA_STM32
#include <stm32f0xx_ll_dma.h>
#endif

#ifdef CONFIG_HWINFO_STM32
#include <stm32f0xx_ll_utils.h>
#endif

#ifdef CONFIG_PWM_STM32
#include <stm32f0xx_ll_tim.h>
#endif /* CONFIG_PWM_STM32 */

#endif /* _BLUENRG2_SOC_H_ */
