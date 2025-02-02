#include<iostream>
#include<string>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q){
    stack<int>s;
    int n = q.size();


    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
        
    }

    
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    
    
}

int main(){

    queue<int>q;
    for(int i = 1; i<6; i++){
        q.push(i);
    }

    reverse(q);

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    

    return 0;
}