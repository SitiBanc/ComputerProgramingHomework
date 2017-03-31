#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int p){
for(int i=2;i<sqrt(p)+1;i++) {
if(p % i == 0)
return false;
}
return true;
}
int main(){
int p = 1;
int count = 0;
while(count != 100)	{
p++;
if(isPrime(p)) {
printf("%3d ",p);
count++;
if(count %10 == 0) cout << endl;
}
};
system("PAUSE");
return 0;
}
