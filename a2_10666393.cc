#include <iostream>
using namespace std;

  int main(){
    int n;
    bool flag = false;
    cout<<"Enter a positive integer";
      cin>>n;

	for(int i=2; i<n; i++){
          if(n%i==0){
        	flag = true;
	break; 	
	}
   }
	if(flag == false && n>1){
		cout<<n<<" is a prime number";
}else{
	cout<<n<<" is not a prime number.";
	}

  return 0;
	}
