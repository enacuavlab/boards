#include "ch.h"
#include "hal.h"


static THD_WORKING_AREA(waThread1, 128);
static THD_FUNCTION(Thread1, arg) {

  (void)arg;
  chRegSetThreadName("blinker");
  while (true) {
    palSetLine(LINE_LED1);
    chThdSleepMilliseconds(50);
    palSetLine(LINE_LED2);
    chThdSleepMilliseconds(50);
    palSetLine(LINE_LED3);
    chThdSleepMilliseconds(200);
    palClearLine(LINE_LED1);
    chThdSleepMilliseconds(50);
    palClearLine(LINE_LED2);
    chThdSleepMilliseconds(50);
    palClearLine(LINE_LED3);
    chThdSleepMilliseconds(200);
  }
}

/*
 * Application entry point.
 */
int main(void) {

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  /*
   * Creates the example thread.
   */
  chThdCreateStatic(waThread1, sizeof(waThread1), NORMALPRIO + 1, Thread1, NULL);

  while (true) {
    palToggleLine(LINE_LED4);
    chThdSleepMilliseconds(500);
  }
}
