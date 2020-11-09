#include <bits/stdc++.h>
using namespace std;
void printSubset(char *str, int low, int high){
	for(int i=low; i<=high; i++){
		cout << str[i];
	}
}
void largestPalindromicSubset(char *seq){
	int n = strlen(seq);						//length of the string
	bool table[n][n];
	int flag =0;
	memset(table, 0, sizeof(table));			//initialising the table

	int maxlength = 1, start=0, i;
	for(i=0;i<n;i++)
		table[i][i] = true;

	//now for length 2
	for(i=0;i<n-1;i++){
		if(seq[i]==seq[i+1]){
			table[i][i+1] = true;
			if(flag == 0){
		    	start = i;
			    maxlength = 2;
			    flag = 1;
			}
		}
	}

	//now for length more than 2
	for(int k = 3; k<=n ; k++){
		for(i=0;i<n-k+1;i++){
			int j = i+k-1;
			if(table[i+1][j-1] && seq[i]==seq[j]){
				table[i][j] = true;
				if(k>maxlength){
					start = i;
					maxlength = k;
				}
			}
		}
	}
	printSubset(seq, start, start+maxlength-1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, i, j;
	cin >> t;
	char seq[100000];
	while(t--){
		
		cin >> seq;
		largestPalindromicSubset(seq);
		cout << endl;
	}
	return 0;
}