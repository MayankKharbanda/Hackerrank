#include<iostream>
using namespace std;
int main()
{
    long shoppingtrips;
    cin>>shoppingtrips;
    for(long i=0; i<shoppingtrips; i++)
    {
        
        long L, A, N, D, amount_spend=0; 
        
        cin>>L>>A>>N>>D;
        if(D==1)
        {
            amount_spend = A*L;
            cout<<amount_spend<<endl;
            continue;
        }
        long A1;
        long A_mids;
        long A_last;
        long A_mid_max = (N-1)/(D-1);
        
        
        for(A_mids = A_mid_max; A_mids > 0; A_mids--)
        {
            A1 = N-A_mids*(D-1)+(A_mids-1);
            A_last = (L-A1)%A_mids;
            long terms = (L - A1)/A_mids;
            
            if( terms > A-1 || (terms == A-1 && A_last > 0))
                break;
            long temp_amount = A1*A+terms*(A-1+A-terms)*A_mids/2+A_last*(A-terms-1);
            if(temp_amount < amount_spend)
                break;
            amount_spend = temp_amount;
        }
        
        
        if(amount_spend == 0)
            cout<<"SAD"<<endl;
        else
            cout<<amount_spend<<endl;
    }
    return 0;
}
