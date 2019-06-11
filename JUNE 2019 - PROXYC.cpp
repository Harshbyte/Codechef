#include<bits/stdc++.h>
#define ll 			long long
#define endl 		'\n'
#define hell 		1000000007
#define pb 			push_back
#define rs 			resize
#define max(a,b) 	a>b?a:b
#define min(a,b) 	a<b?a:b
#define mp   		make_pair
#define boost 		ios_base ::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	boost;
	ll test=1,i,j,k,l;
	cin>>test;
	while(test--)
	{
		ll D;
		cin>>D; 
		string S; cin>>S;
		D=S.length();
		float present=0,proxy=0;

		for(i=0;i<D;i++)
		{
			if(S[i]=='P') present++;
		}
		
		float percent = present/D;

		if(percent>=0.75)
		{
			cout<<0<<endl; continue;
		}

		for(i=0;i<D;i++)
		{
			if(i==0||i==1||i==D-1||i==D-2||S[i]=='P') continue;

			if((S[i-1]=='P'||S[i-2]=='P')&&(S[i+1]=='P'||S[i+2]=='P'))
			{
				proxy++;
				percent = (present+proxy)/D;
				if(percent>=0.75)
				{
					break;
				}
			}
		}
		if(percent>=0.75) cout<<proxy<<endl;
		else			  cout<<-1<<endl;

	}
	return 0;
}
