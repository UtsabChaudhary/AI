#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> states = {0, 1, 2};
vector<vector<pair<char, int>>> transitions = {
    {{'0', 0}, {'1', 0}, {'0', 1}},  
    {{'1', 2}},                      
    {{}}};                           

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
        if (state == 2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string input;
    cout << "Enter a string to check: ";
    cin >> input;

    if (simulate_nfa(input))
    {
        cout << "String ends with 01." << endl;
    }
    else
    {
        cout << "String does not end with 01." << endl;
    }

    return 0;
}
