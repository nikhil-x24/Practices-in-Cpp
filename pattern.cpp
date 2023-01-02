#include<iostream>
using namespace std;

int main(){
	//Pattern1
/*	
	int n;
	cout<<"Enter any No.";
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<"*";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
	//patter2
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<i;
			j=j+1;
		}
		cout<< endl;
		i=i+1;
	}

    //pattern3
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<j;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}

	//pattern 4
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<n-j+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}		


  //pattern5
  
  int n;
  cin>>n;
  int i=1;
  int cont=1;
  while(i<=n){
  	int j=1;
  	while(j<=n){
  		cout<<cont <<" ";
  		cont=cont+1;
  		j=j+1;
	  }
	  cout<<endl;
	  i=i+1;
  }	
  


   //pattern6
   
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
   	int j=1;
   	while(j<=i){
   		cout<<"^ ";
   		j=j+1;
	   }
	   cout<<endl;
	   i=i+1;
   }


		//pattern7
		
		int n;
		cin>>n;
		int i=1;
		while(i<=n){
			int j=1;
			while(j<=i){
				cout<<i <<" ";
				j=j+1;
			}
			cout<<endl;
			i=i+1;
		}   


	//pattern8
	
	   int n;
	   cin>>n;
	   int i=1;
	   while(i<=n){
	   int j=1;
	   int v=i;
	   	while(j<=i){
	   		cout<<v <<" ";
	   		v=v+1;
	   		j=j+1;
		   }
		   cout<<endl;
		   i=i+1;
	   }
	  


	//pattern9
	
	int n;
	cin>>n;
	int i=1;
	//char ch='A';
	while(i<=n){
		int j=1;
		while(j<=n){
			char ch='A' +i-1;
			cout<<ch <<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
		
	}	  


		//pattern10
		
		int n;
		cin>>n;
		int i=1;
		while(i<=n){
			int j=1;
			while(j<=n){
				char ch ='A' +j-1;
				cout<< ch <<" " ;
				j=j+1;
			}
			cout <<endl;
			i=i+1;
		}	  


	//pattern 11
	
	int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		char ch='A';
		while(j<=n){
			cout<< ch <<" ";
			ch=ch+1;
			j=j+1;	
		}
		cout <<endl;
		i=i+1;
	}	  


	//pattter12
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<< i+j-1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}	  
	  
	  
     //pattern13
     
     int n;
     cin>>n;
     int i=1;
     while(i<=n){
     	int j=1;
     	while(j<=n){
     		cout<<i+j+1 ;
     		j=j+1;
		 }
		 cout<< '\n';
		 i=i+1;
	 }


		//pattern14
		
		int n;
		cin>>n;
		int i=1;
		while(i<=n){
			int j=1;
			char ch='A' +i-1;
			while(j<=i){
				cout << ch <<" " ;
				//ch =ch+1;
				j=j+1;
			}
			cout <<endl;
			i=i+1;
		}	 


   		//patter15
		   
		   int n;
		   cin>>n;
		   int i=1;
		   while(i<=n){
		   	   int j=1;
		   	   char ch ='A' +i-1 ;
		   	   while(j<=i){
		   	   	  cout << ch <<" " ;
		   	   	  ch=ch+1;
		   	   	  j=j+1;
				  }
				  cout << endl;
				  i=i+1;
		   }	 

	 
	 //pattern16
	 
	    int n;
		   cin>>n;
		   int i=1;
		   while(i<=n){
		   	   int j=1;
		   	   char ch ='A'+n-i;
		   	   while(j<=i){
		   	   	  cout <<ch <<" " ;
		   	   	  ch =ch+1;
		   	   	  j=j+1;
				  }
				  cout << endl;
				  i=i+1;
		   }

	 
	     //pattern17
	     
	       int n;
		   cin>>n;
		   int i=1;
		   while(i<=n){
		   	   int space= n-i;
		   	   while(space){
		   	   	  cout <<" ";
		   	   	  space=space-1;
				  }
		   	   int j=1;
		   	   while(j<=i){
		   	   	  cout << "*";
		   	   	  j=j+1;
				  }
				  cout << endl;
				  i=i+1;
		   }
		   
		   //pattern18
		    int n;
		   cin>>n;
		   int i=1;
		   while(i<=n){
		   	   int space= n-i;
		   	   while(space){
		   	   	  cout <<" ";
		   	   	  space=space-1;
				  }
		   	   int j=1;
		   	   while(j<=i){
		   	   	  cout << "* ";
		   	   	  j=j+1;
				  }
				  cout << endl;
				  i=i+1;
		   }
		   

	//pattern19
	
	   int n;
		   cin>>n;
		   int i=1;
		   while(i<=n){
		   	   int space= n-i;
		   	   while(space){
		   	   	  cout <<" ";
		   	   	  space=space-1;
				  }
		   	   int j=1;
		   	   while(j<=i){
		   	   	  cout << j;
		   	   	  j=j+1;
				  }
				  
			   int start= i-1;
			   while(start){
			   	  cout << start;
			   	  start=start-1;
			   }
				  cout << endl;
				  i=i+1;
		   }	     
	     
	     */
	     
	       //pattern 20
	       
	        int n;
		   cin>>n;
		   int i=1;
		   while(i<=n){
		   	   int j=1;
		   	   while(j<=i){
		   	   	  cout <<j;
		   	   	  j=j+1;
		   	   	  
				  }
				  cout << endl;
				  i=i+1;
		   }	 
	 
}
