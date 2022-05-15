# 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Test Type |
| --- | --- | --- | --- | --- | --- |
| 01 | Ignition ON | User Button Press and hold for 2sec | Red LED ON | Red LED ON | Scenario indicating System ON |
| 02 | Viper ON | User Button Press Button 1st tme  | Blue, Green, Orange LEDs Flicker with 1Hz | Blue, Green, Orange LEDs Flicker with 1Hz  | Scenario-Wiper power level-1 |
| 03 | Viper ON | User Button Press Button 2nd time | Blue, Green, Orange LEDs Flicker with 4Hz | Blue, Green, Orange LEDs Flicker with 4Hz  | Scenario-Wiper power level-2 |
| 04 | Viper ON | User Button Press Button 3rd time | Blue, Green, Orange LEDs Flicker with 8Hz | Blue, Green, Orange LEDs Flicker with 8Hz  | Scenario-Wiper power level-3 |
| 05 | Ignition OFF | User Button Press and hold for 2sec |  Red LED OFF | Red LED OFF | Scenario indicating System OFF |

# 1.2 LOW LEVEL TEST PLAN
### For LEDs
| Test ID | Description | Input | Expected output | Actual Output | Test Type |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Ignition ON | Button Press and hold for 2sec | RED LED ON | RED LED ON | Test and view in hardware |
| 02 | Check for Wiper power level-1 | Button Press 1st time | All LEDs ON | All LEDs ON-1Hz | Test and view in hardware |
| 03 | Check for Wiper power level-2 | Button Press 2nd time | All LEDs ON | All LEDs ON-4Hz| Test and view in hardware |
| 04 | Check for Wiper power level-3 | Button Press 3rd time | All LEDs ON | All LEDs ON-8Hz | Test and view in hardware |
| 04 | Check for Ignition OFF | Button Press and hold for 2sec | RED LED OFF | RED LED OFF | Test and view in hardware |

### For Button
| Test ID | Description | Input | Expected output | Actual Output | Visual |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Ignition ON | Button Press and hold for 2sec | System delay_count > 2000ms and Button_count = 0| System delay_count > 2000ms and Button_count = 0 | RED LED ON |
| 02 | Check for Wiper power level-1 | Button Press 1st time | Button_count = 1 | Button_count = 1 | LEDs flicker at 1Hz |
| 03 | Check for Wiper power level-2 | Button Press 2nd time | Button_count = 2 | Button_count = 2 | LEDs flicker at 4Hz |
| 04 | Check for Wiper power level-3 | Button Press 3rd time | Button_count = 3 | Button_count = 3 | LEDs flicker at 8Hz |
| 05 | Check for Wiper System OFF and goes back to Wiper Level-1| Button Press 4th time | Button_count = 0 | Button_count = 0 | LEDs flicker at 8Hz |
| 06 | Check for Ignition OFF | Button Press and hold for 2sec | System delay_count > 2000ms and Button_count = 0| System delay_count > 2000ms and Button_count = 0 | RED LED OFF |
