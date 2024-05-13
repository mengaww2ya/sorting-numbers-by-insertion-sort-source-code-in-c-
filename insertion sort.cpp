#include<iostream>
using namespace std;
int main(){
	while(true){
	
		int n, h;
	double array[n];
	double key;
	cout<<"how are you i have power to sort numbers in increasing order"<<endl;
	cout<<"how many numbers you want to be sorted"<<endl;
	cin>>n;
	cout<<endl;
	cout<<"you can enter\t"<<n<<"  numbers"<<endl;
	for (int i=0;i<n;i++){
		cout<<"enter  "<<i+1<<"th elment\t"; 
		cin>>array[i];
	}
	for (int j=1;j<n;j++){
		key=array[j];
		h=j-1;
		while(h>=0&&array[h]>key)
		{
			array[h+1]=array[h];
			h=h-1;
			array[h+1]=key;	
		
		}  
	             

	}
		cout<<"congradulation!! i have sorted your numberthe sorted number"<<endl;    
		for(int k=0;k<n;k++){
		cout<<array[k]<<"  ";
		
					
						}
		}
	return 0;

}
