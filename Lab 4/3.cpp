#include <iostream> 
#include <string>
using namespace std;
 
struct Queue{
    int arr[100000];
    int first;
    int last;
    
    Queue(){
        first = 0;
        last = 0;
    }
 
    void push(int n){
        arr[last] = n;
        last++;
    }
 
    int pop(){
        int a = arr[first];
        first++;
        return a;
    }
 
    int front(){
        return arr[first];
    }
 
    int size(){
        return last - first;
    }
 
    string clear(){
        last = 0;
        first = 0;
        return "ok";
    }
 
    string exit(){
        return "bye";
    }
};
 
int main() {
    Queue q;
    while(true){
      string op;
      cin >> op;
        if(op == "push"){
            int n;
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if(op == "pop"){
            cout << q.pop() << endl;
        }
        else if(op == "front"){
            cout << q.front() << endl;
        }
        else if(op == "size"){
            cout << q.size() << endl;
        }
        else if(op == "clear"){
            cout << q.clear() << endl;
        }
        else if(op == "exit"){
            cout << q.exit() << endl;
            return 0;
        }
    }
}
