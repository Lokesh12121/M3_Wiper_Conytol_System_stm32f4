# 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Test Type |
| --- | --- | --- | --- | --- | --- |
| 01 | Ignition ON | User Button Press and hold for 2sec | Red LED ON | Red LED ON | Scenario indicating System ON |
| 02 | Viper ON | User Button Press Button 1st tme  | Blue, Green, Orange LEDs Flicker with 1Hz | Blue, Green, Orange LEDs Flicker with 1Hz  | Scenario-Wiper power level-1 |
| 03 | Viper ON | User Button Press Button 2nd time | Blue, Green, Orange LEDs Flicker with 4Hz | Blue, Green, Orange LEDs Flicker with 4Hz  | Scenario-Wiper power level-2 |
| 04 | Viper ON | User Button Press Button 3rd time | Blue, Green, Orange LEDs Flicker with 8Hz | Blue, Green, Orange LEDs Flicker with 8Hz  | Scenario-Wiper power level-3 |
| 05 | Ignition OFF | User Button Press and hold for 2sec |  Red LED OFF | Red LED OFF | Scenario indicating System OFF |

# 1.2 LOW LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |

| Test ID (for LED)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ignition_on() | 1st 2sec User Button Press | RED LED ON | RED LED ON | ✅ |
| 02 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-1Hz | ✅ |
| 03 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-2Hz| ✅ |
| 04 | Check for led_cycle1() | 1st User Button Press | All LEDs ON | All LEDs ON-3Hz | ✅ |
| 04 | Check for ignition_off() | 2nd 2sec User Button Press | RED LED OFF | RED LED OFF | ✅ |

| Test ID (for Button Count For Turning Viper on)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Button_Count() | 1 User Button Press | 1 | 1 | ✅ |
| 02 | Check for Button_Count() | 2 User Button Presses | 2 | 2 | ✅ |
| 03 | Check for Button_Count() | 3 User Button Presses | 3 | 3 | ✅ |

---
