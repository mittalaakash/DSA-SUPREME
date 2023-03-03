#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void log(vector<int> v)
{
    for (auto value : v)
        cout << value << " ";
    cout << endl;
}

int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];

        int hours = stoi(curr.substr(0, 2));
        int mins = stoi(curr.substr(3, 2));
        int totalMinutes = hours * 60 + mins;
        minutes.push_back(totalMinutes);
    }

    // log(minutes);

    // 2: sort
    sort(minutes.begin(), minutes.end());
    // log(minutes);

    // 3: d/f and calc min d/f
    int mini = INT_MAX;
    int n = minutes.size();

    for (int i = 1; i < n; i++)
    {
        int diff = minutes[i] - minutes[i - 1];
        mini = min(mini, diff);
    }

    int lastDiff = minutes[0] + 1440 - minutes[n - 1];
    mini = min(mini, lastDiff);

    return mini;
}
int main()
{
    vector<string> v{"00:00", "23:59", "00:00"};

    int ans = findMinDifference(v);
    cout << ans;

    return 0;
}