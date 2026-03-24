# ⚡ Teoria: Tentsio-Dibisorea eta PC Konexioa

<img width="1376" height="768" alt="image" src="https://github.com/user-attachments/assets/25b28734-f1ba-439d-a540-6d4617637d8d" />


## 1. Zergatik behar dugu Tentsio-Dibisore bat?
HC-05 moduluak Arduinoren 5V-ko elikadura jaso dezake VCC pinean. Barna, kontuz! Bere datu-sarrera (**RX pina**) **3.3V-ko logikarekin** lan egiteko diseinatuta dago. 
Arduinoren TX pinak (gure kasuan 11. pinak) 5V bidaltzen ditu. Zuzenean konektatzen badugu, HC-05 modulua erre dezakegu. Hori ekiditeko, **tentsio-dibisore** bat egingo dugu bi erresistentziarekin.



## 2. Kalkulua (Ohm-en Legearen aplikazioa)
Gure helburua 5V-ko seinalea ~3.3V-ra jaistea da. Tentsio-dibisorearen formula hau da:
$$V_{out} = V_{in} \cdot \frac{R_2}{R_1 + R_2}$$

* $R_1$ = 1 kΩ
* $R_2$ = 2 kΩ
* $V_{in}$ = 5V

$$V_{out} = 5V \cdot \frac{2000\Omega}{1000\Omega + 2000\Omega} = 5V \cdot \frac{2}{3} = 3.33V$$
Emaitza perfektua da HC-05-aren RX pinerako!

**Hardware kokapena:**
1. Arduinoren TX (11. pina) $\rightarrow$ $R_1$ (1kΩ) erresistentziara.
2. $R_1$-ren irteera **nodo** batera doa.
3. Nodo horretatik kable bat HC-05-aren RX pinera doa.
4. Nodo horretatik bertatik, $R_2$ (2kΩ) erresistentzia bat ateratzen da GND-ra (lurrera).

<img width="418" height="387" alt="image" src="https://github.com/user-attachments/assets/e334ccf0-a4f3-4eb0-8b9c-30414d62a997" />


## 3. Nola konektatu Ordenagailua Bluetooth bidez
1. Piztu Arduinoa (eta Bluetooth modulua parpadetzen hasiko da).
2. Joan Windows-eko Bluetooth ezarpenetara, bilatu **HC-05** eta emparejatu (PIN: `1234` edo `0000`).
3. Ireki Windows-eko "Administrador de Dispositivos", joan "Puertos (COM y LPT)" atalera eta bilatu Bluetooth-ak sortu dituen **COM portuak** (adibidez COM5 eta COM6).
4. Ireki **Tera Term**, hautatu konexio seriala eta aukeratu COM portu horietako bat (sarrerakoa) 9600 baud-eko abiaduran.
<img width="657" height="431" alt="image" src="https://github.com/user-attachments/assets/b0cc79a4-e8ca-46cf-b3f8-7dee1db8d74d" />

