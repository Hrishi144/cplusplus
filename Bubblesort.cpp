#include<iostream>
int main(){
    int a[20];
    int temp,j,n;
    int i=0;
    std::cout<<"enter the number of elements"<<std::endl;
    std::cin>>n;
    std::cout<<"enter the elements"<< std::endl;
    for(int i=0;i<n;i++){
        std::cin>> a[i];
    } std::cout<<"entered elements are"<<std::endl;
     for(int i=0;i<n;i++){
        std::cout<<a[i]<<" "<<std::endl;
        
    }   j=i+1; 
        for( i=0;i<n-1;i++){
        for (int j = 0; j < n - i - 1; j++){
       if(a[i]<a[j]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

       }
    }} std::cout<< "the sorted elements are...."<<std::endl;
    for(i=0;i<n;i++){
        std::cout<<a[i];
    }
}