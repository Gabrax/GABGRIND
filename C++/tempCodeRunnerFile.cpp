#include <iostream>
#include <vector>
int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int res = 0;
        int longest = 0;
        std::vector<int> arr;
        int n;
        std::cin >> n;
        int x;
        for(int i =0;i <n;i++)
        {
            std::cin >> x;
            arr.push_back(x);
        }
        for(int i =0;i <arr.size();i++)
        {
            if(arr[i] == 0)
            {
                res++;
            }
            else{
                longest = res;
            }
            
            
        }
        std::cout << longest << '\n';
        
    }


    std::cin.get();
}
