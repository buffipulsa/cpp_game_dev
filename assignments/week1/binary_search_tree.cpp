
#include <iostream>
#include <array>
#include <vector>


struct Branch
{
    int value = 0;
    Branch* left_node = nullptr;
    Branch* right_node = nullptr;
};

int main(){

    std::vector<int> numbers = {5,3,12,8,10};

    std::vector<Branch> branches;
    for (size_t i = 0; i < numbers.size(); i++){

        Branch branch;

        branch.value = numbers[i];

        if (i == 0){

            branches.push_back(branch);

            continue;
        }

        branches.push_back(branch);

    }

    for (Branch branch : branches){
        std::cout << branch.left_node->value << "\n";

        if ((branch.left_node != nullptr) && (branch.right_node != nullptr)){
           std::cout << branch.value << "\n";
        }
    
    return 0;
}
}