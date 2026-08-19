#include <iostream>
using namespace std;

int main()
{
    int days;
    int goal;
    int steps;
    int totalSteps = 0;
    int goalAchieved = 0;
    int bestSteps = 0;
    int bestDay = 0;

    cout << "====================================\n";
    cout << "       FITNESS STEP GOAL TRACKER\n";
    cout << "====================================\n";

    cout << "\nEnter your daily step goal: ";
    cin >> goal;

    cout << "Enter number of days to track: ";
    cin >> days;

    if (days <= 0 || goal <= 0)
    {
        cout << "\nInvalid input!\n";
        return 0;
    }

    cout << "\n========== DAILY STEPS ==========\n";

    for (int i = 1; i <= days; i++)
    {
        cout << "Enter steps for Day " << i << ": ";
        cin >> steps;

        if (steps < 0)
        {
            cout << "Invalid steps! Please enter again.\n";
            i--;
            continue;
        }

        totalSteps += steps;

        if (steps >= goal)
        {
            cout << "Goal Achieved! 🎉\n";
            goalAchieved++;
        }
        else
        {
            cout << "Goal Not Achieved.\n";
            cout << "Steps remaining: " << goal - steps << "\n";
        }

        if (steps > bestSteps)
        {
            bestSteps = steps;
            bestDay = i;
        }
    }

    double averageSteps = (double)totalSteps / days;

    cout << "\n====================================\n";
    cout << "          FITNESS SUMMARY\n";
    cout << "====================================\n";

    cout << "Daily Goal       : " << goal << " steps\n";
    cout << "Total Steps      : " << totalSteps << "\n";
    cout << "Average Steps    : " << averageSteps << "\n";
    cout << "Goal Achieved    : " << goalAchieved
         << " Day(s)\n";
    cout << "Best Day         : Day " << bestDay
         << " (" << bestSteps << " steps)\n";

    if (goalAchieved == days)
    {
        cout << "\nExcellent! You achieved your goal every day! 🏆\n";
    }
    else if (goalAchieved >= days / 2)
    {
        cout << "\nGreat job! Keep going! 💪\n";
    }
    else
    {
        cout << "\nKeep working! You can do better! 🚀\n";
    }

    return 0;
}