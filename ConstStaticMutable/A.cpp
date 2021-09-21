class A{
private:
    char num = 'S';
    char num2 = 'S';
    const int age = 30;
    mutable int length = 200;
public:
    static int number;
    int getNumber(){return number;}
    void inc_number(){number++;}
    int getAge() const {return age;}
    int getLength() const {return length;}
    void setLength(int _length) const {length = _length;}
};

int A:: number;