# Работа с файлами в C++

В C++ работа с файлами идет через библиотеку fstream.

## Подключение

``` cpp
#include <fstream>
```

## Запись в файл

``` cpp
#include <fstream>
using namespace std;

int main() {
    ofstream file("test.txt");
    file << "Hello";
    file.close();
}
```

## Чтение из файла

``` cpp
#include <fstream>
using namespace std;

int main() {
    ifstream file("test.txt");
    string text;
    file >> text;
    file.close();
}
```

## Основные классы

ifstream --- чтение\
ofstream --- запись\
fstream --- чтение и запись

## Проверка открытия

``` cpp
if (file.is_open()) {
    // файл открыт
}
```

## Важно

-   всегда закрывать файл
-   проверять открылся ли файл
