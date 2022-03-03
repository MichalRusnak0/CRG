#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int sirka = 20;
const int dlzka = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirecton dir;
void Setup()
{
    gameOver = false;
    dir = STOP;
    x = sirka / 2;
    y = dlzka / 2;
    fruitX = rand() % sirka;
    fruitY = rand() % dlzka;
    score = 0;
}
void Draw()
{
    system("cls"); 
    for (int i = 0; i < sirka + 2; i++)
        cout << "X";
    cout << endl;

    for (int i = 0; i < dlzka; i++)
    {
        for (int j = 0; j < sirka; j++)
        {
            if (j == 0)
                cout << "X";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "+";
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }


            if (j == sirka - 1)
                cout << "X";
        }
        cout << endl;
    }

    for (int i = 0; i < sirka + 2; i++)
        cout << "X";
    cout << endl;
    cout << "Score:" << score << endl;
}
void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
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
            gameOver = true;
            break;
        }
    }
}
void Logic()
{
    int predX = tailX[0];
    int predY = tailY[0];
    int pred2X, pred2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        pred2X = tailX[i];
        pred2Y = tailY[i];
        tailX[i] = predX;
        tailY[i] = predY;
        predX = pred2X;
        predY = pred2Y;
    }
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
    if (x > sirka || x < 0 || y > dlzka || y < 0)
        gameOver = true;


    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;

    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % sirka;
        fruitY = rand() % dlzka;
        nTail++;
    }
}
int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(10); 
    }
    return 0;
}






















// mozno som si pozical kod https://pastebin.com/KQVQYmRf