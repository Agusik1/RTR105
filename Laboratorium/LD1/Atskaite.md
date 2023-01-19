# 1. laboratorijas darbs - Teilora Rindas
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
Rekurences reizinātājs: <img width="455" alt="image" src="https://user-images.githubusercontent.com/112925785/213495096-c1b618cf-ec1d-440c-b0ef-ca19b3419040.png">


## Algoritms  
_Šajā darbā izmantosim divas metodes._ 
- Sāksim ar iebūvēto funkciju y=cosh(x) no matemātikas bibliotēkas. Tā tieši aprēķina hiperoboslikā kosinusa funkciju. Programma izdrukā cosh(x) aprēķināto vērtību.   
- Un alternatīva metode būs Teilora rindas izmantošana. Gala rezultātā programma izdrukās hiperboliskā kosinusa sadalīšanu Teilora rindā - vizuālo attēlojumu - un virknes pēdējā locekļa vērtību a500 un virknes summu līdz pēdējam loceklim S500. Zemāk parādīts rezultāta piemērs:  
```
Funkcijas cosh(x) aprēķināšana!
Jūsu ievadītais arguments x: 4
cosh(4.000000) = 27.308233 

a0 = 1.000000e+00 S0 = 1.000000
a499 = 2.853298e-1966  S499 = 27.308233
a500 = 4.551613e-1971  S500 = 27.308233
cosh(4.000000) caur summu = 27.308233 

            500                              
          -------                            
          \           2∗k                        
           \         x                         
cosh(x) =>          -------                        
           /         (2∗k)!                         
          /                                  
          -------                            
           k=0                               
                                 2            
                                x           
 Rekurences reizinātājs:   -----------          
                           (2k-1)∗(2k)            

```


