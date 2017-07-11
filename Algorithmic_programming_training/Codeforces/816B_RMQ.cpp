#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;
	long n,k,q,i,j,a,b;
	long l,r,c[200000];
	cin >> n >> k >> q;
	// for segment [a,b], how many temps that are recommended by at least k recipes?
	// we will implement segment tree data structure