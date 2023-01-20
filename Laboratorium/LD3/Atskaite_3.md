# 3. laboratorijas darbs -  Skaitliskā diferencēšana [^1]  
## Neliels ieskats teorijā :mag_right:
Šajā darbā tiks aprēķinātas funkcijas y=cosh(x) pirmās un otrās kārtas atvasinājumu vērtības. Atšķirībā no diviem iepriekšējiem laboratorijas darbiem, šajā darbā visi dati uzreiz tiks ierakstīti failā tabulas formātā, bet tie netiks izvadīti uz lietotāja ekrāna. Konkrētajā laboratorijas darbā tiks izmantotas šādas metodes:  
- galīgas starpības;  
- centrālās atšķirības.  
<img width="317" alt="image" src="https://user-images.githubusercontent.com/112925785/213540699-55b508a1-17d7-4808-9df5-789936324d1a.png">

## Algoritms
Konkrētais algoritms ir nepieciešams, lai realizētu hiperboliskā kosinusa y=cosh(x) pirmās un otrās kārtas atvasinājumu aprēķināšanu kādā noteiktā intervālā, ko uzdod lietotājs, izmantojot galīgas starpības un centrāās atšķirības metodi. Programma saglabā datus atsevišķā failā tabulas veidā.  
Uz ekrāna tiek izvadīts dialogs ar lietotāju a un b vērtības iegūšanai (lietotājam jāizvēlas konkrētās vērtības).  
Atsevišķā failā tiek saglabāta tabula - tajā tiek atspoguļotas:
- x vērtības, _x no a līdz b_  
- f(x) vērtības, _x no a līdz b_  
- f'(x) vērtības, _x no a līdz b_; izmantojot atvasinājuma analītisko formulu  
- f'(x) vērtības, _x no a līdz b_; izmantojot skaitlisko atvasinājumu  
- f''(x) vērtības, _x no a līdz b_; izmantojot atvasinājuma analītisko formulu
- f''(x) vērtības, _x no a līdz b_; izmantojot skaitlisko atvasinājumu  

Lai uzzīmētu funkcijas grafiku, funkciju var sadalīt mazākos intervālos un katrā mazajā intervālā aprēķināt funkcijas vērtību. Pēc tam, savienojot iegūtos punktus, var iegūt līkni, kas praktiski sakritīs ar funkcijas īsto grafiku.


[^1]: J.Ziemelis. Ievads algoritmu valodā C. 2006.g. RTU. Rīga. - 47.lpp.
