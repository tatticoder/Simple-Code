#include <iostream>
#include <cassert>

// The following code calls a naive algorithm for computing a Fibonacci number.
//
// What to do:
// 1. Compile the following code and run it on an input "40" to check that it is slow.
//    You may also want to submit it to the grader to ensure that it gets the "time limit exceeded" message.
// 2. Implement the fibonacci_fast procedure.
// 3. Remove the line that prints the result of the naive algorithm, comment the lines reading the input,
//    uncomment the line with a call to test_solution, compile the program, and run it.
//    This will ensure that your efficient algorithm returns the same as the naive one for small values of n.
// 4. If test_solution() reveals a bug in your implementation, debug it, fix it, and repeat step 3.
// 5. Remove the call to test_solution, uncomment the line with a call to fibonacci_fast (and the lines reading the input),
//    and submit it to the grader.

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {
    // write your code here
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }    
    int a=0,b=1,t;
    for (int i = 1; i < n; ++i)
    {t=a+b;
    a=b;
    b=t;

// std::cout<<a<<b<<t<<i;

    }
    

    return b;
}

void fib_with_R(int m,int n){int k;
for (int i = 1; i < m; i++)
{ k=fibonacci_fast(i);
std::cout<<"num "<<i<<": "<<k<<"%"<<2<<" is "<<k%2<<"  "<<k<<"%"<<3<<" is "<<k%3<<"  "<<k<<"%"<<4<<" is "<<k%4<<"  "<<k<<"%"<<5<<" is "<<k%5<<"  "<<k<<"%"<<6<<" is "<<k%6<<"  "<<k<<"%"<<7<<" is "<<k%7<<"  "<<k<<"%"<<8<<" is "<<k%8<<"  "<<'\n';

}

}
void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n = 0;
    // std::cin >> n;
    // std::cout << fibonacci_naive(n) << '\n';
fib_with_R(40,5);
    // test_solution();
    // std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
