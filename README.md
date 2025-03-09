Introduction
This is a   console-based Tic-Tac-Toe game written in   C++  . It allows   two players   to play against each other, keeps track of  game statistics  , and provides a user-friendly   main menu  . The game ensures   valid moves  , detects   winners  , and allows replaying multiple times without restarting the program.

Features
✅   Two-player mode   – Play against another person.  
✅   Game statistics   – Track wins for Player 1, Player 2, and ties.  
✅   Main menu   – Start a new game, view stats, or exit.  
✅   Valid move checking   – Prevents overwriting existing moves.  
✅   Replay option   – Allows multiple rounds without restarting.  
✅   User-friendly UI   – Console-based interaction with clear prompts.  

---

  Game Rules    
1. The game is played on a   3x3 grid  .  
2. Player 1 chooses   their marker (  X or O  ), and Player 2 gets the other.  
3. Players take turns placing their marker in an empty slot (1-9)  .  
4. The first player to get   three markers in a row (horizontally, vertically, or diagonally)   wins  .  
5. If all   9 slots are filled without a winner, it's a tie  .  
6. The game can be played   multiple times   without restarting.  

---

How to Play    

 1️⃣ Run the program    
Compile and run the program using a C++ compiler:  
```sh
g++ tic_tac_toe.cpp -o tic_tac_toe
./tic_tac_toe
```

 2️⃣ Main Menu    
After starting, you’ll see this menu:  
```
=== Tic-Tac-Toe ===
1. Play Game
2. View Stats
3. Exit
Enter choice:
```
-   Enter 1   to start a new game.  
-   Enter 2   to view player win statistics.  
-   Enter 3   to exit the game.  

  3️⃣ Playing the Game    
-   Player 1 chooses   their marker (  X or O  ).  
- Players   take turns   entering a   slot number (1-9)   to place their marker.  
- The board updates automatically after each move.  

 Example Board    
```
Tic-Tac-Toe Board:
1 2 3
4 5 6
7 8 9
```
- If Player 1 enters   5  , the board updates:  
```
1 2 3
4 X 6
7 8 9
```

4️⃣ Win & Tie Detection    
- If a player wins, the game announces the winner.  
- If no one wins and all slots are filled, it's a tie.  

5️⃣ Replay & Stats    
- After each game, the menu allows you to   play again or check stats  .  
- Stats track   Player 1 Wins, Player 2 Wins, and Ties  .  

---

Example Game Play    
```
=== Tic-Tac-Toe ===
1. Play Game
2. View Stats
3. Exit
Enter choice: 1

Player 1, choose marker (X or O): X
Player 1 (X) - Choose slot: 5

Tic-Tac-Toe Board:
1 2 3
4 X 6
7 8 9

Player 2 (O) - Choose slot: 3
```
_(The game continues until a winner or tie is detected.)_  

---


Requirements    
-   C++ Compiler   (e.g., g++, clang++)  
- Any   terminal   to run the compiled file  

---

Future Enhancements (To-Do List)  
🔹 Add   AI mode   to play against the computer.  
🔹 Implement   colorful UI   using ASCII art for a better experience.  
🔹 Save   game history   to a file.  
🔹 Add   difficulty levels   (Easy, Medium, Hard).  

---

Contributing    
Feel free to   fork   this repository, suggest   improvements  , or   add new features  ! 🎉  

---

 License    
📜 This project is   open-source   and free to use for learning and personal projects.  


