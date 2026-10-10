#include<iostream>
#include<conio.h>
#include<windows.h>
#include<String.h>
using namespace std;
int main()
{
//for A
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i==1|| i==3 || j==1 || j==5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
		
	}
	
//for B
    for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i==1|| i==3 || i==5 || j==1 || j==5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
//for C
    for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i==1 || i==5 || j==1 )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
//for D
for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i==1 || i==5 || j==1 || j==5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
//for E	
for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i==1 || i==3 || i==5 || j==1 )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
//for F	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i==1 || i==3 || j==1 )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}

	//for G
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||i==3&&j>=3||i==5||j==1||j==5&&i>=3){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
//for H	
		for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==3 || j==1 || j==5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
//for I
		for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==1 || i==5 || j==3 )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
//for J
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||i==5&&j<=3||j==3||j==1&&i>=4){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }

	//for K
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j==1||j==5-i||i==j+1){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
	
//for L	
		for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==5 || j==1 )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
//for M
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j==1||j==5||i==j&&j<=3||j==6-i&&j>=3){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }

	//for N
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j==1||j==5||i==j){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
	
//for O	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==1 || i==5 || j==1 ||j==5 )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
//for P
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==1 || i==3 || j==1 || (i==2 && j==5) )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}

	//FOR Q
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1&&j<=4||i==4&&j<=4||j==1&&i<=4||j==4&&i<=4||i==j&&j>=3){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }

	//FOR R
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||i==3||j==1||j==5&&i<=3||i==j&&i>=3){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
//for S
    for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==1 || i==3 || i==5 || (i==2 && j==1)||(i==4 && j == 5) )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
//for T
    for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==1 || j==3 )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}

//for U
    for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==5 || j==1 || j==5 )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
//for V
    for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( (i==1 && j==1) || (i==1 && j==5) || (i==2 && j==2) || (i==2 && j==4) || (i==3 && j==3) )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}

	//FOR W
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j==1||j==5||j==6-i&&j<=3||i==j&&j>=3){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }

	//FOR X
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==j&&i<=5||j==6-i&&j<=5){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }

	//FOR Y
	for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==j&&i<=3||j==6-i&&j<=5){
                cout<<"*";
				} 
			else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
	
//for Z
     for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if( i==1 || i==5 || (i==2 && j==4) || (i==3 && j==3) || (i==4 && j==2 ) )
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}




return 0;
}

