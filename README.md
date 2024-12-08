# Gra Platformowa napisana przy użyciu biblioteki SFML

### Projekt zrealizowany w ramach pracy magisterskiej: Analiza Porównawcza Bibliotek do Tworzenia Gier (SFML, Raylib i SDL2)

## Krótki opis projektu

To repozytorium zawiera grę platformową stworzoną przy użyciu biblioteki SFML jako część analizy porównawczej na potrzeby pracy magisterskiej pt. „Analiza porównawcza bibliotek ułatwiających tworzenie gier”. Celem jest zaimplementowanie tych samych mechanik gry z użyciem trzech różnych bibliotek — SFML, Raylib i SDL2 — aby ocenić ich różnice pod względem łatwości użytkowania, wydajności oraz dostępnych funkcji.

## Opis gry

Gra platformowa zawiera:

- podstawowe mechaniki ruchu: skok, bieg i poruszanie się po platformach,
- detekcję kolizji: umożliwia interakcje z otoczeniem i przeszkodami,
- punktację i postęp: punkty są przyznawane za postęp gracza.

Każda implementacja gry zachowuje te same funkcje - umożliwi to obiektywne porównanie bibliotek.

## Cele Pracy Magisterskiej

Celem pracy jest dokonanie analizy porównawczej bibliotek Raylib, SFML i SDL2, skoncentrowanej na możliwościach każdej z nich w kontekście tworzenia gier (na potrzeby mojej pracy skupię się na tworzeniu gier platformowych). W ramach tego projektu zostaną wykonane następujące kroki:

- stworzenie gry platformowej przy użyciu każdej biblioteki - pozwoli to na porównanie wydajności bibliotek,
- badanie opinii społeczności programistów gier - na forach i grupach społecznościowych zostanie zebrana opinia programistów, którzy podzielą się swoim doświadczeniem i preferencjami dotyczącymi poszczególnych bibliotek,
- zestawienie zalet i wad bibliotek - na podstawie praktycznych testów oraz opinii społeczności powstanie przegląd największych zalet i wyzwań, jakie napotkali użytkownicy każdej z bibliotek.

# Rozpoczęcie Pracy

## Wymagania Wstępne

- Kompilator: Visual Studio 2022 lub inny kompatybilny kompilator C++.
- Vcpkg: menedżer pakietów C/C++ do pobierania i zarządzania bibliotekami.

## Instalacja

1. Sklonuj repozytorium na swoje urządzenie:

W oknie konsoli wpisz komendę:

```bash
$ git clone https://github.com/di0xinho/SFML_Game.git
```

2. Przejdź do katalogu z projektem:

```bash
$ cd SFMLGame
```

## Budowanie projektu

1. Uruchom plik solucji.
2. W ustawieniach projektu włącz tryb manifestu vcpkg.
3. Zbuduj projekt (Kompilacja > Zbuduj Rozwiązanie).

## Uruchamianie Gry

Po udanym zbudowaniu gry uruchom ją bezpośrednio w Visual Studio (Debugowanie > Uruchomienie z Debugowaniem) lub wykonaj skompilowany plik binarny z poziomu terminala.