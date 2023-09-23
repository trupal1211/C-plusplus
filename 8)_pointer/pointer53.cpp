class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    return 0;
}

//two use of this pointer 
// 1. this is a keyword , which is a pointer which points to the object which invoked
//    the member function.
// 2. return the object that invoked it.