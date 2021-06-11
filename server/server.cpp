#include <iostream>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>

int main(){

    //Proof of bind mount print tests
    std::cout << "This is the Server. I am running in a container" << std::endl;
    std::cout << "This is the Server. Changes have been made on the host OS" << std::endl;
    std::cout << "I have been recompiled and ran in a running container" << std::endl;

    //Proof of Libboost tests
    using namespace boost::numeric::ublas;
    vector<double> v (3);
    for (unsigned i = 0; i < v.size (); ++ i)
        v (i) = i;
    std::cout << v << std::endl;

    return 0;
}