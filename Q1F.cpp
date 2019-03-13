#include <iostream> 
#include <string>

using namespace std; 
class cpe1b{
	public:
		void palindromic_prime(long x); 	// ᜉᜐᜊᜓᜆ᜔ ᜀᜈᜒ ᜃᜌ᜔ ᜋᜄ᜔ᜑᜒᜋᜓ ᜃᜄ᜔ FUNCTION ᜅ PALINDROMIC PRIME
		void wasteful_number(long x);
		long prime(long num);  			// ᜃᜈᜒ CLASS ᜄᜑᜒᜋᜓᜄ᜔ FUNCTION ᜅ ᜄᜒᜅᜈ᜔ᜎᜈ᜔ ᜂᜄ᜔ PRIME ᜅ 
		long binary(long num1);
		long reverse(long num2);
		long digit(long num3);
		long primefactorization(long num4);

		long j,count,x;
		long pdtemp, bin, base, rem;
		long rev, temp, key;
		long dolor, digits;
		long factors,t,i;
		long rem1[100];
		long johanna;
};

int main() {
	cpe1b guwapo;
	long num, k;	
	string str;
    
	cin>>str;
    	cout << "The size of str is " << str.length() << " bytes.\n";
	
	// EXAM
	if (str.length()%2!=0) 		     // statement ᜈᜒ ᜐᜒᜌ ᜉᜇ ᜋᜑᜒᜊᜏ᜔ᜀᜈ᜔ ᜅ ODD ᜀᜅ᜔ str.length
		{
		for(k=2;k<=str.length();k++) // loop statement ᜈᜒ ᜐᜒᜌ ᜉᜇ ᜋ-ᜁᜐ-ᜁᜐ ᜀᜅ᜔ range ᜂᜄ᜔ process
			{	
			guwapo.palindromic_prime(k); // ᜄᜒᜆᜏᜄ᜔ ᜀᜅ᜔ function ᜅ 'palindromic_prime' ᜈᜒ 'guwapo' ᜉᜇ ᜋᜓperform ᜐ ᜆᜈᜅ᜔ process ᜐ range
			}
		}
	else
		{
		for(k=2;k<=str.length();k++)
			{
			guwapo.wasteful_number(k); // ᜄᜒᜆᜏᜄ᜔ ᜀᜅ᜔ function ᜅ 'wasteful_number' ᜈᜒ 'guwapo' ᜉᜇ ᜋᜓperform ᜐ ᜆᜈᜅ᜔ process sa range
			}
		}
	
	return 0;
}

void cpe1b::palindromic_prime(long x){
	cout<<"PALINDROMIC PRIME BA NI SIYA?"<<endl;
	prime(x);
}

void cpe1b::wasteful_number(long x){
	cout<<"WASTEFUL NUMBER NI SIYA"<<endl;	

	digit(x);	
	if (digits<factors){
		cout<<"WASTERFUL MEE YEEY";
	}
}


long cpe1b::prime(long num){  
	/* PRIME */

	count = 0;
	for (j=2;j<num;j++){
		if (num%j==0){
			count++;
		}
	}
	
	if (count==0){
	cout<<"PRIME"<<endl;
	binary(num);
	}
	
	else{cout<<"Composite"<<endl;
		cout<<"DIKO WELCOME :(";
	}
}

long cpe1b::binary(long num1){ 
	/* BINARY */

	/*	prlongf("PRIME: %ld \n",pdnum[i]);     */
	pdtemp = num1;
	bin=0;
	base = 1;

	for (;pdtemp>0;){
		rem=pdtemp%2;
		bin=bin+rem*base;
		base = base*10;
		pdtemp=pdtemp/2;
	}

	cout<<"BINARY: "<<bin<<endl;
	reverse(bin);
}

long cpe1b::reverse(long num2){
	/*REVERSE*/

	key=num2;
	temp=0;
	rev=0;

	for (;key!=0;){
		temp=key%10;
		key=key/10;
		rev=temp+(rev*10);
	}

	cout<<"REVERSE: ";
	cout<<rev<<endl;
	
	if (rev==num2){
		cout<<"PALINDROMIC PRIME KO YEHEY"<<endl;
	}

	else{
		cout<<"DIKO WELCOME :(";
	}
}

long cpe1b::digit(long num3){

	dolor=num3;
	johanna=num3;
	digits = 0;

	for (;dolor!=0;){
		dolor=dolor/10;
		digits++;
		}
		
		cout<<digits;		
		primefactorization(johanna);
		
}

long cpe1b::primefactorization(long num4){
	x=num4;
	factors=0;
	i=2;
	t=0;
	
	for (;x!=0;) {
	   if (x%i==0){
	       x=x/i;
	       rem1[t]=i;
	       t++;
	       factors++;
	       if (x==1){
	              break;
	              }
	           }
	       else{
	           i++;
	           }
	    }
	
	for (i=0;i<factors;i++){
		printf(" %ld ",rem1[i]);
	}
	
	cout<<"factors:="<<factors;
}
