#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n+1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}