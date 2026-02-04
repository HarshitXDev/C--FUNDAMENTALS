    #include <iostream>
    #include <vector>
    using namespace std;

    class Chai {
        public:
        string teaName;  //name of tea
        int servings;  //number of servings
        vector<string> ingredients; //list of ingredients for the tea
    
        //Member function

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "servings: " << servings << endl;
            cout <<"ingredients: ";

            for(string ingredient : ingredients){
                cout << ingredient << " ";        
            }
            cout << endl;
        }
    };

    int main() {
        Chai chaiobj;
        chaiobj.teaName = "lemon tea";
        chaiobj.servings=2;
        chaiobj.ingredients= {"water","lemon","honey","tea"};
        chaiobj.displayChaiDetails();

        Chai chaiobj2;
        chaiobj2.teaName = "coffee";
        chaiobj2.servings=2;
        chaiobj2.ingredients={"water","coffee","milk","sugar"};
        chaiobj2.displayChaiDetails();
        return 0;
    }