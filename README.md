# Alex's Hangman Game
This game simulates a game of hangman, where users have to guess all of the letters in the hidden word before the character shown on screen is fully drawn.

<img width="900" alt="Screenshot 2024-08-20 at 1 30 15 PM" src="https://github.com/user-attachments/assets/2d62785a-3b54-428d-9a24-26fb23a5d9e7">

# Hangman Game Technology
This game utilizes the C++ programming language and user input from the terminal. Common programming statements in back-end programming were used to run the game, including if-statements to check the user's guesses against the letters in the hidden word, and loops to continually ask the user for a guess. A vector was used to store the user's previous letter guesses in order to repeatedly show the user what has already been guessed. Through object-oriented programming, the hangman character was programmed to be an object in the "drawing" class which contains a method to draw the character in specific ways depending on how many incorrect guesses the user gave. A struct was used to hold the boolean variables that indicate when a "cheat code" has been used.

# Using the Hangman Game
When the program is initially run, users are prompted for the topic that they would like their hidden word to be from. The provided topics include math, science, english, history, and miscellaneous. Upon receiving the topic, the program will choose a random word from its word bank (that was manually created), draw the beginning hangman character (just the stand), and prompt the user for their first letter guess.

Once the user provides a guess, they will be told if the guess is in the word. If the guess is in the word, the dashes on screen (representing the letters in the word) will begin to turn into letters, revealing part of the hidden word. If the guess is not in the word, more of the hangman character will be drawn on screen. This continues until all of the letters in the hidden word are guessed or until the hangman character is fully drawn (after which the hidden word is revealed).

<img width="900" alt="Screenshot 2024-08-20 at 1 44 53 PM" src="https://github.com/user-attachments/assets/4de1fa91-dbbb-4b34-be02-36a3d87dee6d">

Cheat codes can also be found throughout the game as hidden sets of random characters. These cheat codes can be inputted at the beginning of the game to execute one of the three potential game modes. These game modes could provide the user with more guesses, make the hidden word longer and more challenging, or create an endless game.

<img width="900" alt="Screenshot 2024-08-20 at 1 45 59 PM" src="https://github.com/user-attachments/assets/b857e402-6df6-43ef-896c-9d9cabb2a635">
