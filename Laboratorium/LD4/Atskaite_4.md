# 4. laboratorijas darbs -  Skaitliskā integrēšana [^1]  
## Neliels ieskats teorijā :mag_right:

**Šajā darbā tiks apskatītas metodes noteiktā integrāļa skaitliskam aprēķinam. Noteiktā integrāļa vērtība atbilst zemintegrāļa funkcijas aptvertam laukumam.
Šī laukuma tuvinātam aprēķinam tiek izmantotas dažādas metodes.**  

Protams, visvienkāršākā metode būtu uzzīmēt funkciju uz rūtiņu papīra un saskaitīt rūtiņas, bet šāda metode, bez šaubām, izrādītos salīdzinoši neprecīza, jo precīzi noteikt, cik liela daļa rūtiņas ir jāieskaita, būtu diezgan nereāli. Pat Pika metode nepalīdzētu atrisināt šo probēlmu. Bet, pateicoties skaitliskām metodēm, kuras turpinām apgūt arī šī laboratorijas darba ietvaros, mums izdosies diezgan precīzi noteikt integrāli.  

_Kādas tad metodes mēs izmantosim?_

## Algoritms

Šajā laboratorijas darbā mēs rēķināsim funkcijas y=cosh(x) noteikto integrāli, izmantojot trīs dažādas skaitliskās metodes:  
- Taisnstūra metode;  
- Trapeces metode;  
- Simpsona likums.  

Funkcijas noteiktais integrālis ir laukuma vērtība starp f(x) un x asi. Algoritma sākumā lietotājam būs jāizvēlas a un b vērtības - intervāla sākumpunktu un beigu punktu -, kā arī precizitāti.  

**Taisnstūra metodes pamatprincips:**  
Zemintegrāļa funkcijas ietvertais laukums tiek aizstāts ar taisntūra laukumiem, kuru platums ir h, bet augstumu nosaka funkcijas vērtība šajā intervālā. Visprecīzāko rezultātu iegūst, ja taisnstūra augstumu izvēlas intervāla vidū. Tad integrāļa aptuvenā vērtība tiek aprēķināta kā taisntūra laukumu summa, kur taisnstūra laukums ir garums pareizināts ar platumu. 

**Trapeces metodes pamatprincips:**  
Šī metode ir līdzīga iepriekšējai, tikai šajā gadījumā zemintegrāļa funkcijas ietvertais laukums tiek aizstāts ar trapeces laukumiem. Tad integrāļa aptuvenā vērtība tiek aprēķināta kā trapeču laukumu summa, kur trapeces laukuma formula ir trapeces platuma un funkcijas vidējā augstuma reizinājums vienāda platuma trapeču galapunktos.  

**Simpsona metodes pamatprincips:**
Šī ir, manuprāt, visprecīzākā metode noteiktā integrāļa aprēķinam. Simpsona metode integrēšanas intervālu sadala pāru skaita intervāliņos. Zemintegrāļa funkcijas ietvertais laukums tiek aprēķināts uzreiz 2 maziem intervāliem, kuru robežās funkcija tiek aproksimēta ar otrās kārtas polinomu. Metode pamatojas uz to, ka, izmantojot 3 argumenta un 3 funkciajs vērtības, tiek sastādīta un analītiski atrisināta vienādojumu sistēma, kurā attiecīgi tiek noteikti koeficienti. Ievietojot atrastos koeficinetus zeminegrāļa izteiksmē, veicot pārviedojumus un summējot pa inegrāļu pāriem tiek iegūta Simpsona formula. Šajā metodē integrāļa aptuvenā vērtība tiek aprēķināta kā atsevišķu parabolisku segmentu laukumu summa, kur segmenta lukums tiek noteikts kā platums sareizināts ar funkcijas augstumu summu trīs punktos noteiktā intervāla ietvaros.   

_Zemāk tiek pārādīts, ko izvada programma, kā arī pierādījuma bilde no WolframAlpha, ka iegūtie rezultāti atbilst patiesībai:_  

<img width="416" alt="skaitliskā_integrēšana" src="https://user-images.githubusercontent.com/112925785/213693602-ad69dca4-a82e-48fe-a3e5-22ea21275203.png">
<img width="336" alt="image" src="https://user-images.githubusercontent.com/112925785/213693655-b7f3286a-29a2-405c-8968-a6a4b82360dd.png">

Kā redzams, šajā piemērā (tas ir tikai paraugs), tika aprēķināts noteiktais integrālis funkcijai y=cosh(x) intervālā no 0 līdz 5 ar precizitāti 0.001. Ar visām trīs aprēķinu metodēm noteiktā integrāļa aptuvenā vērtība ir 74.203, un WolframAlpha rezultāts ir 74.203. 

[^1]: J.Ziemelis. Ievads algoritmu valodā C. 2006.g. RTU. Rīga. - 56.lpp.-57.lpp.

