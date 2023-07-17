#include <iostream>
#include <string>
using namespace std;
void reverseString(string&  reverseStr)
{   
	for(int i=0,j=reverseStr.size()-1;i<j;i++,j--)
	{   
		char temp;
		temp = reverseStr[i];
		reverseStr[i] = reverseStr[j];
		reverseStr[j] = temp;
	}
}
int main()
{
  string reverseStr = "BooA";
  reverseString(reverseStr);
  cout<<reverseStr<<endl;
  return 0;
}
