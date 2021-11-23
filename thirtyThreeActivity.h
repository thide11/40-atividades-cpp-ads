#pragma once
#include "Activity.h"

class ThirtyThreeActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Alunos";
    };
};

namespace thirty_three {

    class Aluno {
        public:
            Aluno(int matricula, string nome, int idade) {
                this->matricula = matricula;
                this->nome = nome;
                this->idade = idade;
            }

            int getMatricula() {
                return matricula; 
            }
        private:
            int matricula;
            string nome;
            int idade;
    };

    struct node
        {
            Aluno *aluno;
            node *left;
            node *right;
        };

    class Btree{
        public:
            Btree() {};
            void insert(Aluno* key) {
                if(root != NULL){
                    insert(key, root);
                } else {
                    root = new node;
                    root->aluno = key;
                    root->left = NULL;
                    root->right = NULL;
                }
            };
        private:
            void insert(Aluno* key, node *leaf) {;
                if(key->getMatricula() < leaf->aluno->getMatricula()){
                    if(leaf->left != NULL){
                        insert(key, leaf->left);
                    }else{
                        leaf->left = new node;
                        leaf->left->aluno = key;
                        leaf->left->left = NULL;
                        leaf->left->right = NULL;
                    }
                }else if(key->getMatricula() >= leaf->aluno->getMatricula()){
                    if(leaf->right != NULL){
                        insert(key, leaf->right);
                    }else{
                        leaf->right = new node;
                        leaf->right->aluno = key;
                        leaf->right->right = NULL;
                        leaf->right->left = NULL;
                    }
                }
            }
            node *root;
    };
}