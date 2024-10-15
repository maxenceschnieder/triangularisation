#include <iostream>
int main(){

    unsigned int n;
    int i = 1;
    float x = 0;
    float y = 0;
    float sum_x = 0;
    float sum_y = 0;
    float xx = 0;
    float yy = 0;

    std::cout<< " Entrez le nombre de lieux\n" ;
    std::cin>>n;
    
    for(i=1;i<=n;i++){
        std::cout<<"Entrez la coordonnée en x "<<i ;
        std::cin>>x;
        sum_x = sum_x+ x;
    }
    for(i=1;i<=n;i++){
        std::cout<<"Entrez la coordonnée en y"<<i ;
        std::cin>>y;
        sum_y = sum_y+ y;
    }
    xx = sum_x/n;
    yy = sum_y/n;
    std::cout<<"le lieu a localiser est probablement au point de coordonnées ("<<xx<<";"<<yy<<")";
}