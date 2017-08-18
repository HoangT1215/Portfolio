#include <iostream>
#include <algorithm>

using namespace std;

struct team
{
	double a,b;
} listTeam[110];

int nPlayer;

void get(int ind)
{
	double a, b;
	char s;
	cin >> a >> s >> b;
	listTeam[ind].a = a, listTeam[ind].b = b;
}

int main()
{
	int ntest;
	cin >> ntest;
	for (int test = 1;test <= ntest; test++)
	{
		cin >> nPlayer;
		for (int i=1;i<=nPlayer;i++)
			get(i);
		sort(listTeam+1, listTeam+nPlayer+1, [](team x, team y){
			return (x.a*(y.b+y.a)<y.a*(x.a+x.b));
		});
		double x = 0, res = nPlayer;
		for (int i=1;i<=nPlayer;i++)
		{
			if ((x + listTeam[i].a/(listTeam[i].a+listTeam[i].b) >= 1.))
			{
				res = i-1;
				break;
			}
			x += listTeam[i].a/(listTeam[i].a+listTeam[i].b) + (1e-18);
		}
		cout << "Case #" << test << ": "<< res << "\n";
	}
}