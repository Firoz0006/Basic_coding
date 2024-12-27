#include <iostream>
#include <conio.h>  // For _kbhit() and _getch()
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For seeding rand()
#include <windows.h> // For Sleep()

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int snakeX, snakeY, fruitX, fruitY, score;
int tailX[100], tailY[100]; // Snake's tail
int tailLength;             // Length of the tail
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    snakeX = width / 2;
    snakeY = height / 2;
    srand(time(0)); // Seed for random number generator
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    tailLength = 0;
}

void Draw() {
    system("cls"); // Clear the screen

    // Top border
    for (int i = 0; i < width + 2; i++) 
        cout << "#";
    cout << endl;

    // Map and snake/fruit
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) 
                cout << "#"; // Left border

            if (i == snakeY && j == snakeX) 
                cout << "O"; // Snake's head
            else if (i == fruitY && j == fruitX) 
                cout << "F"; // Fruit
            else {
                bool isTail = false;
                for (int k = 0; k < tailLength; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o"; // Snake's tail
                        isTail = true;
                    }
                }
                if (!isTail) 
                    cout << " "; // Empty space
            }

            if (j == width - 1) 
                cout << "#"; // Right border
        }
        cout << endl;
    }

    // Bottom border
    for (int i = 0; i < width + 2; i++) 
        cout << "#";
    cout << endl;

    // Score display
    cout << "Score: " << score << endl;
}

void Input() {
    if (_kbhit()) { // Check if a key is pressed
        switch (_getch()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true; // Quit the game
                break;
        }
    }
}

void Logic() {
    // Move the tail
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = snakeX;
    tailY[0] = snakeY;

    for (int i = 1; i < tailLength; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    // Move the snake's head
    switch (dir) {
        case LEFT:
            snakeX--;
            break;
        case RIGHT:
            snakeX++;
            break;
        case UP:
            snakeY--;
            break;
        case DOWN:
            snakeY++;
            break;
        default:
            break;
    }

    // Wall collision logic (end game)
    if (snakeX < 0 || snakeX >= width || snakeY < 0 || snakeY >= height) 
        gameOver = true;

    // Tail collision logic
    for (int i = 0; i < tailLength; i++) {
        if (tailX[i] == snakeX && tailY[i] == snakeY) {
            gameOver = true;
        }
    }

    // Eating fruit logic
    if (snakeX == fruitX && snakeY == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        tailLength++;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // Control game speed
    }

    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}
