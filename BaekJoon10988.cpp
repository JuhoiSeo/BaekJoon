/*
	Coded by J.H.Seo
	
	http://boj.kr/a5c9055f94224dc9b57ad051f8a12053
*/

#include<bits/stdc++.h>

using namespace std;

string str;

int main(){
	cin >> str;
	
	for(int i = 0; i <= str.length() / 2; i++){
		if(str[i] != str[str.length() - i - 1]){
			cout << "0";
			goto a;
		}
	}
	
	cout << "1";
	
	a:
	return 0;
}

/*
	���ĺ� �ҹ��ڷθ� �̷���� �ܾ�� �־�����.
	�̶�, �� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ ���Ѵ�.
	level, noon�� �Ӹ�����̰�, baekjoon, online, judge�� �Ӹ������ �ƴϴ�.

	�Է�
	ù° �ٿ� �ܾ �־�����.
	�ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
	
	���
	ù° �ٿ� �Ӹ�����̸� 1, �ƴϸ� 0�� ����Ѵ�.
	
	https://www.acmicpc.net/problem/10988
*/
