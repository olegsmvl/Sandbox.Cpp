template <typename T>
class Account
{
private:
    T id;

public:
    Account(T _id){
        id = _id;
    }

    T getData(){
        return id;
    }
};


