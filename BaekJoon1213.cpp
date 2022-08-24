/*
	Coded by J.H.Seo
	
	http://boj.kr/09259067f75643aa8fe865a5ebd6c879
*/

#include<bits/stdc++.h>

using namespace std;

vector<char> name, half, ret;
vector<int> num;
string s;
int cnt, chk = -1;

int main(){
	cin >> s;
	
	for(int i = 0; i < s.length(); i++){
		auto a = find(name.begin(), name.end(), s[i]);
		if(a == name.end()){
			name.push_back(s[i]);
			num.push_back(1);
		}
		else num[a - name.begin()]++;
	}
	
	for(int i = 0; i < num.size(); i++){
		if((num[i] % 2) > 0){
			chk = i;
			cnt++;
		}
		if(cnt > 1){
			cout << "I'm Sorry Hansoo";
			goto a;
		}
		else for(int j = 0; j < num[i] / 2; j++) half.push_back(name[i]);
	}
	
	sort(half.begin(), half.end());
	
	for(int i = 0; i < half.size(); i++) ret.push_back(half[i]);
	if(chk > -1) ret.push_back(name[chk]);
	for(int i = half.size() - 1; i >= 0; i--) ret.push_back(half[i]);
	
	for(int i = 0; i < ret.size(); i++) cout << ret[i];
	
	a:
	return 0;
}

/*
	임한수와 임문빈은 서로 사랑하는 사이이다.
	임한수는 세상에서 팰린드롬인 문자열을 너무 좋아하기 때문에, 둘의 백일을 기념해서 임문빈은 팰린드롬을 선물해주려고 한다.
	임문빈은 임한수의 영어 이름으로 팰린드롬을 만들려고 하는데, 임한수의 영어 이름의 알파벳 순서를 적절히 바꿔서 팰린드롬을 만들려고 한다.
	임문빈을 도와 임한수의 영어 이름을 팰린드롬으로 바꾸는 프로그램을 작성하시오.
	
	입력
	첫째 줄에 임한수의 영어 이름이 있다.
	알파벳 대문자로만 된 최대 50글자이다.
	
	출력
	첫째 줄에 문제의 정답을 출력한다.
	만약 불가능할 때는 "I'm Sorry Hansoo"를 출력한다.
	정답이 여러 개일 경우에는 사전순으로 앞서는 것을 출력한다.
	
	https://www.acmicpc.net/problem/1213
*/
