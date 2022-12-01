#include <iostream>
#include <vector>
using namespace std;

int main(){
  int num_of_elements, num, smallest_1, smallest_2;
  vector<int> nums_list;
  
  //read in a integer
  cin >> num_of_elements;
  //read in a list of integers based on the size of the first integer and store them in a vector
  for(int i = 0; i < num_of_elements; i++){
    cin >> num;
    nums_list.push_back(num);
  }
  //loop through vector and find the two smallest numbers
  smallest_1 = nums_list.at(0);
  for(unsigned int i = 0; i < nums_list.size(); i++){
    if(nums_list.at(i) < smallest_1){
      smallest_2 = smallest_1;
      smallest_1 = nums_list.at(i);
    }
    else if(nums_list.at(i) < smallest_2){
      smallest_2 = nums_list.at(i);
    }
  }
  //output the two smallest numbers; "num1 and num2"
  cout << smallest_1 << " and " << smallest_2 << endl;
  return 0;
}