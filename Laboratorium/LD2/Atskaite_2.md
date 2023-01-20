# 2. laboratorijas darbs - Dihatomijas metode [^1]
## Neliels ieskats teorijā :mag_right: 
Dihatomijas metode jeb intervāla dalīšana uz pusēm ir metode, ko izmanto, lai atrastu vienādojuma sakni. Vispirms tiek izdalīts intervāls, kurā tiek meklēta funkcijas sakne. Apgalvot, ka intervālā ir sakne, var, ja funkcijas vērtībām intervāla galos ir pretējas zīmes, tas ir, funkcijas vērtība intervāla sākumpunktā un beigu punktā ir ar atšķirīgām zīmēm. Ja intervālā sakne ir, tad atliek pakāpeniski sašaurināt intervālu, kamēr varēs apgalvot, ka sakne atrodas intervālā, kurā platums ir mazāks par iepiriekš izvēlētu mazu skaitli. Vienkāršākais veids, kā sašaurināt intervālu, ir dalīt to uz pusēm. Pēc tam ir jānoskaidro, kurā pusē atrodas sakne. Zemāk būs pieejams detalizētāks algoritma apraksts.  

## Algoritms
Dihatomijas metodes algoritms sākas ar intervālu **[a, b]**, kurā funkcijas vērtībām intervāla galos ir pretējas zīmes, tātad reizinājums **f(a)∗f(b)<0**. Intervāls tiek dalīts uz pusēm, bet **x** vērtība tiek attiecīgi izvēlēta intervāla vidū **x=(a+b)/2**. Funkcija tiek novērtēta un tiek noteikts apgabals, kurā atrodas sakne. Nepazaudējot sakni intervāla gals tiek pārbīdīts uz tikko iegūto **x** koordināti un jaunais intervāls jau ir divreiz šaurāks par iepriekšējo. Šis process tiek atkārtots, kamēr x vērtība intervāla viduspunktā apmierina vienādojumu ar vēlamo precizitāti vai arī līdz tiek sasniegts maksimālais iterāciju skaits.  

Zemāk tiks parādīts programmas rezultāts.  
<img width="273" alt="image" src="https://user-images.githubusercontent.com/112925785/213519498-f56d1582-a0d6-4ad1-a587-d867bf50a26b.png">

<img width="806" alt="image" src="https://user-images.githubusercontent.com/112925785/213532779-8d528cc7-3ad7-46c9-904e-cf5c6519e607.png">

_Ar doto sakņu meklēšanas metodi dažos gadījumos nav iespējams atrast sakni gadījumos, piemēram, ja dotajā intervālā ir pāra skaits sakņu, vai arī, ja abās intervāla pusēs funkcijas vērtība ir ar vienādu zīmi. Kā arī ar dihatomijas metodi tiek meklēta viena sakne, bet teorētiski iespējams, ka tā nav vienīgā._ 

[^1]: J.Ziemelis. Ievads algoritmu valodā C. 2006.g. RTU. Rīga. - 43.lpp.-45.lpp.
