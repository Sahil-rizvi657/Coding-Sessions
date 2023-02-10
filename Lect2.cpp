#include <iostream>
using namespace std;
  bool isPrime(int n){

    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }

    return true;

}

void primeInRange(int start,int end){

    for(int n=start;n<=end;n++){
        if(isPrime(n)){
            // print()
        }

    }

}

    int  numReverse(int num){


        int revNum = 0;
        while(num!=0){

            int rem = num%10;
            // print rem
            int revNum = 10*revNum + rem;
            num = num/10;
        }

        return revNum;

    }

    bool isPalindrome(int n){

        if(n==numReverse(n))
            return true;

        return  false;



    }

    int countDigits(int num){

        int count = 0;
         while(num!=0){

            count++;
            num = num/10;
        }

        return count;

    }

 
// Main() function: where the execution of program begins
int main()
{
    // prints hello world
    int n;
    cin>>n;
    cout << "Hello World";
 
    return 0;
}
