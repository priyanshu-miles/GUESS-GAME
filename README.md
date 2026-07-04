# 🎯 Guess the Number Game (C)

A simple command-line **Guess the Number** game written in **C**.

The program generates a random number between **1 and 100**, and the player has to guess it. After every incorrect guess, the game provides a hint telling the player whether to guess **higher** or **lower**. The game continues until the correct number is guessed.

---

## 📌 Features

* 🎲 Random number generation using `rand()`
* 🌱 Uses `srand(time(0))` to generate different random numbers every run
* 🔁 Unlimited guesses until the correct answer is found
* 📊 Counts the total number of guesses
* 💻 Simple command-line interface

---

## 🛠️ Technologies Used

* C Programming Language
* Standard C Libraries

  * `stdio.h`
  * `stdlib.h`
  * `time.h`

---

## 🚀 How to Compile

Using GCC:

```bash
gcc guess_the_number.c -o guess
```

---

## ▶️ How to Run

### Windows

```bash
guess.exe
```

### Linux / macOS

```bash
./guess
```

---

## 🎮 Example Output

```text
Guess The Number

50
LOWER NUMBER PLEASE !!

25
HIGHER NUMBER PLEASE !!

37
LOWER NUMBER PLEASE !!

31
YOU GUESS THE NUMBER IN 4 GUESSES
```

---

## 📚 Concepts Practiced

This project helped me practice:

* Variables
* User input (`scanf`)
* Conditional statements (`if` / `else`)
* Loops (`do...while`)
* Random number generation
* Functions (`rand()`, `srand()`, `time()`)
* Basic game logic

---

## 📂 Project Structure

```
Guess-The-Number/
│
├── guess_the_number.c
└── README.md
```

---

## 🔮 Future Improvements

Some features I plan to add:

* Difficulty levels (Easy, Medium, Hard)
* Limited number of attempts
* Score system
* Play Again option
* Best score tracking
* Input validation for non-numeric input

---

## 👨‍💻 Author

Made by **Priyanshu** while learning C programming.

This project is part of my journey to improve my programming skills by building small and practical projects.

---

## 📄 License

This project is open source and available under the MIT License.
