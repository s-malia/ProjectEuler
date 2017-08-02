//
//  problem2.cpp
//  Euler

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//Problem: By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
int main(){
    
    //create basis of fibonacci sequence
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(2);
    //create vector for even numbered fibs
    vector<int> evenFibs;
    evenFibs.push_back(2);
    
    //create fibonacci sequence and if the number being added is even, also add to another list
    int counter = 1;
    while (fib.back() < 4000000){
        fib.push_back(fib[counter] + fib[counter-1]);
        if (fib.back() % 2 == 0)
            evenFibs.push_back(fib.back());
        counter++;
    }
    
    //find the sum of the even numbers of the fibonacci sequence
    int sum = 0;
    for (int i = 0; i < evenFibs.size(); i++){
        sum += evenFibs[i];
    }
    cout << sum << endl;
    return sum;
    
}
