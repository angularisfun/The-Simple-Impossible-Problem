#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    long int n;
    int choice;
    cout<<"\n\n CHALLENGE : SPOT THE PATTERN WITHOUT SEEING THE SOURCE CODE";
    cout<<"\n\n This is Called the Collatz Conjecture. "<< endl;
    cout<<"\n\n Interestingly Whatevere Number You Enter will end at 1";

  while(1)
  {
    cout <<"\n\n Please Enter a Positive Integer";
    cin>>n;
    int ctr = 1;
    cout<<"\n\n\t"<<"Step     Value";
    while(n!=1)
    {

        cout<<"\n\n\t"<<ctr<<"     "<<n;
        if(n%2 == 0)
        {
            n = n/2;
        }

        else
        {
            n = 3*n + 1;
        }
        ctr++;
    }
    cout<<"\n\n\t"<<ctr<<"     "<<n;
    cout<<"\n\n\t Keep Going?(Press 1)";
    cin>>choice;

    if(choice!=1)
    {
        exit(0);
    }
  }
  return 0;
}
