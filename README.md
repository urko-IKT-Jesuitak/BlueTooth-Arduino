# 📶 Bluetooth HC-05: Haririk Gabeko Kontrola | Jesuitak Indautxu

<img width="1376" height="768" alt="image" src="https://github.com/user-attachments/assets/6a723576-3cf8-4a2c-b1ca-903c71a4ec5b" />


Proiektu honetan, **HC-05 Bluetooth modulua** erabiliz, gure Arduino Mega mundu birtualarekin (ordenagailu edo mugikor batekin) komunikatuko dugu, kablerik gabe!

## 📡 Zer da Bluetooth eta zer da HC-05?
Bluetooth distantzia laburreko hari gabeko komunikazio-sare bat da. Gure proiektuan **HC-05 modulua** erabiliko dugu. Gailu honek UART (TX eta RX) serie-kanala eskaintzen dio Arduinori, hau da, kable bidezko Serial komunikazioa Bluetooth seinale bihurtzen du.



## 🔌 Hardware Konexioa: Zergatik EZ erabili 0 eta 1 pinak?
Arduinoren 0 (RX) eta 1 (TX) pinak **Hardware Serial** (USB) atakarako gordeta daude. Pin horiek erabiltzen baditugu, ordenagailuarekiko komunikazioa (kodea igotzea edo Serial Monitor-a erabiltzea) blokeatu egingo dugu. 

Horregatik, `SoftwareSerial` liburutegia erabiliko dugu, **10 eta 11 pinak** aukeratuz:
* **VCC** $\rightarrow$ 5V
* **GND** $\rightarrow$ GND
* **TXD** $\rightarrow$ Arduino RX (10. pina)
* **RXD** $\rightarrow$ Arduino TX (11. pina, **Tentsio-dibisorearekin!**)

## 🖥️ PC-rako Konexioa eta Tera Term
Gure ordenagailutik Arduinora aginduak bidaltzeko, terminal serie bat behar dugu. **Tera Term** erabiltzea gomendatzen dugu.
* **Zergatik Tera Term?** Arina, azkarra eta, garrantzitsuena, **Kode Irekikoa (Open Source)** delako.
* **Zergatik sustatu Kode Irekia ikasgelan?** Tresna hauen kodea edonork ikusi eta hobetu dezake. Horrek gardentasuna bermatzen du, ikasleei nola funtzionatzen duten ikasteko aukera ematen die, eta software librea mantentzen duen komunitate globalean parte hartzera bultzatzen ditu.

## 🧭 Edukien Gida
1. [Teoria: Tentsio-dibisorea eta Kalkuluak](teoria_eta_kalkuluak.md)
2. [1. Proiektua: Bluetooth Komunikazio Sinplea](1_BT_Sinplea.ino)
3. [2. Proiektua: Bluetooth + 7-Segmentuak](2_BT_7Segmentuak.ino)
