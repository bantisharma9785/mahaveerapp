//  1  Swap two numbers  )

#include <iostream>
using namespace std;
int main()
{
    int num1 , num2 , temp;
    cout<<"Enter the two numbers :- ";
    cin >> num1 >> num2 ;
    
    cout<<"Before swap num1 = "<< num1 <<" num2 = " << num2 <<"\n" ;
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout<<"Before swap num1 = "<< num1 <<" num2 = " << num2 ;
    

    return 0;
}

// 2  Even or odd

#include <iostream>
using namespace std;
int main()
{
    int num1 ;
    cout<<"Enter the number:- ";
    cin >> num1;
    
   if(num1%2 == 0) cout<<"number is even";
   else cout<<"number is odd";
    

    return 0;
}

// 3  Vowel and consonants'

#include <iostream>
using namespace std;
int main()
{
    char Alpha ;
    cout<<"Enter the Charachter :- ";
    cin >> Alpha;
    
   if(Alpha == 'a' || Alpha == 'e' || Alpha == 'i' || Alpha == 'o' || Alpha == 'u' ||Alpha == 'A' || Alpha == 'E' || Alpha == 'I' || Alpha == 'O'        ||Alpha== 'U') cout<<"The Alphabet is vowel";

   else cout<<"Alphabet is consonant";
    

    return 0;
}

// 4 Sum of nth natural numbers )

#include <iostream>
using namespace std;
int main()
{
    int n ,sum;
    cout<<"Enter the n value to get the sum of natural no :- ";
    cin>>n;
    
    for(int i = 1 ; i<= n ; i++ )
    {
        sum = sum + i;
    }
    
    cout<<"The sum of first "<< n <<"'th naural numbers is :- " << sum ;


    return 0;
}

// 5 Reverse of the number  )

#include <iostream>
using namespace std;
int main()
{
    int num , temp , sum = 0;
    cout<<"Enter the number :- ";
    cin>>num;
    
    while(num>0)
    {
      temp = num % 10 ;
      sum = sum*10 + temp;
      num = num / 10;
        
    }
    
    
    cout<<"The Reverse of the number is :- "<< sum;


    return 0;
}

//6 get the n th bit of a number 

#include<iostream>
using namespace std;

int main()
{
    int x ;
    int n ;
    cout << "Enter the number :- ";
    cin >>x;
    cout << "Enter the n'th bit of the number :- ";
    cin >> n;
    
    
    if(x&(1<<(n-1))) cout<<"set";
    else cout<<"unset";

return 0;
}

//7 set the n th bit of a number 

#include<iostream>
using namespace std;

int main()
{
    int x ;
    int n ;
    cout << "Enter the number :- ";
    cin >>x;
    cout << "Enter the n'th bit of the number :- ";
    cin >> n;

if(x&(1<<(n-1))) 
{
  cout<<"already set";  
}
else
{
    x = x|(1<<(n-1));
    cout <<"The nth bit is set now the number is :-"<< x; 
}

return 0;
}

//8 clearing the nth bit of the number )

#include<iostream>
using namespace std;

int main()
{
    int x ;
    int n ;
    cout << "Enter the number :- ";
    cin >>x;
    cout << "Enter the n'th bit of the number :- ";
    cin >> n;
    
if(x&(1<<(n-1))) 
{
    x = x^(1<<(n-1));
    cout <<"The nth bit is cleared now the number is :-"<< x; 
}
else
{
    cout<<"already cleared";
}

return 0;
}

//9 toggle the nth bit )

#include<iostream>
using namespace std;

int main()
{
    int x ;
    int n ;
    cout << "Enter the number :- ";
    cin >>x;
    cout << "Enter the n'th bit of the number :- ";
    cin >> n;
    

    x = x^(1<<(n-1));
    cout <<"The nth bit is toggled now the number is :-"<< x; 
 return 0;
}

//10 

#include<iostream>
using namespace std;

int main()
{
    int x ;
    
    cout << "Enter the number:-";
    cin >> x ;
    
    int countOfSets;
    for(int i = 1 ; i <= sizeof(x)*8 ; i++)
    {
        if(x&(1<<(i-1)))
        {
            countOfSets = i;
        }
    } 

    cout<<"The highest set bit is :- "<<countOfSets;
    
    return 0;
}