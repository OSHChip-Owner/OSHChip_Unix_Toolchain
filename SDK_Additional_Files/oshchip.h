
#ifndef OSHCHIP_H
#define OSHCHIP_H

#define p0          ( 0)
#define p1          ( 1)
#define p2          ( 2)
#define p3          ( 3)
#define p4          ( 4)
#define p5          ( 5)
#define p6          ( 6)
#define p7          ( 7)
#define p8          ( 8)
#define p9          ( 9)
#define p10         (10)
#define p11         (11)
#define p12         (12)
#define p13         (13)
#define p14         (14)
#define p15         (15)
#define p16         (16)
#define p17         (17)
#define p18         (18)
#define p19         (19)
#define p20         (20)
#define p21         (21)
#define p22         (22)
#define p23         (23)
#define p24         (24)
#define p25         (25)
#define p26         (26)
#define p27         (27)
#define p28         (28)
#define p29         (29)
#define p30         (30)
#define p31         (31)

#define P0_0        (p0)
#define P0_1        (p1)
#define P0_2        (p2)
#define P0_3        (p3)
#define P0_4        (p4)
#define P0_5        (p5)
#define P0_6        (p6)
#define P0_7        (p7)

#define P0_8        ( p8)
#define P0_9        ( p9)
#define P0_10       (p10)
#define P0_11       (p11)
#define P0_12       (p12)
#define P0_13       (p13)
#define P0_14       (p14)
#define P0_15       (p15)

#define P0_16       (p16)
#define P0_17       (p17)
#define P0_18       (p18)
#define P0_19       (p19)
#define P0_20       (p20)
#define P0_21       (p21)
#define P0_22       (p22)
#define P0_23       (p23)

#define P0_24       (p24)
#define P0_25       (p25)
#define P0_26       (p26)
#define P0_27       (p27)
#define P0_28       (p28)
#define P0_29       (p29)
#define P0_30       (p30)
#define P0_31       (p31)

// LEDs definitions for OSHChip
#define LEDS_NUMBER    3

#define LED_START       8
#define LED_0           8
#define LED_1           5
#define LED_2           3
#define LED_STOP        3

#define LEDS_LIST { LED_0, LED_1, LED_2}

#define BSP_LED_0      LED_0
#define BSP_LED_1      LED_1
#define BSP_LED_2      LED_2

#define BSP_LED_0_MASK (1<<BSP_LED_0)
#define BSP_LED_1_MASK (1<<BSP_LED_1)
#define BSP_LED_2_MASK (1<<BSP_LED_2)

#define LEDS_MASK      (BSP_LED_0_MASK | BSP_LED_1_MASK | BSP_LED_2_MASK)
/* all LEDs are lit when GPIO is low */
#define LEDS_INV_MASK  LEDS_MASK

#define BUTTONS_NUMBER 0

#define RX_PIN_NUMBER  OSHChip_Pin_2
#define TX_PIN_NUMBER  OSHChip_Pin_1
#define CTS_PIN_NUMBER p30
#define RTS_PIN_NUMBER p29

#endif // OSHCHIP_H
