#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> states = {0, 1, 2, 3};
vector<vector<pair<char, int>>> transitions = {
    {{'0', 0}, {'1', 0}, {'1', 1}},
    {{'0', 2}},
    {{'1', 3}},
    {{'0', 3}, {'1', 3}}};

bool simulate_nfa(string input)
{
    vector<int> current_states = {0};

    for (char c : input)
    {
        vector<int> next_states;
        for (int state : current_states)
        {
            for (auto transition : transitions[state])
            {
                if (transition.first == c)
                {
                    next_states.push_back(transition.second);
                }
            }
        }
        if (next_states.empty())
        {
            return false;
        }
        current_states = next_states;
    }

    for (int state : current_states)
    {
        if (state == 3)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string input;
    cout << "Enter a binary string to check: ";
    cin >> input;

    if (simulate_nfa(input))
    {
        cout << "String contains substring '101'." << endl;
    }
    else
    {
        cout << "String does not contain substring '101'." << endl;
    }

    return 0;
}