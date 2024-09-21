#include<iostream>
int main(){
  int swap_value=2;
    int swapped_value=90;
    std::cout<<"current swap value is "<<swap_value<<std::endl;
     std::cout<<"current swappped value is "<<swapped_value<<std::endl;
    swap_value=swap_value+swapped_value;
    swapped_value=swap_value-swapped_value;
    swap_value=swap_value-swapped_value;
    std::cout <<"new swap value " <<swap_value<< std::endl<<"new swapped value "<< swapped_value<< std::endl;
    long num; 
    std::cout <<"enter the  number"<<std::endl;
    std::cin >> num;
    std::cout<<num;
}