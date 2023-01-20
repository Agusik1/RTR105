# 5. laboratorijas darbs -  Skaitļu kopas kārtošana un statistika [^1] 
## Neliels ieskats teorijā :mag_right:

Skaitļu kārtošana var tikt realizēta ar dažādām metodēm. Šī laboratorijas darba ietvaros pievērsīsimies "burbuļu" kārtošanai. Katrā ciklā rindas galā tiks izvirzīts vieslielākais un vismazākais skaitlis, līdzīgi kā ūdenī uzpeld gaisa "burbulis". Metodes pamatā ir blakusesošo rindas elementu salīdzināšana un to maiņa vietām, ja nav nodrošināta nepieciešamā lielumu secība. Tātad šajā kārtošanas algoritmā tiek veikta konkrētā elementa salīdzināšana ar nākamo, vajadzības gadījumā mainot tos vietām. Process tiek atkārtots līdz netiek panākta sakārtota virkne.  

## Algoritms

Programma sākas ar dialogu ar lietotāju. No lietotāja tiek sagaidīts ievadīt simbolu (teksta) rindu bez atstarpēm (bez speciāliem simboliem, kā, piemēram, garumzīmes). Kad tas ir izdarīts, simbolu rinda tiek saglabāta masīvā. Kā zināms, programmēšanā tiek izmantots ASCII kods, tāpēc programma katram simbolu rindas elementam piemeklēs atbilstošu ASCII skaitli.  
Iegūtais masīvs tiek sakārtots augošā secībā, izmantojot funkciju qsort. Tiek noteikts arī masīvā esošo simbolu skaits.  
Tālāk dotajā simbolu virknē tiek atrasts simbols ar vismazāko un vislielāko vērtību, paņemot pirmo un pēdējo sakārtotā masīva elementus. Uz ekrāna lietotājam tiek izvadīta minimālā vērtība (saskaņā ar ASCII skaitļiem) un maksimālā vērtība (saskaņā ar ASCII skaitļiem).  
Tālāk tiek aprēķināta simbolu summa, kuru pēc tam izdalot ar simbolu skaitu, tiek iegūta vidējā vērtība (saskaņā ar ASCII skaitļiem). 
Lai noteiktu mediānu, masīvs tiek sakārtots augošā secībā. Tālāk tiek pārbaudīts, vai masīvs satur pāra sakitu elementu vai nepāra. Ja nepāra, tad tiek ņemts vidējais elements, savukārt, ja masīva garums ir pāra skaitlis, tad tiek rēķinātas divas mediānas - median high un median low. Piemēram, ja simbolu rindā ir 4 simboli, tad median high būs aprēķināts pēc formulas (1+n)/2 jeb tas būs 2 simbols, skaitot no beigām, bet median low - 2 simbols, skaitot no sākuma.  
Tālāk tiek rēķināta moda. Katrs simbols tiek sakārtots masīvā un tiek saskaitīts, cik reižu katrs simbols atkārtojas. Tālāk tiek noteikts, kāds ir lielākais atkārtošanas reižu skaits un atbildē kā moda tiek paziņoti visi simboli, kas ir atkārtojušies vislielāku reižu skaitu.  
Galu galā tiek izvadīta sakārtota simbolu rinda vienā rindā un atbilstoši ASCII skaitļi nākamajā rindā (rindas kārtošana alfabēta secībā).  

_Zemāk parādīts, ko izvada programma:_  

<img width="689" alt="image" src="https://user-images.githubusercontent.com/112925785/213754481-87360c84-9451-4145-b220-37e5ef2a4a37.png">


[^1]: J.Ziemelis. Ievads algoritmu valodā C. 2006.g. RTU. Rīga. - 56.lpp.-57.lpp.
