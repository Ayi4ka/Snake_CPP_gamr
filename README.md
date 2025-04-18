# 🐍 Advanced Snake Game (C++ Windows Forms)

🎮 A modern, enhanced version of the classic **Snake Game**, fully implemented in **C++ using OOP and Windows Forms**. This project was designed as part of a coursework assignment to demonstrate object-oriented design, UI integration, and game logic in a Windows GUI application.

---

## 📌 Description / Описание

This game is a dynamic, feature-rich **Snake** implementation with graphical rendering, user-friendly interface, and multiple difficulty levels. The snake grows by eating apples and dies if it hits the wall, obstacles, or itself. 

The application uses **four main classes**: Snake, Apple, Game Field, and Movement, each encapsulating specific behaviors and responsibilities. The UI is implemented with **Windows Forms** (`System::Windows::Forms::Form`), and game objects are drawn using **PictureBox controls** or coordinate updates.

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
| 🎮 Arrow Key Controls | Управление через клавиши-стрелки и WASD |
| 💥 Collision Detection | Проверка столкновений со стенами, препятствиями и телом змеи |
| 🧪 Scalable Game Logic | Удобное расширение кода (новые элементы, бонусы и т.п.) |

---

## 🧱 Class Diagram (Logical Architecture)


# 🐍 Advanced Snake Game (C++ Windows Forms)

🎮 A modern, enhanced version of the classic **Snake Game**, fully implemented in **C++ using OOP and Windows Forms**. This project was designed as part of a coursework assignment to demonstrate object-oriented design, UI integration, and game logic in a Windows GUI application.

---

## 📌 Description / Описание

This game is a dynamic, feature-rich **Snake** implementation with graphical rendering, user-friendly interface, and multiple difficulty levels. The snake grows by eating apples and dies if it hits the wall, obstacles, or itself. 

The application uses **four main classes**: Snake, Apple, Game Field, and Movement, each encapsulating specific behaviors and responsibilities. The UI is implemented with **Windows Forms** (`System::Windows::Forms::Form`), and game objects are drawn using **PictureBox controls** or coordinate updates.

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
| 🎮 Arrow Key Controls | Управление через клавиши-стрелки и WASD |
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

---

## 🕹️ Controls / Управление

| Key | Action (EN)         | Действие (RU)        |
|-----|---------------------|----------------------|
| ↑ / W | Move Up           | Вверх                |
| ↓ / S | Move Down         | Вниз                 |
| ← / A | Move Left         | Влево                |
| → / D | Move Right        | Вправо               |
| Esc   | Exit / Pause       | Выход / Пауза        |

---

## 🧪 Topics Covered / Используемые темы

- ✅ C++ and Windows Forms integration
- 🧱 Object-Oriented Programming: encapsulation, classes, separation of concerns
- 🧮 Game timing using timers
- 🧊 PictureBox as game object representation
- 🧠 Event-driven programming and keyboard handling
- ⚠️ Collision detection (walls, objects, self)

---

## 🛠 How to Run / Как запустить

1. Open the project in **Visual Studio** with C++/CLI support.
2. Build the solution.
3. Run the game (F5).
4. Choose difficulty level and start playing!

> 💡 Ensure Windows Forms support is enabled in your project properties.

---

## 📷 Screenshots / Скриншоты

![screenshot](./docs/screenshot_game.png)

*(Insert your actual screenshot or gif if you have it)*

---

## 🗂️ Project Structure / Структура проекта

```
Snake_OOP_WinForms/
├── Snake.cpp / .h       → Snake logic
├── Apple.cpp / .h       → Apple logic
├── GameField.cpp / .h   → Playing field
├── Movement.cpp / .h    → Game engine & input
├── Form1.h              → GUI
├── main.cpp             → Program entry point
├── Resources/           → Icons, sprites
├── README.md
```

---

## ✨ Author / Автор

**👩‍💻 Ayi4ka**  
Created as part of coursework in object-oriented game development.

📬 [GitHub Profile](https://github.com/Ayi4ka)

---

> "Even a simple snake can teach complex logic."  
> «Даже простая змейка может научить продуманной архитектуре.»
