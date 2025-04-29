#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

void append (string x,stack <string> &que){
            que.push(que.top()+x);

}
void del (int x,stack <string> &que){
    string temp= que.top();
        for (int i = 0; i < x; i++)
        {
            temp.pop_back();
        }
        que.push(temp);
        
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,k;
    cin >> t;

    stack<string> my_que;
    my_que.push("");

    string inp;

    while (t--)
    {
        int op;
        cin >> op;

        if(op == 1){
            cin >> inp;
            append(inp,my_que);

        }else if (op == 2){
            cin >> k;
            del(k,my_que);

        }else if (op == 3){
            cin >> k;
            string temp = my_que.top();
            cout << temp[k-1] << "\n";

        }else
        if (!my_que.empty()) my_que.pop();
        
    }
    
    return 0;
}
