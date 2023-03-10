#include<iostream>
using namespace std;
int main(){
int N;
int counter;
int A[]= {1,3,5};

cout<<"enter desired number";
cin>>N;
int sum;
for(int i=0;i<2;i++){
    sum+=A[i];
    if(sum==N){
    
    sum = 0;
    counter++;
    }
    else{
    return 0;
    }
    
}
for(int j=2;j=0;j--){
    sum+=A[j];
    if(sum==N){
        
        
        counter++;
    }
    else{
        return 0;
    }

}
if(counter==2){
    counter++;
    cout<<counter;
    cout<<"there are three ways to get user defined number";
    cout<<sum<<N;
}
else
cout<<"we cant get user number from 1,3,5";
return 0;
}

 



