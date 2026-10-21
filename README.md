# ATTINY
<img width="1090" height="647" alt="Screenshot 2026-10-10 191539" src="https://github.com/user-attachments/assets/ea32b5a5-e9a6-4472-8c0d-558392929f07" />

I made a small devboard based on Atinny1616-S .It has inbuild 3.3V voltage regulator and a USB-to-UART serial convertor  .Power and data comes from USB-C . The board has an inbuilt LED. and has 8 pin outlet in which 1 is gnd,  1 is power and another 6 are general out pin pins connected to the MCU. The Devboard was designed on kicad . 

## Features
- Based on Atinny1616-S
- uses USB-C for Power and data
- has onboard 3.3V Regulator
- has onboard USB-to-UART serial convertor IC (ch340X)
- has 8 outlet pins (6 connected to MCU ,1 GND ,1 Power)


## BOM

| **Designation** | **Comment** | **Quantity** | **Price ($)** | **Link** |
| :-------------- | :---------- | :----------- | :------------ | :------- |
| C1, C2, C4 | 1uF | 6 | 0.1326 | [JLCPCB](https://jlcpcb.com/partdetail/54083-CL03A105MQ3CSNH/C53067) |
| C3, C5 | 100nF (0.1uF) | 4 | 0.1760 | [JLCPCB](https://jlcpcb.com/partdetail/50070-CL03A104KP3NNNC/C49062) |
| D1 | LED | 2 | 0.6900 | [JLCPCB](https://jlcpcb.com/partdetail/XINGLIGHT-XL0201SURC/C3646923) |
| R1, R2 | 5.1k | 4 | 0.0740 | [JLCPCB](https://jlcpcb.com/partdetail/LIZElec-CR0201FH5101G/C100142) |
| R3, R4 | 1k | 4 | 0.1520 | [JLCPCB](https://jlcpcb.com/partdetail/LIZElec-CR0201FH1001G/C100125) |
| U1 | XC6206PxxxMR | 2 | 0.7850 | [JLCPCB](https://jlcpcb.com/partdetail/TorexSemicon-XC6206P252MR/C15906) |
| U2 | ATtiny1616-S | 2 | 5.3754 | [JLCPCB](https://jlcpcb.com/partdetail/MicrochipTech-ATTINY1616SN/C614136) |
| U3 | CH340X | 2 | 1.3668 | [JLCPCB](https://jlcpcb.com/partdetail/WCH_Jiangsu_Qin_Heng-CH340X/C3035748) |
| | **Component Total** | | **8.7518** | |
| | Setup | | 25.00 | |
| | Loader/Assembly/Setup Fee | | 12.57 | |
| | PCB | | 4.00 | |
| | Shipping | | 11.17 | |
| | **Grand Total** | | **61.4918** | |

## Schematics

<img width="912" height="570" alt="Screenshot 2026-10-11 005245" src="https://github.com/user-attachments/assets/d09fb90e-1b79-48fa-a5b0-9cc0692663a3" />

## PCB
<img width="727" height="767" alt="Screenshot 2026-10-10 191446" src="https://github.com/user-attachments/assets/9c57c44a-dcf9-41ea-828b-866ae9853672" />


## CAD 

<img width="847" height="667" alt="Screenshot 2026-10-10 191547" src="https://github.com/user-attachments/assets/fab8bd70-d69d-4634-a1d8-591a9dd697b1" />
<img width="1090" height="647" alt="Screenshot 2026-10-10 191539" src="https://github.com/user-attachments/assets/09d72a30-0c7e-4da1-a011-e030bc893a95" />

