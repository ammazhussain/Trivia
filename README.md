# Trivia Game - Functionality Overview

This C++ trivia game challenges the player with random questions. The goal is to accumulate as much money as possible by answering correctly. 

## 🎮 Game Features

- **User-Friendly Interface**: Clean command-line interface with centered output formatting.
- **Random Question Selection**: The game uses `rand()` to shuffle question order from a set of 10.
- **Two Lifelines**:
  - **Pay Half & Skip** (`H`): Pay half the current question's amount and skip it.
  - **Leave Question** (`L`): Skip the question without any penalty.
  - Lifelines get reset upon correct streaks (3 for Pay Half & Skip, 5 for Leave Question).
- **Scoring**:
  - Starting reward = Rs. 100.
  - Each correct answer doubles the reward for the next question.
  - Wrong answers deduct half the current question amount.
- **Termination Condition**:
  - Game ends if all 10 questions are answered.
  - Or if the player's balance drops below zero.

## 🧾 Game Flow Summary

1. User enters name and reads terms.
2. Each loop:
   - A question is randomly picked.
   - Lifeline availability is shown.
   - User inputs answer or lifeline.
   - Score is updated accordingly.
3. Game ends with a detailed result card showing:
   - Total questions
   - Right/wrong answers
   - Lifelines used
   - Final balance

Enjoy the challenge and see how much trivia knowledge you have!
