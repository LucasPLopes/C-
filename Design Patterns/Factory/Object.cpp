#ifndef __io__
#define __io__
#include<iostream>

using namespace std;

#endif
class Toy{
    protected:
        string name;
        float price;
    public:
         Toy():name(""), price(0){};
        virtual void prepareParts () = 0;
        virtual void combineParts() = 0;
        virtual void assembleParts() = 0;
        virtual void applyLabel() = 0;
        virtual void showProduct() = 0;
};

class Car : public Toy{

    public:
        void prepareParts(){cout<<"Preparing Car"<<endl;}        
        void combineParts(){cout<<"Combining car parts" <<endl;}
        void assembleParts(){cout<<"Assembling car parts" <<endl;}
        void applyParts(){cout<<"Applying car label" <<endl;
                name = "Car";
                price = 10;
            }
        void Parts(){cout<<"Name: "<<name <<endl<<"Price: "<<price<<endl;}
};

class Bike: public Toy{

    public:

        void prepareParts(){cout<<"Preparing Bike"<<endl;}        
        void combineParts(){cout<<"Combining Bike parts" <<endl;}
        void assembleParts(){cout<<"Assembling Bike parts" <<endl;}
        void applyParts(){cout<<"Applying Bike label" <<endl;
                name = "Bike";
                price = 7.6;
            }
        void Parts(){cout<<"Name: "<<name <<endl<<"Price: "<<price<<endl;}
};

class Plane: public Toy{

    public:
        void prepareParts(){cout<<"Preparing Plane"<<endl;}        
        void combineParts(){cout<<"Combining Plane parts" <<endl;}
        void assembleParts(){cout<<"Assembling Plane parts" <<endl;}
        void applyParts(){cout<<"Applying Plane label" <<endl;
                name = "Plane";
                price = 13.65;
            }
        void Parts(){cout<<"Name: "<<name <<endl<<"Price: "<<price<<endl;}
};