# Aufgaben 1 - Speicherverwaltung

## Aufgabe 1

### a)

Erledigt. VS Code als IDE und Clang 13.0.0 als Compiler.

### b)

Erledigt.

## Aufgabe 2

### a)

Ablauf einer Kompilierung:

1. Der Präprozessor verarbeitet die CPP-Quelldatei. Hierbei wird der Inhalt der Header Dateien in die Source Datei kopiert. Es resultiert eine erweiterte Quellcodedatei.
2. Die erweiterte Quellcodedatei wird vom Compiler in Assemblersprache für die jeweilige Plattform übersetzt. Es entsteht eine Assembler Datei (`.s` Datei).
3. Die Assembler Datei wird vom Assembler in eine Objekt-Code-Datei umgewandelt (`.o` Datei).
4. Die-Objekt-Code Datei wird mit Funktionen aus der Standardbibliothek kombiniert und mithilfe des Linkers zu einer ausführbaren Datei verlinkt.

### b)

Die Namen von Programmelementen wie Variablen, Funktionen, Klassen usw. müssen deklariert werden, bevor diese verwendet werden können.

Beispielsweise kann nicht einfach Dummy2 geschrieben werden, ohne `y` vorher zu deklarieren.
Die Deklaration teilt dem Compiler mit, ob das Element ein `int`, ein `double`, eine `class` oder ein anderes Element ist. Darüber hinaus muss jeder Name (direkt oder indirekt) in jeder CPP-Datei deklariert werden, in der er verwendet wird.

Wenn ein Programm kompiliert wird, wird jede CPP-Datei unabhängig in eine Kompilierungseinheit kompiliert.
Der Compiler weiß nicht, welche Namen in anderen Kompilierungseinheiten deklariert werden. Wenn also eine Klasse, Funktion oder globale Variable definiert wird, muss in jeder zusätzlichen CPP-Datei, die verwendet wird, eine Deklaration dieser Sache bereitstehen. Jede Deklaration dieser Sache muss in allen Dateien genau identisch sein. Eine geringfügige Inkonsistenz verursacht Fehler oder unbeabsichtigtes Verhalten, wenn der Linker versucht, alle Kompilierungseinheiten in einem einzigen Programm zusammenzuführen.

### c)

Einbindung von Headern:

1. Da in der Implementierung eventuell Klassen verwendet werden, die in den Headern definiert sind. Würden diese erstellt werden, ohne die Header einzubinden, würde ein Kompilierungsfehler entstehen, da der Compiler die Deklarationen nicht finden kann.
2. Eine Systembibliothek ist meistens eigenständig und kann direkt verwendet werden. Eigener Code verwendet eventuell Funktionen aus der Systembibliothek oder andere Fremdbibliotheken. Wenn Fremdbibliotheken im eigenen Code verwendet werden, sollten zuerst die Fremdbibliotheken eingebunden werden. Falls diese Bibliotheken Funktionen aus der Standardbibliothek verwenden, sollte diese zuerst eingebunden werden. Daher ergibt sich die Reihenfolge:

   Standardbibliothek > Fremdbibliotheken > eigene Header.

### d)

`#define` erstellt ein Makro, dass die angegebene Zeichenfolge mithilfe des Präprozessors durch die entsprechende Zeichenfolge ersetzt. Also wird bei `#define MULT(a, b) a * b` jedes `MULT(a, b)` durch `a * b` ersetzt.

#### 1)

```cpp
std::cout << MULT(2, 3) << std::endl;
```

wird zu:

```cpp
std::cout << 2 * 3 << std::endl. `6`;
```

Also ist die Ausgabe `6`.

#### 2)

```cpp
std::cout << MULT(2.f, 3.f) << std::endl;
```

wird zu:

```cpp
std::cout << 2.f * 3.f << std::endl;
```

Also ist die Ausgabe `6`.

#### 3)

```cpp
std::cout << MULT(1 + 4, 5 + 3) << std::endl;
```

wird zu:

```cpp
std::cout << 1 + 4 * 5 + 3 << std::endl;
```

Nach Punkt vor Strich ist die Ausgabe `24`.

#### 4)

```cpp
std::cout << MULT((1 + 4), (5 + 3)) << std::endl;
```

wird zu:

```cpp
std::cout << (1 + 4) * (5 + 3) << std::endl;
```

Also ist die Ausgabe `40`.

#### 5)

```cpp
std::cout << MULT("1" << 4, 5 << "2") << std::endl;
```

wird zu:

```cpp
std::cout << "1" << 4 * 5 << "2" << std::endl;
```

`1` wird ausgegeben, dann wird `4 * 5` berechnet und ausgegeben, dann wird `2` ausgegeben. Also ist die Ausgabe `1202`.

#### 6)

```cpp
std::cout << MULT(MULT(2, 3), 4) << std::endl;
```

wird zu:

```cpp
std::cout << 2 * 3 * 4 << std::endl;
```

Also ist die Ausgabe `24`.

## Aufgabe 3

### a)

BILD EINFÜGEN!

### b)

### c)

## Aufgabe 4

### a)

### b)

### c)