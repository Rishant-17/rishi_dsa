#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<"\n";
            }}
void print2(int n)  {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
        }}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
        }}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
        }}
void print5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
        }}
void print6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
        }}
void print7(int n) {
            for (int i = 0; i < n; i++) {  
                // Print spaces before the stars
                for (int j = 0; j < n - i - 1; j++) {
                    cout << " ";
                }
        
                // Print stars
                for (int j = 0; j < (2 * i + 1); j++) {
                    cout << "*";
                }
        
                // New line after each row
                cout << endl;
            }
        }
        
        int main() {
            int n;
            cout<<"enter the number";
            cin >> n;
            print7(n);
            return 0;
        }