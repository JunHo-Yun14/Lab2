#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	if(cnt<M){
		for(int i=1;i<N-M+2+cnt;i++){
			if(cnt==0||i>vec[cnt-1]){
				vec.push_back(i);
				func(cnt+1);
				vec.pop();
			}	
		}
	}
	else{
		for(int i=0;i<M;i++){
			cout<<vec[i]<<' ';
		}
		cout<<endl;
	}






}

int main() {
   cin >> N >> M
	   ;
   func(0);
}
