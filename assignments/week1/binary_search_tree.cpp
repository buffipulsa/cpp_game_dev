
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

    //std::array<int, 5> numbers = {5,3,12,8,10};
    std::array<int, 12> numbers = {15,7,22,3,9,18,27,1,5,11,20,25};

    std::vector<Branch*> branches;
    for (size_t i = 0; i < numbers.size(); i++){

        Branch* branch = new Branch;

        branch->value = numbers[i];

        branches.push_back(branch);

        if (i == 0){
            continue;
        }

        Branch* root_branch = branches[0];

        Branch* current_branch = root_branch;

        while (true){
            if (branch->value < current_branch->value)
            {
                if (current_branch->left_node == nullptr){
                    current_branch->left_node = branch;

                    break;
                }

                current_branch = current_branch->left_node;
            }

            else if (branch->value > current_branch->value){
                if (current_branch->right_node == nullptr){
                    current_branch->right_node = branch;

                    break;
                }

                current_branch = current_branch->right_node;
            }

            else{
                break;
            }
        }
    }

    for (Branch* branch : branches){
        if ((branch->left_node == nullptr) && (branch->right_node == nullptr)){
            std::cout << branch->value << "\n";
        }
    }

    return 0;
}