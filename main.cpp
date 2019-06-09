//
//  main.cpp
//  Febonacci
//
//  Created by Huron on 6/9/19.
//  Copyright © 2019 Huron. All rights reserved.
//

#include <iostream>

using namespace std;

long Fibonacci(int n){
    // return nth Fibonacci number
    long dp[1000]={0};
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n-1];
}

int main(int argc, const char * argv[]) {
    long Fib = Fibonacci(10);
    cout<<Fib<<endl;
    return 0;
}
