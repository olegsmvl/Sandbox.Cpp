class Timer{
private:
    int period_ms;

public:
    Timer(int _period_ms){
        period_ms = _period_ms;
    }

    void (*callback)();

};