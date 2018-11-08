#include <iostream>


std::string unitType;
double amount;

double resoultInCM;
double resoultInMM;
double resoultInM;
double resoultInInch;
double resoultInFeet;
double resoultInKM;
double resoultInMiles;



std::string unitMM = "mm";
std::string unitCM = "cm";
std::string unitInch = "inch";
std::string unitFeet = "feet";
std::string unitM= "m";
std::string unitKM = "km";
std::string unitMiles = "miles";



double mmToCm ( double amount);
double mmToInch ( double amount );
double mmToFeet ( double amount);
double mmToM ( double amount);


double cmToMM ( double amount);
double cmToInch (double amount);
double cmToM (double amount);
double cmToFeet ( double amount);

double mToMM (double amount);
double mToCM (double amount);
double mToInch (double amount);
double mToKM ( double amount);
double mToFeet ( double amount);

double kmToMM (double amount);
double kmToCM (double amount);
double kmToInch (double amount);
double kmToFeet ( double amount);
double kmToM ( double amount);
double kmToMiles ( double amount);

double milesToMM ( double amount);
double milesToCM ( double amount);
double milesToInch ( double amount );
double milesToFeet ( double amount );
double milesToKM ( double amount);



int main() {


    std::cout << "what would you like to convert? --> mm, cm, inch, feet, m, km, miles" << std::endl;
    std::cin >> unitType;

    if (unitType == unitMM){

        std::cout << " amount? " << std::endl;
        std::cin >> amount;

        std::cout << " to what?-->  cm, inch, feet, m" << std::endl;
        std::cin >> unitType;

        if (unitType == unitCM){

            mmToCm ( amount);
            std::cout <<mmToCm (amount) << std::endl;

        }
        else if ( unitType == unitInch){
            mmToInch (amount );
            std::cout << mmToInch (amount ) << std::endl;


        }
        else if ( unitType == unitFeet){
            mmToFeet (amount);
            std::cout <<mmToFeet (amount) << std::endl;

        }

        else if ( unitType == unitM) {
            mmToM (amount);
            std::cout << mmToM (amount) << std::endl;


        }
        else {
            std::cout << "check for typos, of fukk" << std::endl;
        }

    }
    else if (unitType ==  unitCM) {

        std::cout << " amount? " << std::endl;
        std::cin >> amount;

        std::cout << " to what?--> mm, inch, feet, m" << std::endl;
        std::cin >> unitType;

        if (unitType == unitMM){
            cmToMM (amount);
            std::cout << cmToMM (amount);

        }
        else if ( unitType == unitInch) {
            cmToInch (amount);
            std::cout << cmToInch (amount) << std::endl;


        }
        else if ( unitType == unitM){
            cmToM (amount);
            std::cout << cmToM (amount) << std::endl;


        }
        else if (unitType == unitFeet){
            cmToFeet (amount);
            std::cout << cmToFeet (amount) << std::endl;


        }
        else {
            std::cout << "fukk" << std::endl;
                 }


    }
    else if (unitType == unitM) {

        std::cout << " amount? " << std::endl;
        std::cin >> amount;

        std::cout << " to what?--> mm, cm, inch, feet,  km" << std::endl;
        std::cin >> unitType;

        if (unitType == unitMM){
            mToMM (amount);
            std::cout << mToMM (amount) << std::endl;

        }

        else if (unitType == unitCM) {
            mToCM (amount);
            std::cout << mToCM (amount) << std::endl;


        }
        else if (unitType == unitInch) {
            mToInch (amount);
            std::cout << mToInch (amount) << std::endl;

        }

        else if (unitType == unitKM) {
            mToKM (amount);
            std::cout << mToKM (amount) << std::endl;

        }
        else if (unitType == unitFeet) {
            mToFeet (amount);
            std::cout << mToFeet (amount) << std::endl;



        }
        else {
            std::cout << ".I.." << std::endl;
        }

    }
    else if (unitType == unitKM ) {
        std::cout << " amount? " << std::endl;
        std::cin >> amount;

        std::cout << " to what?--> mm, cm, inch, feet, m, miles" << std::endl;
        std::cin >> unitType;

        if ( unitType == unitMM){
            kmToMM (amount);
            std::cout << kmToMM (amount) << std::endl;

        }

        else if ( unitType == unitCM){
            kmToCM (amount);
            std::cout << kmToCM (amount) << std::endl;

        }

        else if ( unitType == unitInch) {
            kmToInch (amount);
            std::cout << kmToInch (amount) << std::endl;


        }
        else if ( unitType == unitFeet) {
            kmToFeet (amount);
            std::cout << kmToFeet (amount) << std::endl;


        }

        else if (unitType == unitMiles) {
            kmToMiles (amount);
            std::cout << kmToMiles (amount) << std::endl;
        }
        else if ( unitType == unitM) {
            kmToM (amount);
            std::cout << kmToM (amount) << std::endl;

        }

        else {
            std::cout << "anyad" << std::endl;
        }


    }
    else if ( unitType == unitMiles) {
        std::cout << " amount? " << std::endl;
        std::cin >> amount;

        std::cout << " to what?--> mm, cm, inch, feet, km, miles" << std::endl;
        std::cin >> unitType;

        if (unitType == unitMM) {
             milesToMM (amount);
            std::cout << milesToMM (amount) << std::endl;

        }
        else if ( unitType == unitCM) {
             milesToCM (  amount);
            std::cout << milesToCM (  amount) << std::endl;
        }
        else if (unitType == unitInch) {
            milesToInch (amount );
            std::cout << milesToInch (amount ) << std::endl;


        }
        else if ( unitType == unitFeet) {
            milesToFeet (amount );
            std::cout << milesToFeet (amount ) << std::endl;


        }
        else if ( unitType == unitKM) {
            milesToKM (amount);
            std::cout << milesToKM (amount) << std::endl;


        }
        else {
            std::cout << " fukk ju" << std::endl;
        }

    }
    else {
        std::cout << " bazdmeg. watch out for typos" << std::endl;
    }







    std::cout << "Hello, World!" << std::endl;
    return 0;
}

