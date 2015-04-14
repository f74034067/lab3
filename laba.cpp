#include<iostream>
#include<vector>
#include<fstream>
#include<iomanip>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main()
{	
	int n,sum,i=0;

	vector<int>weights(8);
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	inFile>>n;
	while(inFile>>weights[i++]);
	sort(weights.begin(),weights.end());
	reverse(weights.begin(),weights.end());
	sum=weights[0]+weights[1]+weights[2]+weights[3]+weights[4];
	cout<<sum<<"\n"<<endl;
	return 0; 
}
