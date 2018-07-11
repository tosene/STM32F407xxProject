  workspace "STM32F407xxxProject"
  configurations { "STM32F407xxxProject" }
  project"STM32F407xxxProject_IAR"
  kind "ConsoleApp"
  language "C"
  filter "configurations:STM32F407xxxProject"
  sysincludedirs  {"$(VC_IncludePath)"}
  defines { "USE_FULL_LL_DRIVER", "USE_HAL_DRIVER", "STM32F407xx", "HSE_VALUE=8000000", "_IAR_", "__ICCARM__", "_Pragma(x)=", "__interrupt=", "__packed=", "__weak=" }
  forceincludes { "" }
  includedirs { "../Drivers/CMSIS/Include", "../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy", "../Drivers/STM32F4xx_HAL_Driver/Inc", "../Drivers/STM32F4xx_HAL_Driver/Src", "../STM32F4xx", "../STARTUP/EWARM", "../Complier", "../Doc", "../Application/Delay", "../Application/DHT11", "../Application/GPIO", "../Application/IWDG", "../Application/SysTick", "../Application/APP", "../Application/OneWire", "../Application/Random", "../Application/USART", "../Application/WM8510" }
  files { "../Application/USART/usart_cfg.c", "../Application/USART/usart_cfg.h", "../Application/USART/usart_lib.c", "../Application/USART/usart_lib.h", "../Application/USART/usart_task.c", "../Application/USART/usart_task.h", "../Application/APP/main.c", "../Application/APP/main.h", "../Application/Delay/delay_cfg.c", "../Application/Delay/delay_cfg.h", "../Application/Delay/delay_lib.c", "../Application/Delay/delay_lib.h", "../Application/Delay/delay_task.c", "../Application/Delay/delay_task.h", "../Application/DHT11/dht11_cfg.c", "../Application/DHT11/dht11_cfg.h", "../Application/DHT11/dht11_lib.c", "../Application/DHT11/dht11_lib.h", "../Application/DHT11/dht11_task.c", "../Application/DHT11/dht11_task.h", "../Application/GPIO/gpio_cfg.c", "../Application/GPIO/gpio_cfg.h", "../Application/GPIO/gpio_lib.c", "../Application/GPIO/gpio_lib.h", "../Application/GPIO/gpio_task.c", "../Application/GPIO/gpio_task.h", "../Application/I2C/i2c_cfg.c", "../Application/I2C/i2c_cfg.h", "../Application/I2C/i2c_lib.c", "../Application/I2C/i2c_lib.h", "../Application/I2C/i2c_task.c", "../Application/I2C/i2c_task.h", "../Application/IWDG/iwdg_cfg.c", "../Application/IWDG/iwdg_cfg.h", "../Application/IWDG/iwdg_lib.c", "../Application/IWDG/iwdg_lib.h", "../Application/IWDG/iwdg_task.c", "../Application/IWDG/iwdg_task.h", "../Application/OneWire/one_wire_cfg.c", "../Application/OneWire/one_wire_cfg.h", "../Application/OneWire/one_wire_lib.c", "../Application/OneWire/one_wire_lib.h", "../Application/OneWire/one_wire_task.c", "../Application/OneWire/one_wire_task.h", "../Application/Random/random_cfg.c", "../Application/Random/random_cfg.h", "../Application/Random/random_lib.c", "../Application/Random/random_lib.h", "../Application/Random/random_task.c", "../Application/Random/random_task.h", "../Application/SysTick/systick_cfg.c", "../Application/SysTick/systick_cfg.h", "../Application/SysTick/systick_lib.c", "../Application/SysTick/systick_lib.h", "../Application/SysTick/systick_task.c", "../Application/SysTick/systick_task.h", "../Application/WM8510/wm8510_cfg.c", "../Application/WM8510/wm8510_cfg.h", "../Application/WM8510/wm8510_lib.c", "../Application/WM8510/wm8510_lib.h", "../Application/WM8510/wm8510_task.c", "../Application/WM8510/wm8510_task.h", "../Complier/complier_cfg.c", "../Complier/complier_cfg.h", "../Complier/complier_lib.c", "../Complier/complier_lib.h", "../Doc/ReadMe.txt", "../STM32F4xx/system_stm32f4xx.c", "../STM32F4xx/system_stm32f4xx.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_cortex.h", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_def.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_adc.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_bus.h", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_cortex.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_crc.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_crc.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_dac.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_dac.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_gpio.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_gpio.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_i2c.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_i2c.h", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_iwdg.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_pwr.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_rcc.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rcc.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_rng.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rng.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_rtc.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_spi.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_spi.h", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_system.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_tim.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_tim.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_usart.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h", "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_utils.c", "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_utils.h", "../STARTUP/EWARM/startup_stm32f407xx.s", "../STM32F4xx/stm32_assert.h", "../STM32F4xx/stm32_cfg.c", "../STM32F4xx/stm32_cfg.h", "../STM32F4xx/stm32f407xx.h", "../STM32F4xx/stm32f4xx.h", "../STM32F4xx/stm32f4xx_hal_conf.h", "../STM32F4xx/stm32f4xx_it.c", "../STM32F4xx/stm32f4xx_it.h", "../STM32F4xx/stm32f4xx_ll.h" }
  vpaths {["Application"] = { "" } , ["Application/USART"] = { "../Application/USART/usart_cfg.c" , "../Application/USART/usart_cfg.h" , "../Application/USART/usart_lib.c" , "../Application/USART/usart_lib.h" , "../Application/USART/usart_task.c" , "../Application/USART/usart_task.h" } , ["Application/APP"] = { "../Application/APP/main.c" , "../Application/APP/main.h" } , ["Application/Delay"] = { "../Application/Delay/delay_cfg.c" , "../Application/Delay/delay_cfg.h" , "../Application/Delay/delay_lib.c" , "../Application/Delay/delay_lib.h" , "../Application/Delay/delay_task.c" , "../Application/Delay/delay_task.h" } , ["Application/DHT11"] = { "../Application/DHT11/dht11_cfg.c" , "../Application/DHT11/dht11_cfg.h" , "../Application/DHT11/dht11_lib.c" , "../Application/DHT11/dht11_lib.h" , "../Application/DHT11/dht11_task.c" , "../Application/DHT11/dht11_task.h" } , ["Application/GPIO"] = { "../Application/GPIO/gpio_cfg.c" , "../Application/GPIO/gpio_cfg.h" , "../Application/GPIO/gpio_lib.c" , "../Application/GPIO/gpio_lib.h" , "../Application/GPIO/gpio_task.c" , "../Application/GPIO/gpio_task.h" } , ["Application/I2C"] = { "../Application/I2C/i2c_cfg.c" , "../Application/I2C/i2c_cfg.h" , "../Application/I2C/i2c_lib.c" , "../Application/I2C/i2c_lib.h" , "../Application/I2C/i2c_task.c" , "../Application/I2C/i2c_task.h" } , ["Application/IWDG"] = { "../Application/IWDG/iwdg_cfg.c" , "../Application/IWDG/iwdg_cfg.h" , "../Application/IWDG/iwdg_lib.c" , "../Application/IWDG/iwdg_lib.h" , "../Application/IWDG/iwdg_task.c" , "../Application/IWDG/iwdg_task.h" } , ["Application/OneWire"] = { "../Application/OneWire/one_wire_cfg.c" , "../Application/OneWire/one_wire_cfg.h" , "../Application/OneWire/one_wire_lib.c" , "../Application/OneWire/one_wire_lib.h" , "../Application/OneWire/one_wire_task.c" , "../Application/OneWire/one_wire_task.h" } , ["Application/Random"] = { "../Application/Random/random_cfg.c" , "../Application/Random/random_cfg.h" , "../Application/Random/random_lib.c" , "../Application/Random/random_lib.h" , "../Application/Random/random_task.c" , "../Application/Random/random_task.h" } , ["Application/SysTick"] = { "../Application/SysTick/systick_cfg.c" , "../Application/SysTick/systick_cfg.h" , "../Application/SysTick/systick_lib.c" , "../Application/SysTick/systick_lib.h" , "../Application/SysTick/systick_task.c" , "../Application/SysTick/systick_task.h" } , ["Application/WM8510"] = { "../Application/WM8510/wm8510_cfg.c" , "../Application/WM8510/wm8510_cfg.h" , "../Application/WM8510/wm8510_lib.c" , "../Application/WM8510/wm8510_lib.h" , "../Application/WM8510/wm8510_task.c" , "../Application/WM8510/wm8510_task.h" } , ["Complier"] = { "../Complier/complier_cfg.c" , "../Complier/complier_cfg.h" , "../Complier/complier_lib.c" , "../Complier/complier_lib.h" } , ["Doc"] = { "../Doc/ReadMe.txt" } , ["Drivers"] = { "" } , ["Drivers/CMSIS"] = { "../STM32F4xx/system_stm32f4xx.c" , "../STM32F4xx/system_stm32f4xx.h" } , ["Drivers/STM32F4xx_HAL_Driver"] = { "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_cortex.h" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_def.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_gpio.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_rcc.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_adc.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_adc.h" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_bus.h" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_cortex.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_crc.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_crc.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_dac.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_dac.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_gpio.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_gpio.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_i2c.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_i2c.h" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_iwdg.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_pwr.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_pwr.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_rcc.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rcc.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_rng.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rng.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_rtc.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_rtc.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_spi.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_spi.h" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_system.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_tim.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_tim.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_usart.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_usart.h" , "../Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_utils.c" , "../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_ll_utils.h" } , ["STARTUP"] = { "" } , ["STARTUP/EWARM"] = { "../STARTUP/EWARM/startup_stm32f407xx.s" } , ["STM32F4xx"] = { "../STM32F4xx/stm32_assert.h" , "../STM32F4xx/stm32_cfg.c" , "../STM32F4xx/stm32_cfg.h" , "../STM32F4xx/stm32f407xx.h" , "../STM32F4xx/stm32f4xx.h" , "../STM32F4xx/stm32f4xx_hal_conf.h" , "../STM32F4xx/stm32f4xx_it.c" , "../STM32F4xx/stm32f4xx_it.h" , "../STM32F4xx/stm32f4xx_ll.h" } }
   premake.override(premake.vstudio.vc2010, "includePath", function(base,cfg)
   local dirs = premake.vstudio.path(cfg, cfg.sysincludedirs)
   if #dirs > 0 then
   premake.vstudio.vc2010.element("IncludePath", nil, "%s", table.concat(dirs, ";"))
   end
end)