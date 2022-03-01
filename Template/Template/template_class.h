template <typename T>
class Account
{
private:
    T id;

public:
    Account(T _id){
        id = _id;
    }

    T getData();
};

template <typename T>
T Account<T>::getData(){
    return id;
}

