# ATTINY
<img width="1090" height="647" alt="Screenshot 2026-10-10 191539" src="https://github.com/user-attachments/assets/ea32b5a5-e9a6-4472-8c0d-558392929f07" />

I made a small devboard based on Atinny1616-S .It has inbuild 3.3V voltage regulator and a USB-to-UART serial convertor  .Power and data comes from USB-C . The board has an inbuilt LED. and has 8 pin outlet in which 1 is gnd,  1 is power and another 6 are general out pin pins connected to the MCU. The Devboard was designed on kicad . 

## Features
- Based on Atinny1616-S
- uses USB-C for Power and data
- has onboard 3.3V Regulator
- has onboard USB-to-UART serial convertor IC (ch340X)
- has 8 outlet pins (6 connected to MCU ,1 GND ,1 Power)


## Bill of Materials (BOM)

| **Designation** | **Comment** | **Quantity** | **Price  ($)** | **Link** |
| :-------------- | :---------- | :----------- | ------------: | :------ |
| C1, C2, C4 | 1uF | 6 | 2.43 | [JLCPCB](https://jlcpcb.com/partdetail/1710977-RDER71H105K2M1H03A/C1620132) |
| C3 | 100nF | 20 | 0.088 | [JLCPCB](https://jlcpcb.com/partdetail/50070-CL03A104KP3NNNC/C49062) |
| C5 | 0.1uF | 4 | 0.5116 | [JLCPCB](https://jlcpcb.com/partdetail/VishayIntertech-K104K10X7RF5UH5/C2979769) |
| D1 | LED | 10 | 0.69 | [JLCPCB](https://jlcpcb.com/partdetail/XINGLIGHT-XL0201SURC/C3646923) |
| R1, R2 | 5.1k | 4 | 1.1512 | [JLCPCB](https://jlcpcb.com/partdetail/VishayIntertech-MBA02040C5101FC100/C1366782) |
| R3 | 1k | 4 | 1.6088 | [JLCPCB](https://jlcpcb.com/partdetail/VishayIntertech-MBA02040C1001FC100/C1364628) |
| R4 | 1K | 20 | 0.024 | [JLCPCB](https://jlcpcb.com/partdetail/SAE-1RC0201J0102/C54530604) |
| U1 | XC6206PxxxMR | 3 | 0.2454 | [JLCPCB](https://jlcpcb.com/partdetail/148017-K2_1103DP_Q4SW04/C136701) |
| U2 | ATtiny1616-S | 2 | 5.3754 | [JLCPCB](https://jlcpcb.com/partdetail/MicrochipTech-ATTINY1616SN/C614136) |
| U3 | CH340X | 2 | 1.3668 | [JLCPCB](https://jlcpcb.com/partdetail/WCH_Jiangsu_Qin_Heng-CH340X/C3035748) |

### Cost Summary

| **Item** | **Price ($)** |
| :------- | ------------: |
| Component Total | 13.49 |
| Setup Fee | 25.00 |
| Loader / Assembly / Setup Fee | 12.57 |
| PCB | 4.00 |
| Shipping | 11.17 |
| **Grand Total** | **66.23** |

## Schematics

<img width="912" height="570" alt="Screenshot 2026-10-11 005245" src="https://github.com/user-attachments/assets/d09fb90e-1b79-48fa-a5b0-9cc0692663a3" />

## PCB
<img width="727" height="767" alt="Screenshot 2026-10-10 191446" src="https://github.com/user-attachments/assets/9c57c44a-dcf9-41ea-828b-866ae9853672" />


## CAD 

<img width="847" height="667" alt="Screenshot 2026-10-10 191547" src="https://github.com/user-attachments/assets/fab8bd70-d69d-4634-a1d8-591a9dd697b1" />
<img width="1090" height="647" alt="Screenshot 2026-10-10 191539" src="https://github.com/user-attachments/assets/09d72a30-0c7e-4da1-a011-e030bc893a95" />

