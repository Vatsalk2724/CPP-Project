#include<iostream>
#include<string>
#include<vector>    
using namespace std;

class MemoryCalculator
{
public:
   string name;
   int id;

public:
 MemoryCalculator(string name , int id){

  this->name=name;
  this->id=id;

    
}

void displayDetails(){
  cout<<"NAME : "<<name<<endl;
  cout<<"ID :" <<id<<endl;


}



};
int main(){

vector<MemoryCalculator>v1;
v1.push_back(MemoryCalculator("vatsal",10));
v1.push_back(MemoryCalculator("Mihir",20));
v1.push_back(MemoryCalculator("Jaynam",30));
v1.push_back(MemoryCalculator("Nirav",40));
v1.push_back(MemoryCalculator("Dhwanil",50));
v1.push_back(MemoryCalculator("Prakash",60));
v1.push_back(MemoryCalculator("Jigar",70));
v1.push_back(MemoryCalculator("Sahil",80));


for( MemoryCalculator& element : v1){
    element.displayDetails();
}



v1.erase(v1.begin() + 1);


cout<<endl;




for( MemoryCalculator& element : v1){
    element.displayDetails();
}


v1.insert(v1.begin() + 1 ,MemoryCalculator("Jaimin",20));


for( MemoryCalculator& element : v1){
    element.displayDetails();
}


v1.at(0).displayDetails();

}