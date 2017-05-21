#ifndef QTOUCH_LIB_H
#define QTOUCH_LIB_H

/**
  * Acquisition Technology Name.
  *
  * Possible values: _QMATRIX_, _QTOUCH_ .
  */
#define _QTOUCH_

/**
  * Device Name.
  *.
  */
#define __ATmega324A__


/**
  * Number of Channels(dependent on the library used).
  *
  * Possible values: 4, 8, 12, 16.
  */
#define QT_NUM_CHANNELS 4

/**
  * Delay cycles that determine the capacitance charge pulse width.
  *
  * Possible values: 1 to 255
  */
#ifndef QT_DELAY_CYCLES
#define QT_DELAY_CYCLES 1
#endif

/**
  * Enabling the _ROTOR_SLIDER_ constant will link the library need for using rotors
  * and sliders.
  *
  * Possible values: comment/uncomment the define
  */

//#define _ROTOR_SLIDER_

/**
  * Enabling _POWER_OPTIMIZATION_ will lead to a 40% reduction in power consumed
  * by the library, but by disabling spread spectrum feature. When power optimization
  * is enabled the unused pins, within a port used for QTouch, may not be usable for
  * interrupt driven applications. This option is available only for ATtiny and ATmega
  * devices.
  *
  * Possible values: 0 or 1 (For ATtiny and ATmega devices)
  *                  0 (For ATxmega devices)
  */

#ifndef _POWER_OPTIMIZATION_
#define _POWER_OPTIMIZATION_ 0
#endif




/**
  * Define the ports to be used for SNS1,SNS2 and SNSK1,SNSK2 pins. SNS1,SNS2 and
  * SNSK1,SNSK2 port pins can be available on the same port or on different ports.
  * _SNS1_SNSK1_SAME_PORT_ is defined if first port pair SNS1 and SNSK1 are on
  * same port. _SNS2_SNSK2_SAME_PORT_ is defined if SNS2 and SNSK2 are on same port.
  * Possible values:
  */

#define QTOUCH_STUDIO_MASKS	1
#define NUMBER_OF_PORTS	1

#define SNS1	A
#define SNSK1	B



/**
  * Measurement Period Time determines the time to measure touch
  *
  * Possible values:
  */
#define QT_MEASUREMENT_PERIOD_MS 50u


/**
  * Total ticks per msec.
  * TICKS_PER_MS = (CLK_FREQ/TIMER_PRESCALER)*(1/1000)
  */
#define TICKS_PER_MS 1000u

#endif
