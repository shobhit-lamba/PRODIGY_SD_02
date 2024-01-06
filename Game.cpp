#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void game(int n, int target, int &attempts)
{
    int gap=abs(target-n);
    if(gap==0)
    {
        cout<<"You got it right! It took you "<<attempts<<" attempts to get up to here.";
    }
    else if(gap<=1)
    {
        attempts++;
        int m;
        cout<<"You're very close! Give one more try...";
        cin>>m;
        game(m,target,attempts);
    }
    else if(gap<=3)
    {
        attempts++;
        int m;
        cout<<"You're closer! Give one more try...";
        cin>>m;
        game(m,target,attempts);
    }
    else if(gap<=5)
    {
        attempts++;
        int m;
        cout<<"You're somewhere there! Give one more try...";
        cin>>m;
        game(m,target,attempts);
    }
    else if(gap<=7)
    {
        attempts++;
        int m;
        cout<<"You're far! Give one more try...";
        cin>>m;
        game(m,target,attempts);
    }
    else if(gap<=9)
    {
        attempts++;
        int m;
        cout<<"You're farther! Give one more try...";
        cin>>m;
        game(m,target,attempts);
    }
    else if(gap<=10)
    {
        attempts++;
        int m;
        cout<<"You're very far! Give one more try...";
        cin>>m;
        game(m,target,attempts);
    }
}

int main()
{
    int target=(rand()%10)+1;
    int attempts=1;
    int n;
    cout<<"Input your guess: ";
    cin>>n;
    game(n,target,attempts);
    return 0;
}
