#include <iostream>

int main()
{
    const double gravity = -9.8;
    const int vi = 0;
    int height = 0;
    int time = 0;
    double displacement = vi * time + gravity * 1 / 2 * time;
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;
    std::cout << "At " << time << " seconds, the ball is at height : " << height + displacement << " meters" << "\n";
    while (height + displacement > 0)
    {
        time++;
        displacement = vi * time + gravity * 1 / 2 * pow(time, 2);
        double currentPosition = height + displacement;
        if (currentPosition <= 0)
        {
            std::cout << "At " << time << " seconds, the ball is on the ground.";
            break;
        }
        else
        {
            std::cout << "At " << time << " seconds, the ball is at height : " << currentPosition << " meters" << "\n";
        }
    }
    return 0;
}