#include <iostream> 
#include <string>
#include <queue>
using namespace std;
int const cons = 1e6;

int main() {
  queue<int> a, b;
  for (int i = 1; i <= 5; ++i){
    int n;
    cin >> n;
    a.push(n);
  }

  for (int i = 1; i <= 5; ++i){
    int n;
    cin >> n;
    b.push(n);
  }

  for (int i = 1;; ++i){
    if (i == cons){
      cout << "botva";
      break;
    }
    int x = a.front(), y = b.front();
    a.pop();
    b.pop();

    if (x > y){
      if (x == 9 && y == 0){
        b.push(x);
        b.push(y);
      }
      else {
        a.push(x);
        a.push(y);
      }
    }
    else {
      if (y == 9 && x == 0){
        a.push(x);
        a.push(y);
      }
      else {
        b.push(x);
        b.push(y);
      }
    }

    if (a.size() == 0){
      cout << "second " << i;
      break;
    }
    if (b.size() == 0){
      cout << "first " << i;
      break;
    }
  }
}
