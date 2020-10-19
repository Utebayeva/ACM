#include <bits/stdc++.h>
using namespace std;
int arr[110], sz;

struct Stack {
  void push(){
    int n;
    cin >> n;
    sz++;
    arr[sz] = n;
    cout << "ok" << endl;
  }

  void pop(){
    if (sz == 0){
      cout << "error" << endl;
    }
    else {
      cout << arr[sz] << endl;
      sz--;
    }
  }

  void back(){
    if (sz == 0){
      cout << "error" << endl;  
    }
    else {
      cout << arr[sz] << endl;
    }
  }

  void size(){
    cout << sz << endl;
  }

  void clear(){
    sz = 0;
    cout << "ok" << endl;
  }

  void exit(){
    cout << "bye" << endl;
  }
};

int main(){
  Stack st;
  while(true){
    string op;
    cin >> op;
    if (op == "push"){
      st.push();
    }
    else if (op == "pop"){
      st.pop();
    }
    else if (op == "back"){
      st.back();
    }
    else if (op == "size"){
      st.size();
    }
    else if (op == "clear"){
      st.clear();
    }
    else if (op == "exit"){
      st.exit();
      exit(0);
    }
  }
}
