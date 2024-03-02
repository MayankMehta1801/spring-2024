#include<stdio.h>
#define ll long long int

int steps;
ll binexp(int base, int exp);
int main(){
	int base,exp;
	scanf("%d%d", &base,&exp);
	ll ans;
	ans = binexp(base,exp);
	printf("%lld %d", ans, steps);
	
}

ll binexp(int base, int exp){
    steps++;
    if(exp == 0 && base == 0){
        return -1;
    }
    if(exp < 0){
        return -1;
    }
    if(base == 0){
        return 0;
    }
    if(exp == 0){
        return 1;
    }
    if(exp == 1){
        return base;
    }
    if(exp%2==0){
        ll new_base = binexp(base, (int)exp/2);
        return new_base*new_base;
    }
    else{
        int odd = (exp-1)/2;
        ll new_base = binexp(base, odd);
        return base*new_base*new_base;
    }

}
