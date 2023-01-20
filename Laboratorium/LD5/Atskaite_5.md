# 5. laboratorijas darbs -  Skaitļu kopas kārtošana un statistika  
## Neliels ieskats teorijā :mag_right:

Skaitļu kārtošana var tikt realizēta ar dažādām metodēm. Šī laboratorijas darba ietvaros pievērsīsimies "burbuļu" kārtošanai. Katrā ciklā rindas galā tiks izvirzīts vieslielākais un vismazākais skaitlis, līdzīgi kā ūdenī uzpeld gaisa "burbulis". Metodes pamatā ir blakusesošo rindas elementu salīdzināšana un to maiņa vietām, ja nav nodrošināta nepieciešamā lielumu secība. Tātad šajā kārtošanas algoritmā tiek veikta konkrētā elementa salīdzināšana ar nākamo, vajadzības gadījumā mainot tos vietām. Process tiek atkārtots līdz netiek panākta sakārtota virkne.  

## Algoritms

Programma sākas ar dialogu ar lietotāju. No lietotāja tiek sagaidīts ievadīt simbolu (teksta) rindu bez atstarpēm. Kad tas ir izdarīts, simbolu rinda tiek saglabāta masīvā.  
Dotajā simbolu virknē tiek atrasts simbols ar vismazāko un vislielāko vērtību. Tie tiek saglabāti atsevišķos masīvos (ņēmot vērā arī to kārtas numuru). 
