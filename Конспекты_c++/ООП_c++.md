# ООП в C++

ООП (объектно-ориентированное программирование) --- это подход, где
программа строится на классах и объектах.

## Класс и объект

Класс --- это тип данных (шаблон).\
Объект --- экземпляр класса.

``` cpp
class Car {
public:
    string brand;
    int speed;
};

Car myCar;
myCar.brand = "BMW";
myCar.speed = 200;
```

## Основные принципы ООП

### 1. Инкапсуляция

Скрытие данных и доступ к ним через методы.

``` cpp
class Person {
private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};
```

### 2. Наследование

Один класс может наследовать свойства и методы другого.

``` cpp
class Animal {
public:
    void sound() {
        cout << "Some sound";
    }
};

class Dog : public Animal {
};
```

### 3. Полиморфизм

Один интерфейс --- разные реализации.

``` cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark";
    }
};
```

### 4. Абстракция

Скрытие реализации, показ только нужного.

``` cpp
class Shape {
public:
    virtual void draw() = 0;
};
```

## Конструктор и деструктор

Конструктор вызывается при создании объекта.\
Деструктор --- при удалении.

``` cpp
class A {
public:
    A() {
        cout << "Создано";
    }

    ~A() {
        cout << "Удалено";
    }
};
```

## Кратко

Класс --- описание\
Объект --- экземпляр\
Инкапсуляция --- скрытие данных\
Наследование --- переиспользование\
Полиморфизм --- разное поведение\
Абстракция --- только важное
