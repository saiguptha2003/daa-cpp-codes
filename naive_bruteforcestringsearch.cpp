/*
name:V D Pandurangasai
topic : string search (naive method)*/
#include <iostream>
using namespace std;
int naive_or_bruteforce_search(string text, string pattern)
{
    int textL = text.length();
    int patL = pattern.length();
    for (int i = 0; i <= (textL - patL); i++)
    {
        int j;
        int counter = 0;
        for (j = 0; j < patL; j++)
        {
            if (text[i + j] != pattern[j])
            {
                counter = 0;
                j = patL;
            }
            else
            {
                counter++;
            }
        }
        if (counter == patL)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string text, pattern;
    text = "PandurangasaiGuptha";
    pattern = "sai";
    cout << naive_or_bruteforce_search(text, pattern);
}