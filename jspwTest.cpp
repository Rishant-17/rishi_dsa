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
void print7(int n){
 
for(int i=1;i<=n;i++){
//space
for(int j=n;j>i;j--){

cout<<" ";
}
//star
for(int j=1;j>=(2*i-1);j++){
    cout<<"*";
}
//space
for(int j=n;j>i;j--){

    cout<<" ";
    }
}
cout<<"\n";

}




            int main(){
                int t;
                cin>>t;
                for(int i =0;i<t;i++){
                int n;
                
                cin>>n;
                print7(n);}
        return 0;
    }
    