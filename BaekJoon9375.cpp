/*
	Coded by J.H.Seo
	
	http://boj.kr/7cbccfb451264503ac4d44b0496b8d7c
*/

#include<bits/stdc++.h>

using namespace std;

vector<int> ret;
string s, t;
int testnum, n;

int main(){
	cin >> testnum;
	
	for(int i = 0; i < testnum; i++){
		vector<string> v;
		vector<int> num;
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			cin >> s >> t;
			
			auto a = find(v.begin(), v.end(), t);
			if(a == v.end()) {
				v.push_back(t);
				num.push_back(1);
			}
			else num[a - v.begin()]++;
		}
		
		int k = 1;
		for(int j = 0; j < num.size(); j++) k *= (num[j] + 1);
		k--;
		ret.push_back(k);
	}
	
	for(int i = 0; i < ret.size(); i++) cout << ret[i] << "\n";
	
	return 0;
}

/*
	해빈이는 패션에 매우 민감해서 한 번 입었던 옷들의 조합을 절대 다시 입지 않는다.
	예를 들어 오늘 해빈이가 안경, 코트, 상의, 신발을 입었다면, 다음날은 바지를 추가로 입거나 안경 대신 렌즈를 차굥ㅇ하거나 해야 한다.
	해빈이가 가진 의상들이 주어졌을 때 과연 해빈이는 알몸이 아닌 상태로 며칠동안 밖에 돌아다닐 수 있을까?
	
	입력
	첫째 줄에 테스트 케이스가 주어진다. 테스트 케이스는 최대 100이다.
	-각 테스트 케이스의 첫째 줄에는 해빈이가 가진 의상의 수 n(0 <= n <= 30)이 주어진다.
	-다음 n개에는 해빈이가 가진 의상의 이름과 의상의 종류가 공백으로 구분되어 주어진다.
	-같은 종류의 의상은 하나만 입을 수 있다.
	모든 문자열은 1이상 20이하의 알파벳 소문자로 이루어져 있으며 같은 이름을 가진 의상은 존재하지 않는다. 
	
	출력
	각 테스트 케이스에 대해 해빈이가 알몸이 아닌 상태로 의상을 입을 수 있는 경우를 출력하시오.
	
	https://www.acmicpc.net/problem/9375 
*/
