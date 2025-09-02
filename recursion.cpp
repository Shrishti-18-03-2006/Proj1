#include<bits/stdc++.h>
using namespace std;
/*
void f(){
    cout << "Hello";
    f();
}
int main(){
    f();
}

// segmentation fails = stack overflow
//the condition required is called as BASE CONDITION 
int cnt = 0;
void f(){
    if(cnt == 5) return; // The return here, terminates the function

    //here the if condition is called as the BASE CONDITION 
    cout << cnt << endl;
    cnt++;
    f();
}
int main(){
    f();
}


*/

/*
// Print a charater for n times 
void f1(int i, int n){ // here i and n are the parameters 
    if(i > n) return; // As soon as i exceeds n, the function terminates 

    cout <<"S" << " " << endl; // Till the time i is lesser than n, we execute these statements 
    f1(i+1,n);   
    // But as soon as the if statement gets true, these lines will not executed 
}
int main(){

    f1(1,5);  // here we gave the inputs for i and n 
}


// Print linearly from 1 to N

void f2(int i , int n){
    if(i > n) return ;

    cout << i << " ";
    f2(i+1, n);

}
int main(){
    f2(1,8);
}



// Print from N to 1

void f3(int i , int n){
    if(n < i) return ;

    cout << n << " ";
    f3(i,n-1);
}

int main(){
    f3(1,8);
}


// 1 to N using backtracking 
void f4(int i , int n){
    if(i<1) return;

    f4(i-1,n);
    cout << i << " " ;
}
int main(){
    f4(3,3);
}


// N to 1 using backtracking  
void f5(int i , int n){
    if(i>n) return;

    f5(i+1,n);
    cout << i << " " ;
}
int main(){
    f5(1,3);



//Sum till n using parameterised method
void f6(int i , int s){
    if(i<1){
        cout << "The sum till n is : " << s << endl;
        return ;
    }
    f6(i-1 , s+i);
}

int main(){
    f6(10,0);
}


//functiona l method to find sum till N : 

int f7(int n){
    if(n == 0) return 0;

    return n+ f7(n-1);
}
int main(){
    int n; 
    cout << "ENter the value of n : " ;
    cin >> n;
    cout << f7(n) << endl;
    return 0;
}


// Fcatorial of n using recursion 
int fact(int n){
    if(n == 0) return 1; // while returning here, we return 1 because if we return 0, then entire thing becomes 0

    return n * fact(n-1);
}
int main(){
    int number;
    cout << "Enter a number : ";
    cin >> number ;
    cout << "Factorial of the number is : " << fact(number) << endl;
    return 0;
}
*/

// FUNCTIONAL RECURSION 
// 1) Reverse an array  : Arr = [1 , 2 , 3 , 4 , 2]  :: Rev = [2 , 4 , 3 , 2 , 1]
   // recursion using two pointers
int arr[100],n;
void swp(int l = arr[0] , int r = arr[n-1]){
    if(l >= r) return ;
    
    swap(arr[l] , arr[r]);
    swp(l+1,r-1);
    cout << arr[100];
}
int main(){
    int a[100],n;
    cout << "Enter the size of array: ";
    cin >> n;
    for(int i = 0 ; i<n ; i++){
        cin >> a[i];
    }
    swp(a[0],a[n-1]);
    return 0;
}

//HI I MADE THE CHANGE 

//Bye