#include <iostream>

#include "expression_tree.h"

using namespace std;

int main() {
  ExpressionTree* tree = ExpressionTree::create_tree("5*6+");
  cout << tree->json_tree() << endl;
  return 0;
}