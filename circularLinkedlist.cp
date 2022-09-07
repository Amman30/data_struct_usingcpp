//
//  main.cpp
//  dataStructt
//
//  Created by MOHAMMAD AMMAN on 07/09/22.
//

#include <iostream>
using namespace std;
struct Node {
  int data;
  struct Node* next;
};

struct Node* addToEmpty(struct Node* last, int data) {
  if (last != NULL) return last;

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;

  last = newNode;

  last->next = last;

  return last;
}

void show(struct Node* last) {
  struct Node* p;

  if (last == NULL) {
  printf("The list is empty");
  return;
  }

  p = last->next;

  do {
  printf("%d ", p->data);
  p = p->next;

  } while (p != last->next);
}

int main(int argc, const char * argv[]) {
    
    
    


    
    struct Node* last = NULL;
    last = addToEmpty(last, 6);
    
    show(last);
 

    
    return 0;
}
