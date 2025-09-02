## Zadanie: Implementacja figur

## Cel zadania
Zaimplementuj klasy zgodzie z diagramem klas

![Diagram klas](kolaikwadraty.png)

i testami jednostkowymi umieszczonymi w:.
- `test_line.cpp`
- `test_point.cpp`
- `test_triangle.cpp`
- `test_quadrilateral.cpp`
- `test_group.cpp`
 
### Dodatkowo:
- Metoda 'flip()' odwraca figurę względem punktu 0,0.
- Metdoa getSurtface() zwraca pole powierzchni figury zgodnie z https://pl.wikipedia.org/wiki/Wz%C3%B3r_Herona i https://pl.wikipedia.org/wiki/Metoda_analityczna_obliczania_p%C3%B3l
- Dla Group pole powierzchni to suma pól powierzchni figur w grupie.
- Metoda 'move(x,y)' przesuwa figurę o wektor (x,y).
- Metoda 'equals(...)' porównuje dwie figury. Zwraca true jeśli figury są identyczne.
- Konstruktor kopiujacy wymaga 'const' w parametrze 'other'. Nie jest to opisane na diagramie klas, ale jest to niezbędne do poprawnego działania programu.


## Test
Aby uruchomić testy jednostkowe, wykonaj komendę w termnalu:
```bash
make test_line
make test_point
make test_triangle
make test_quadrilateral
make test_group
```