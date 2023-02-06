#include<bits/stdc++.h>
using namespace std;

struct product{
    string productid;
    float rating;
};

void rating(struct product *pro,int n){
    int top = 0,average =0,low =0;
    for(int i=0;i<n;i++){
    if(pro[i].rating>=4){
        top++;
    }
    else if(pro[i].rating>=3){
        average++;
    }
    else{
        low++;
    }}
    cout<<"Top Rated : "<<top<<"\nAverage Rated : "<<average<<"\nLow Rated : "<<low<<endl;
}

int main(){

int nPro;
cout<<"Enter the number of products : ";
cin>>nPro;

product pro[nPro];

for(int i=0;i<nPro;i++){
    cout<<"Enter product id : ";
    cin>>pro[i].productid;
    cout<<"Enter product rating : ";
    cin>>pro[i].rating;
}
rating(pro,nPro);

return 0;
}



