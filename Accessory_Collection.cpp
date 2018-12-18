#include<iostream>
using namespace std;
int main()
{
    long shoppingtrips;
    cin>>shoppingtrips;
    for(long i=0; i<shoppingtrips; i++)         //number of trips
    {
        
        long N, T, M, D, amount_spend=0; 
        
        cin>>N>>T>>M>>D;
        if(D==1)
        {
            amount_spend = T*N;
            cout<<amount_spend<<endl;
            continue;
        }
        long T_max;
        long T_mids;
        long T_end;
        long T_mids_max = (M-1)/(D-1);
        
        
        for(T_mids = T_mids_max; T_mids > 0; T_mids--)
        {
            T_max = M-T_mids*(D-1)+(T_mids-1);
            T_end = (N-T_max)%T_mids;
            long terms = (N-T_max)/T_mids;
            
            if( terms > T-1 || (terms == T-1 && T_end > 0))         //not enough accessories
                break;
            long temp_amount = T_max*T + terms*(T-1+T-terms)*T_mids/2 + T_end*(T-terms-1);
            if(temp_amount < amount_spend)                      //reach maximum
                break;
            amount_spend = temp_amount;                         //temp_amount>amount_spend
        }
        
        
        if(amount_spend == 0)
            cout<<"SAD"<<endl;
        else
            cout<<amount_spend<<endl;
    }
    return 0;
}
