#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << max(abs(int(s1[0]-s2[0])), abs(int(s1[1]-s2[1]))) << endl;
	while (s1 != s2) 
	{
		if (s1[0] < s2[0]) 
		{
			s1[0]++;
			cout << "R";
		}
		else if (s1[0] > s2[0])
		{
			s1[0]--;
			cout << "L";
		}
		if (s1[1] > s2[1]) 
		{
			s1[1]--;
			cout << "D"; 
		}
		else if (s1[1] < s2[1]) 
		{
			s1[1]++;
			cout << "U";
		}
		cout << endl;
	}
	return 0;
}