# 🐍 Advanced Snake Game (C++ Windows Forms) / Продвинутая игра в змейку (C++ Windows Forms)

🎮 A modern, enhanced version of the classic **Snake Game**, fully implemented in **C++ using OOP and Windows Forms**. 

Современная, улучшенная версия классической игры Змейка, полностью реализованная на C++ с использованием ООП и Windows Forms. 
---

## 📌 Description / Описание

This game is a dynamic, feature-rich **Snake** implementation with graphical rendering, user-friendly interface, and multiple difficulty levels. The snake grows by eating apples and dies if it hits the wall, obstacles, or itself. 

The application uses **four main classes**: Snake, Apple, Game Field, and Movement, each encapsulating specific behaviors and responsibilities. The UI is implemented with **Windows Forms** (`System::Windows::Forms::Form`), and game objects are drawn using **PictureBox controls** or coordinate updates.

Эта игра представляет собой динамичную, многофункциональную игру-змейку с графическим оформлением, удобным интерфейсом и множеством уровней сложности. Змея растет, поедая яблоки, и погибает, если ударяется о стену, препятствия или саму себя.

Приложение использует ** четыре основных класса **: Змея, Яблоко, Игровое поле и Движение, каждый из которых включает в себя определенное поведение и обязанности. Пользовательский интерфейс реализован с помощью **Windows Forms** (`System::Windows::Forms::Form`), а игровые объекты рисуются с помощью ** элементов управления PictureBox** или обновлений координат.

---

## 🎯 Features / Особенности

| Feature (EN) | Описание (RU) |
|--------------|---------------|
| ✅ Object-Oriented Design | Объектно-ориентированная архитектура (4 класса: Snake, Apple, Field, Movement) |
| 🎨 GUI on Windows Forms | Графический интерфейс через формы и PictureBox |
| 🍏 Classic Apple | Увеличивает длину змейки |
| ☠️ Poison Apple | Постоянно меняет положение, убивает при поедании |
| 🌟 Golden Apple | Увеличивает скорость змейки |
| 🌀 Teleport Surprise | Перемещает змейку в случайную часть поля |
| ⚙️ 3 Difficulty Levels | Три уровня сложности с разной скоростью |
| 🎮 Arrow Key Controls | Управление через WASD |
| 💥 Collision Detection | Проверка столкновений со стенами, препятствиями и телом змеи |
| 🧪 Scalable Game Logic | Удобное расширение кода (новые элементы, бонусы и т.п.) |

---

## 🧱 Class Diagram (Logical Architecture)

```
Snake     → Handles snake body, coordinates, growth logic
Apple     → Generates apples (regular, golden, poison)
GameField → Manages game area, obstacles, borders
Movement  → Controls game loop, timer, collision detection
```
```
Змея → Управляет телом змеи, координатами, логикой роста
Яблоко → Генерирует яблоки (обычные, золотистые, ядовитые)
Игровое поле → Управляет игровой зоной, препятствиями, границами
Движение → Управляет игровым циклом, таймером, обнаружением столкновений
```


---

## 🕹️ Controls / Управление

| Key | Action (EN)     | Действие (RU)        |
|-----|-----------------|----------------------|
| W | Move Up           | Вверх                |
| S | Move Down         | Вниз                 |
| A | Move Left         | Влево                |
| D | Move Right        | Вправо               |

---

## 🧪 Topics Covered / Используемые темы

- C++ and Windows Forms integration / Интеграция C++ и Windows Forms
- Object-Oriented Programming: encapsulation, classes, separation of concerns / Объектно-ориентированное программирование: инкапсуляция, классы, разделение задач
- Game timing using timers / Определение времени игры с использованием таймеров
- PictureBox as game object representation / PictureBox как представление игрового объекта
- Event-driven programming and keyboard handling / Событийно-ориентированное программирование и работа с клавиатурой
- Collision detection (walls, objects, self) / Обнаружение столкновений (стены, объекты, хвост)

---

## 🛠 How to Run / Как запустить

1. Open the project in **Visual Studio** with C++/CLI support.
2. Build the solution.
3. Run the game (F5).
4. Choose difficulty level and start playing!

1. Откройте проект в **Visual Studio** с поддержкой C++/CLI.
2. Создайте решение.
3. Запустите игру (F5).
4. Выберите уровень сложности и начинайте играть!

---
🤝 Author | Автор Made with ❤️ by Ayi4ka in 2021 / Сделано с любовью — Айка в 2021 году

## 📷 Screenshots / Скриншоты

![screenshot](./docs/screenshot_game.png)

---
