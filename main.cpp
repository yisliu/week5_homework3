#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*Topic description
try to calculate in the interval11arrivennof all integers, the numberxx(0\le x\le90≤x≤9) appeared a total of how many times? For example, in11arrive111 1in, that is, in1,2,3,4,5,6,7,8,9,10,111 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 , _1 1medium, digital11Appeared44Second-rate.

input format
22integern,xn ,x, separated by a space.

output format
11an integer representingxxthe number of occurrences.*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  //make variable
  int x;
  int n;
  int counter=0;
  cin>>n>>x;
  char k = x+48;
  //make loop
  for(int i = x; i<n+1; i++){
      ostringstream temp;
      temp << i;
      string l=temp.str();
      for(int j = 0; j<l.length(); j++){
        if(l[j]==k){
          counter++;
        }
      }
  }
  //output
  cout<<counter;
}