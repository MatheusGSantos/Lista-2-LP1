#ifndef ICONTA_H
#define ICONTA_H


class IConta
{
    public:
        IConta();
        virtual ~IConta();

    protected:
        virtual void sacar(double) = 0;
        virtual void depositar(double) = 0;
    private:
};

#endif // ICONTA_H
