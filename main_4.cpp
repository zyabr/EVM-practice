#include <iostream>
#include <cstring>
using namespace std;
int
zad1 ()
{
  int sum = 0;
  for (size_t i = 0; i < 1000; i++)
    {
      if (i % 3 == 0 or i % 5 == 0)
	{
	  sum += i;
	}
    }
  return sum;
}

int
task3 (long long int n)
{
  long long int i = 2;
  while (i * i < n)
    {
      while (n % i == 0)
	{
	  n = n / i;
	}
      i = i + 1;
    }
  return n;
}

int
task2 (int limit)
{
  int sum = 0;
  int a = 0;
  int b = 1;
  while (b < limit)
    {
      if (b % 2 == 0)
	{
	  sum = sum + b;
	}
      int h = a + b;
      a = b;
      b = h;
    }
  return sum;
}

bool is_palindrome(int arg)
{
    string num=to_string(arg);
    for(int i=0;i<num.size()/2;++i)
        if(num[i]!=num[num.size()-1-i])
            return false;
            
    return true;
}

int task4(int arg){
    int max=1;
    for (int i = arg; i > 0; --i) {
        for(int j=i;j>0;--j){
            if(is_palindrome(i*j)){
        
            if(i*j>max) {max=i*j;}}
            
        }
    }
    return max;

}

int task5(int arg){
    for (int result = arg; ; ++result) {
        bool done = true;
        for(int i=2;i<=arg;++i){
            if(result%i!=0){
                done=false;
                break;
            }
        
        }
        if (done) return result;
    }
}

int main ()
{

  cout << zad1 () << endl;
  int res2 = task2 (4000000);
  cout << res2 << endl;
  int res3 = task3 (600851475143);
  cout << res3 << endl;
  int res4 = task4 (999);
  cout << res4 << endl;
  int res5 = task5(20);
  cout << res5 << endl;
  return 0;
}
