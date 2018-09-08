#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
        // write your code here
        int c=a+b;
        return c;
    }
};

int main(int argc,char *argv[])
{
	Solution sum;
    int a,b;
	cin>>a>>b;
	cout<<sum.aplusb(a,b);
}
