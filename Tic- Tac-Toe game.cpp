#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int w = 10, h = 5;       // Grid width and height
    int x = w / 2, y = h / 2; // Player position
    int fx, fy;              // Food position
    int s = 0;               // Score
    char m;                  // Move input
    bool over = false;       // Game over flag

    srand(time(0));
    fx = rand() % w;
    fy = rand() % h;

    while (!over) {
        system("cls"); // Clear screen

        // Draw grid
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (j == x && i == y)
                    cout << "O";  // Player
                else if (j == fx && i == fy)
                    cout << "F";  // Food
                else
                    cout << ".";
            }
            cout << endl;
        }

        cout << "Score: " << s << endl;
        cout << "Move (w/a/s/d), x to exit: ";
        cin >> m;

        // Movement
        if (m == 'a') x--;
        else if (m == 'd') x++;
        else if (m == 'w') y--;
        else if (m == 's') y++;
        else if (m == 'x') over = true;

        // Wall collision
        if (x < 0 || x >= w || y < 0 || y >= h)
            over = true;

        // Eat food
        if (x == fx && y == fy) {
            s++;
            fx = rand() % w;
            fy = rand() % h;
        }
    }

    cout << "Game Over! Final Score: " << s << endl;
    return 0;
}
