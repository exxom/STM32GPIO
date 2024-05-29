/*
 * GPIO.h
 *
 *  Created on: May 29, 2024
 *      Author: k
 */

#ifndef GPIO_H_
#define GPIO_H_

#define GPIO_SET_PIN(port,pin)		((port)->BSRR = pin)
#define GPIO_RESET_PIN(port,pin)	((port)->BSRR = (pin<<16))
#define GPIO_TOGGLE_PIN(port,pin)	((port)->ODR ^=pin)

#define GPIO_READ_PIN(port,pin)		((port)->IDR & pin)

#endif /* GPIO_H_ */
