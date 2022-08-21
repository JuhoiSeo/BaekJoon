/*
	Coded by J.H.Seo
	
	http://boj.kr/4891bd43bc2c4576b9f0c47787347a00
*/

#include<bits/stdc++.h>

using namespace std;

string S, ROT13;

int main(){
	getline(cin, S);
	
	for(int i = 0; i < S.length(); i++){
		if('a' <= S[i] && S[i] <= 'z'){
			int a = S[i] - 'a' + 13;
			if(a > 25) a -= 26;
			ROT13 += (a + 'a');
		}
		else if('A' <= S[i] && S[i] <= 'Z'){
			int A = S[i] - 'A' + 13;
			if(A > 25) A -= 26;
			ROT13 += (A + 'A');
		}
		else ROT13 += S[i];
	}
	
	cout << ROT13;
	
	return 0;
}

/*
	ROT13�� ī�̻縣 ��ȣ�� �������� ���� ���ĺ��� 13���ھ� �о �����.
	���� ���, "Baekjoon Online Judge"�� ROT13���� ��ȣȭ�ϸ� "Onrxwbba Bayvar Whqtr"�� �ȴ�.
	ROT13���� ��ȣȭ�� ������ ���� �������� �ٲٷ��� ��ȣȭ�� ���ڿ��� �ٽ� ROT13�ϸ� �ȴ�.
	�տ��� ��ȣȭ�� ���ڿ� "Onrxwbba Bayvar Whqtr"�� �ٽ� ROT13�� �����ϸ� "Baekjoon Online Judge"�� �ȴ�.
	ROT13�� ���ĺ� �빮�ڿ� �ҹ��ڿ��� ������ �� �ִ�.
	���ĺ��� �ƴ� ���ڴ� ���� ���� �״�� ���� �־�� �Ѵ�.
	���� ���, "One is 1"�� ROT13���� ��ȣȭ�ϸ� "Bar vf1"�� �ȴ�.
	���ڿ��� �־����� ��, "ROT13"���� ��ȣȭ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	
	�Է�
	ù° �ٿ� ���ĺ� �빮��, �ҹ���, ����, ���ڷθ� �̷���� ���ڿ� S�� �־�����. S�� ���̴� 100�� ���� �ʴ´�.
	
	���
	ù° �ٿ� S�� ROT13���� ��ȣȭ�� ������ ����Ѵ�.
	
	https://acmicpc.net/problem/11655
*/
