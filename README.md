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
- CMake: narzędzie do automatycznego zarządzania procesem kompilacji programu.

## Instalacja

1. Upewnij się, że masz zainstalowany Vcpkg (jeśli nie - zajrzyj tutaj: https://github.com/microsoft/vcpkg) i skonfiguruj zmienną środowiskową `VCPKG_ROOT` wskazującą na katalog główny Vcpkg. W systemie Windows można to zrobić w następujący sposób:

   - Otwórz Panel sterowania → System i zabezpieczenia → System → Zaawansowane ustawienia systemu.
   - Kliknij „Zmienne środowiskowe”.
   - W sekcji „Zmienne systemowe” kliknij „Nowa” i dodaj zmienną:
     - Nazwa zmiennej: `VCPKG_ROOT`
     - Wartość zmiennej: [Ścieżka do katalogu głównego Vcpkg]

2. Zainstaluj potrzebne paczki, w tym SFML, za pomocą Vcpkg:

```bash
$ vcpkg install sfml
```

3. Sklonuj repozytorium na swoje urządzenie:

W oknie konsoli wpisz komendę:

```bash
$ git clone https://github.com/di0xinho/SFMLGame.git
```

4. Przejdź do katalogu z projektem:

```bash
$ cd SFMLGame
```

5. Stwórz podkatalog "build", a następnie przejdź do niego:

```bash
$ mkdir build
```

```bash
$ cd build
```

6. Uruchom CMake, aby skonfigurować projekt:

```bash
$ cmake ..
```

## Budowanie projektu

1. Wygeneruj pliki projektu w katalogu build:

```bash
$ cmake --build .
```

2. Po zakończeniu budowy, znajdź skompilowany plik wykonywalny w katalogu build/debug (lub build/release, w zależności od wybranej konfiguracji).

## Uruchamianie Gry

Po udanym zbudowaniu gry uruchom ją bezpośrednio w IDE (otwórz plik solucji w katalogu build i wybierz Debugowanie > Uruchomienie z Debugowaniem) lub wykonaj skompilowany plik binarny z poziomu terminala:

```bash
$ ./build/debug/SFMLGame
```