double mmToCm ( double amount){
    resoultInCM = amount * 10;
    return resoultInCM;

}

double mmToInch ( double amount ) {

    resoultInInch = amount /  25.5 ;
    return resoultInInch;

}

double mmToFeet ( double amount) {

    resoultInFeet = amount / 304.8;
    return resoultInFeet;

}

double mmToM ( double amount) {

    resoultInM = amount / 1000;
    return resoultInM;
}

double cmToMM ( double amount) {

    resoultInCM = amount *10;
    return  resoultInCM;

}

double cmToInch (double amount) {

    resoultInInch = amount * 0.3937007874;
    return resoultInInch;
}

double cmToFeet ( double amount) {

    resoultInFeet = amount / 30.48;
    return resoultInFeet;

}

double cmToM (double amount) {

    resoultInM = amount * 0.01;
    return resoultInM;


}

double mToMM (double amount){

    resoultInMM = amount * 1000;
    return resoultInMM;

}

double mToCM (double amount) {


    resoultInCM = amount * 100;
    return resoultInCM;
}

double mToInch (double amount) {

   resoultInInch= amount * 0.0254;
    return  resoultInInch;
}

double mToKM ( double amount) {

    resoultInKM = amount *  0.001;
    return resoultInKM;

}

double mToFeet ( double amount){

    resoultInFeet = amount / 0.3048;
    return resoultInFeet;
}


double kmToMM (double amount) {

    resoultInMM = amount *  1000000;
    return resoultInMM;

}

double kmToCM (double amount){


    resoultInCM = amount * 100000;
    return resoultInCM;
}

double kmToInch (double amount) {

    resoultInInch = amount * 39370.078740157;
    return resoultInInch;
}

double kmToFeet ( double amount) {


    resoultInFeet = amount * 3280.8;
    return resoultInFeet;
}

double kmToMiles ( double amount) {

    resoultInMiles = amount * 1.6;
    return resoultInMiles;

}

double milesToMM ( double amount) {

    resoultInMM = amount * 1609344;
    return resoultInMM;
}

double milesToCM ( double amount) {


    resoultInCM = amount * 160934.4 ;
    return resoultInCM;
}

double milesToInch ( double amount ) {

    resoultInInch = amount *63360;
    return resoultInInch;

}

double milesToFeet ( double amount ) {

    resoultInFeet = amount * 5280;

}

double milesToKM ( double amount) {


    resoultInKM = amount * 1.6;
    return resoultInKM;
}

double kmToM ( double amount) {

    resoultInM = amount *1000;
    return resoultInM;


}
