#include <iostream>
#include <vector>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for (int i = 0;name[i] !='\0'; i++){
        count++;
    }
    return count;
}

int reverseString(char a[], int n){
    int s = 0;
    int e = n-1;
    while (s<=e){
        swap(a[s++],a[e--]);
    }
}

char isLowerCase(char a){
    if (a >= 'a' && a <= 'z'){
        return a;
    }
    else{
        char temp = a - 'A' + 'a';
        return temp;
    }
}

bool palindrome(char a[], int n){
    int i = 0;
    int j = n-1;

    while (i<=j){
        if (a[i] != a[j]){
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    return 1;
}


int main(){

    char name[20];
    cout << "Enter a name " << endl;
    cin >> name;

    cout << "Your name is " << name << endl;
    int len = getLength(name);
    cout << "Length of name is " << len << endl;
    cout << "isPalindrome : " << palindrome(name,len) << endl;
    
    reverseString(name,7);
    cout << "Reversed : " << name << endl;

}
