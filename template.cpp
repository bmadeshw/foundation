// Sample c++ program for Basic C++ Template Programming example :
	using namespace std;
	template <typename T>

	T maxValue(T t1, T t2)
	{
	   return (t1 > t2)? t1: t2;
	}
	 
	int main()
	{
	  cout << maxValue<char>('h', 'p') << endl;   
	  cout << maxValue<int>(5, 9) << endl;  
	  cout << maxValue<double>(6.0, 7.0) << endl; 
	 
	  return 0;
	}
