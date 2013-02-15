#ifndef QUADRATIC_H
#define QUADRATIC_H


class Quadratic
{
    public:
        Quadratic();
        virtual ~Quadratic();
        void setvalues (int, int, int);
        int calY (int);
        void extremumY();
        void discriminant();


    protected:
    private:
        int A;
        int B;
        int C;
};

#endif // QUADRATIC_H
