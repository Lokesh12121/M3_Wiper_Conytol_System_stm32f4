# High Level Test Plan
| Test ID  | Description | Exp I/P | Exp O/P | Actual O/P | Type of Test |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- 
| H_01  | System Testing  | LED - ON when all the doors and windows closed  | Pass  | Pass  | Requirement Based  |
| H_02  | System Testing  | Convert the analog signal from the temperature sensor to the digital value | Pass  | Pass  | Boundary Based  |
| H_03  | System Testing  | Generate the PWM signal according to the converted digital value  | Pass  | Pass  | Scenario Based  |
| H_04  | System Testing  | Send the temperature value to the serial monitor using UART protocol  | Pass  | Pass  | Boundary Based  |

# Low Level Test Plan
| Test ID  | Description | I/P | O/P | Status |
| ------------- | ------------- | ------------- | ------------- | -------------
| H_01  | If server room closed   | Push button=1  | Push button=1  | Pass  |
| H_02  | If server room opened  | Push button=0  | Push button=0  | Pass  |
| H_03  | Temperature Request  | Temperature=0  | Heater=Off  | Pass  |
| H_04  | Temperature Request  | Temperature=20  | Room Temperature=20 degree generation | Pass  |
| H_05  | Temperature Request  | Temperature=25  | Room Temperature=25 degree generation  | Pass  |
| H_06  | Temperature Request  | Temperature=29  | Room Temperature=29 degree generation  | Pass  |
| H_07  | Temperature Request  | Temperature=33  | Room Temperature=33 degree generation  | Pass  |
| H_08  | LED ON | Buttons=1 && Room Temperature=1 | LED=1  | Pass  |
| H_08  | LED OFF | Buttons=0 && Room Temperature=0  | LED=0  | Pass  |
| H_08  | Display | Temperature :- 20 deg Cel  | Temperature :- 20 deg Cel  | Pass  |
