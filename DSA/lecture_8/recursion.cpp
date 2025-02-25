#include<bits/stdc++.h>
using namespace std;
int n;
void printnumbers(int i){
if(i<1){
    return ;
}
printnumbers(i-1);
cout<<i<<"\n";

}
int main(){
cout<<"enter the value of n:"; 
cin>>n;

printnumbers(n);
return 0;
}