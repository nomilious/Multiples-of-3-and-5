#include <iostream>
int s_mults(int, int);
int main() {
	int sum=0;
	sum+=s_mults(1000, 3);
	sum+=s_mults(1000, 5);
	sum-=s_mults(1000, 15);//because they're counted 2 times
	std::cout << sum << std::endl;
	std::cin >> sum;

	return 0;
}
int s_mults(int max, int step){
	int s=0;
	for(int i=step; i < max; i+=step)
		s+=i;
	return s;
}
