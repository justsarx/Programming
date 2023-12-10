#include <iostream>
using namespace std;

class Alpha{
    friend class Beta;
    private:
        int head, tail;
    public:
        void sethead(int h){
            this->head = h;
        }
        void settail(int n){
            this->tail = n;
        }
};

class Beta{
    public:
        void disp_head(){
            cout<<"head:"<<head<<endl;
        }
}
int main(){
    
    return 0;
}