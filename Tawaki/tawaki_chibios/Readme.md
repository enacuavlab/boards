# Tawaki ChibiOS example

This example depends on ChibiOS and on some other tools from alex31, not linked here as submodule to avoid having duplicate of them all over your machine.

+ ChibiOS can be cloned from its [github miror](https://github.com/ChibiOS/ChibiOS.git). Checkout on branch `stable_20.3.x`.
+ alex31's tools can be cloned from [its repository](https://github.com/alex31/chibios_enac_various_common). Master branch should be ok.


Set the path to these repositories to the CHIBIOS and VARIOUS variables in the Makefile (around lines 133-134), or define them as environnment variables, and run make:

`make`

or

`make CHIBIOS=<path/to/ChibiOS> VARIOUS=<path/to/tools>`

You can use `make flash` to flash using a black magic probe.

**Note:** the file `cfg/board.h` can be generated from `cfg/board.cfg` at the condition you installed [STM32CubeMX](https://www.st.com/en/development-tools/stm32cubemx.html).

