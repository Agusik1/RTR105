# 4. laboratorijas darbs -  Skaitliskā integrēšana
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
