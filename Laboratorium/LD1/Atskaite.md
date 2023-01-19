# 1. laboratorijas darbs - Teiora Rindas
## Neliels ieskats teorijā :mag_right:  
_Rakstot programmu, bieži vien ir nepieciešams zināt matemātiskās metodes. Izmantojot skaitļošanas matemātiskās metodes, ir iespējams izveidot vienkāršākas programmas un atrisināt uzdevumus._ 

Teilora rindas ir funkcijas sadalīšana bezgalīgā pakāpju funkciju summā.  
Ja funkcijai f(x) dotajā intervālā, kas satur punktu a, eksistē visu kārtu atvasinājumi, tai var pielietot Teilora formulu.  
Manā variantā dotā funckija ir hiperboliskā funkcija: y=cosh(x)  
Funkcijas vērtības un atvasinājumi pie x = 0:  
```
f(x)=cosh(x), f(0)=1
f'(x)=sinh(x), f'(0)=0
f''(x)=cosh(x), f''(0)=1
f'''(x)=sinh(x), f'''(0)=0
```
<img width="401" alt="image" src="https://user-images.githubusercontent.com/112925785/213489970-2cd0acfc-f491-41bb-9ab5-03ec6af1359d.png">


## Algoritms  
_Šajā darbā izmantosim divas metodes._ 
- Sāksim ar iebūvēto funkciju y=cosh(x) no matemātikas bibliotēkas. Tā tieši aprēķina hiperoboslikā kosinusa funkciju. Programma izdrukā cosh(x) aprēķināto vērtību.   
- Un alternatīva metode būs Teilora rindas izmantošana. Gala rezultātā programma izdrukās hiperboliskā kosinusa sadalīšanu Teilora rindā - vizuālo attēlojumu - un virknes pēdējā locekļa vērtību a500 un virknes summu S500.  




