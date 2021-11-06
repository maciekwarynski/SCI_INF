Celem zajęć jest sprawdzenie umiejętności programowania w języku C++ oraz zapoznanie z
podstawowymi funkcjami szyfrującymi. Kod finalny (tylko główny plik o dowolnej nazwie)
prezentujący wykonane zadania ma znaleźć się w zdalnym repozytorium Git.
Tworzenie programu umożliwiającego szyfrowanie wiadomości.
1. Załóż na swoim profilu na portalu github.com nowe repozytorium o nazwie SCI_INF i stwórz w nim
nowy katalog PracaNaLekcjiNr1. W tym katalogu powinien znaleźć się główny plik z wykonanymi
zadaniami. Po stworzeniu repozytorium sklonuj je na dysk twardy swojego PC i tam będziesz mógł
wrzucać zmiany w swoim kodzie. (Wrzucenie pliku przez „przeciągnięcie” na stronie będzie
odejmowało ocenę końcową)
2. Napisz program, w którym użytkownik będzie poproszony o podanie z klawiatury ciąg znaków z
małych liter np. „ala ma kota”. Aby możliwe było zapisanie tekstu oddzielonego spacjami do zmiennej
należy użyć metody getline(cin, < nazwa zmiennej do której chcemy zapisać teskt>). Domyślnie
wczytywanie teksty zakończy się po wciśnięciu enter.
3. Jeżeli mamy już zapisany tekst. Należy wyświetlić użytkownikowi możliwości wyboru algorytmu
szyfrującego. Domyślnie użytkownik powinien mieć do wyboru 1. Szyfr podstawieniowy(szyfr cezara)
2. Szyfr przestawieniowy 3. Szyfr podstawieniowy i szyfr przestawieniowy. 4. Odszyfruj teskt. Po
wybraniu algorytmu przez użytkownika powinna uruchamiać się osobna funkcja realizująca
szyfrowanie tekstu. Obie metody muszą jako argument przyjmować tekst przekazany przez
użytkownika a zwracać mają tekst po szyfrowaniu (Jest to wymagane!). 3 funkcja może wywoływać
dwie poprzednie funkcje w odpowiedniej kolejności, więc nie jest wymagany nowy kod, jednak
należy dobrze przekazać argumenty do obu funkcji.
4. Funkcja realizująca szyfr podstawieniowy powinna pytać użytkownika o ile chce przesunąć
konkretne litery (max. 26). Np. Jeżeli poda 1 to z litery a powinno zrobić się b. Jak poda 2 to z litery a
powinno zrobić się c. Pamiętaj, że pojedyncza litera jest widziana w naszym programie jako
konkretna wartość liczbowa. (tablica ASCII). Litery od a do z mają wartości 97-122 i tylko te wartości
powinniśmy brać pod uwagę w naszym algorytmie szyfrującym. Czyli jeżeli sprawdzając wartość litery
okaże się, że ma wartość spoza zakresu to nic nie robimy. Jeżeli wartość znaku będzie w podanym
zakresie to powinniśmy do wartości tego znaku dodać wartość podaną przez użytkownika. Należy
uważać by nie przekroczyć zakresu. Czyli dodając 1 do 122 nie powinniśmy otrzymać 123 tylko 97 ( w
tym przypadku przechodzimy z liter z do a). Można wykonać to np. takim działaniem „<otrzymana
wartość> % 123 + 97”.
5. W szyfrze przestawieniowym powinniśmy zamienić kolejnością sąsiadujące ze sobą elementy. (0 z
1, 2 z 3, 4 z 5 itd.) Np. jak mamy wyraz „lokomotywa” to powinniśmy otrzymać wyraz „olokomytaw”.
By ułatwić sobie wykonanie tego zadania w naszej pętli iterujące po elementach napisu powinniśmy
poruszać się co 2 elementy w każdym obiegu pętli. Pomysł na implementację rozwiązania należy
wymyślić samodzielnie.
6. Funkcja odszyfrująca ma za zadanie przywrócić oryginalną wiadomość poddaną wcześniej
szyfrowaniu podstawieniowego. W zasadzie należy wykonać te same działania co w przypadku
szyfrowania, jedynie teraz zamiast dodawać wartości powinniśmy je odejmować. Zakładamy, że nie
znamy wartości jaka została użyta do szyfrowania. Więc teraz ważne jest by sprawdzić czy nie
przekroczymy zakresu w dół, czyli nie otrzymamy wartości mniejszej niż 97.

Powinniśmy sprawdzić wszystkie możliwe przesunięcia a jest ich tyle co liter w używanym alfabecie
123 – 97 = 26. Ta funkcja powinna pokazywać na ekranie każdą otrzymaną wersję tekstu, a
użytkownik powinien zweryfikować samodzielnie, który tekst jest poprawny.
Maila z linkiem do repozytorium należy podesłać na informatykasci@gmail.com
Sprawdzana będzie poprawność działania programu, czytelność kodu, czy funkcje są poprawnie
napisane i wywoływane, ilość wykonanych zadań. Należy zablokować użytkownikowi możliwość
podania złych wartości (w przypadku tekstu zakładamy, że użytkownik podaje poprawne wartości).
Ale np. w przypadku szyfru Cezara powinniśmy sprawdzić o jaką wartość użytkownik chce przesunąć
tekst, jeżeli chce podać liczbę ujemną lub 0 to powinniśmy mu tego zabronić. Tak samo jak poda
wartość większą niż 26.