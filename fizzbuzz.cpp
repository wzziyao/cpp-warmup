// Name: Ziyao Wang
// Date: 2/21/2021

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;

   if(X < 1 || X >= Y || Y > N || N > 100) {
     cout << "Please enter valid inputs." << endl;
   } else {
     for(int i = 1; i <= N; i++){
     if(i % X == 0 && i % Y == 0){
       cout << "FizzBuzz" << endl;
     } else if(i % X == 0){
       cout << "Fizz" << endl;
     } else if(i % Y == 0){
       cout << "Buzz" << endl;
     } else{
       cout << i << endl;
     }
   }
   }
}
