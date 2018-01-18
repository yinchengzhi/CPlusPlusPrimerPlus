#ifndef NAMESP_H_INCLUDED
#define NAMESP_H_INCLUDED

namespace pers{
    const int LEN = 40;
    struct Person{
        char fname[LEN];
        char lname[LEN];
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debts{
    using namespace pers;
    struct Debt{
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[],int n);
}

#endif // NAMESP_H_INCLUDED
