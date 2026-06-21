#include<iostream>
using namespace std;
int main(){
    int *ptr , n , sum = 0;
    cout << "Enter no of Array : ";
    cin >> n;

    ptr = new int[n];

    cout<<"Enter the elements in Dynamically allocated memory of array of size : "<< n <<endl;

    for(int i=0; i<n; i++){
        cin>>ptr[i];
       

    }
      cout<<"The entered elements in the array are : "<<endl;

    for(int i=0;i<n;i++){
        cout<<ptr[i]<<"\t";
    }
     
    for(int i = 0 ; i < n ; i++){
         sum= sum + ptr[i]; 
    }

    float avg  = float(sum) / n ;
    cout<<"\nThe average is : " << avg;

    delete [ ] ptr;
  

    return 0;
}