#include<iostream>
#include<ctime>
#include<random>
int main(){
    char temp2 = 'Y';
    while(temp2 == 'Y' || temp2 == 'y'){
    int faces,outcome; 
    char temp;
    std::cout << R"(
                             ___          ___              
     _____                  /\__\        /\__\             
    /::\  \      ___       /:/  /       /:/ /_            
   /:/\:\  \    /\__\     /:/  /       /:/ /\__\           
  /:/  \:\__\  /:/__/    /:/  /  ___  /:/ /:/ /_          
 /:/__/ \:|__|/::\  \   /:/__/  /\__\/:/_/:/ /\__\         
 \:\  \ /:/  /\/\:\  \__\:\  \ /:/  /\:\/:/ /:/  /         
  \:\  /:/  /    \:\/\__\\:\  /:/  /  \::/_/:/  /          
   \:\/:/  /      \::/  / \:\/:/  /    \:\/:/  /           
    \::/  /       /:/  /   \::/  /      \::/  /            
     \/__/        \/__/     \/__/        \/__/            
    )" << std::endl;
    std::cout << "WELCOME TO THE DICE!!"<< std::endl;
    std::cout << "What type of dice do you want to use?(No. of faces) : ";
    std::cin >> faces;
    std::cout << "You selected a " << faces << " faced dice!! \n";
    std::random_device rd;                         
    std::mt19937 rng(rd());                         
    std::uniform_int_distribution<int> dist(1, faces);
    std::cout << "Roll the dice?(y/n) : ";
    std::cin >> temp;
    while(temp == 'y' || temp == 'Y'){
        std::cout << "There you go : "<< dist(rng) << std::endl;
        std::cout << "Roll the dice?(y/n) : ";
        std::cin >> temp;
    }
    std::cout << ";) Go on?(y/n) : ";
    std::cin >> temp2;
}
    return 0;
}