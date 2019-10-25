#include <bits/stdc++.h>
using namespace std;

map<string,int>mp;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
    int mx = -1;
    string mxS;

	for(int i=0;i<n-1;i++)
	{
		string tmp = s.substr(i,2);
		///cout<<"mp[temp] increasing "<<mp[tmp]<<endl;
		mp[tmp]++;
		///cout<<"after mp[temp] increasing "<<mp[tmp]<<endl;
		if(mp[tmp]>mx)
        {
            mx = mp[tmp];
            mxS = tmp;
        }
	}

    cout << mxS << endl;

	return 0;
}
