#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter first value:\n";
    cin >> a;
    cout << "Enter second value:\n";
    cin >> b; 
    int sum=a+b;
    int diff=a-b;
    int pro=a*b;
    float div=a/(float)b;
    int mod=a%b;
    cout << "Sum= " << sum << endl;
    cout << "Difference= " << diff << endl;  
    cout << "Product= " << pro << endl;
    cout << "Division= " << div << endl;
    cout << "Modulus= " << mod << endl;
}