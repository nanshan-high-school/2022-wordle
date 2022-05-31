#include <iostream>
using namespace std;

int main() {
	int m = 0 ;
	cout << "how many :";
	cin >> m ;
	int st[m] ;
	int aodd = 0 ,aeven = 0 ,goodjack = 0 ,modd = -1 ,meven = -1,minodd = 101 ,mineven = 101 ,goodjack1 = 0 ,goodjack2 = 0 ,badjack1 = 0 ,badjack2 = 0;
	if(m%2 == 0){
		goodjack = 0 ;
	}else{
		goodjack = 1 ;
	}
	for(int i = 0 ; i < m ; i++ ){
		cout << i + 1<<":";
		cin >> st[i]; 
	}
	for(int i = 0 ; i < m ; i++){
		if (i % 2 == 0 ){
		    aodd = aodd + st[i];
			if (st[i] > modd){
				modd = st[i];
				goodjack1 = i;
			}
			if (st[i] < minodd){
				minodd = st[i];
				badjack1 = i;
			}
		}else{
			aeven = aeven + st[i];
			if (st[i] > meven){
				meven = st[i];
				goodjack2 = i;
			}
			if (st[i] < mineven){
				mineven = st[i];
				badjack2 = i;
			}
		}
	}
	cout << "odd :"<< aodd / (m/2 + goodjack) <<" even :"<< aeven /( m/2 )<<"\n" ;  
	cout << "best odd jack is: "<<goodjack1+1<<" with:"<< modd << "   best even jack is: "<<goodjack2+1<<" with:"<< meven <<"\n" ;
	cout << "worst odd jack is: "<<badjack1+1<<" with:"<< minodd << "   worst even jack is: "<<badjack2+1<<" with:"<< mineven <<"\n" ;
}