#include<bits/stdc++.h>
#include<ctime>
using namespace std;


// creating a node
struct Node{
    int data;
    int index;
    struct Node* next;
    struct Node* prev;
};
struct Node* current=NULL;
static int i=1;
static int marks=0;

// insertion at end
struct Node* insert(struct Node* h,int x)
{
    // one pointer for traversing
    // one for creating new nodes
    // one is head
    struct Node* temp=NULL;
    struct Node* ptr=h;

    // creating a new node
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->index=i;
    temp->prev=NULL;
    temp->next=NULL;
    i++;
    if(h==NULL)
    {
        h=temp;
        current=temp;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->prev=ptr;
    }
    return h;
}

// display list
void display(struct Node* h)
{
    cout<<"Your List is: ";
    struct Node* ptr=h;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"Null"<<endl;
}

//display current node
void displayCurrentNode(struct Node* h)
{
    cout<<"Question "<<current->index<<" : "<<endl;
    int ques=current->data;
    switch(ques)
    {
        case 1:
        cout<<"Which of these operators have the highest order of precedence?"<<
            endl<<"a) '(' and ')'"<<
            endl<<"b) '*' and '/'"<<
            endl<<"c) '~' and '^'"<<
            endl<<"d) '+' and '-'"<<endl;
            break;   // ans=c
        case 2:
        cout<<"Which of the following is not an application of stack?"<<
            endl<<"a) evaluation of postfix expression"<<
            endl<<"b) conversion of infix to postfix expression"<<
            endl<<"c) balancing symbols"<<
            endl<<"d) line at ticket counter"<<endl;
            break;     // ans=d
        case 3:
        cout<<"What is the result of the given postfix expression? abc*+ where a=1, b=2, c=3."<<
            endl<<"a) 4"<<
            endl<<"b) 5"<<
            endl<<"c) 6"<<
            endl<<"d) 7"<<endl;
            break;    // ans=d
        case 4:
        cout<<"Evaluate and write the result for the following postfix expression"<<
            "abc*+de*f+g*+ where a=1, b=2, c=3, d=4, e=5, f=6, g=2."<<
            endl<<"a) 61"<<
            endl<<"b) 59"<<
            endl<<"c) 60"<<
            endl<<"d) 55"<<endl;
            break;    // ans=b
        case 5:
        cout<<"The number of edges from the root to the node is called __________ of the tree."<<
            endl<<"a) Height"<<
            endl<<"b) Depth"<<
            endl<<"c) Length"<<
            endl<<"d) Width"<<endl;  // ans=b
            break;
        case 6:
        cout<<"If the tree is not a complete binary tree then what changes can be made for easy access of children of a node in the array?"<<
            endl<<"a) every node stores data saying which of its children exist in the array"<<
            endl<<"b) no need of any changes continue with 2w and 2w+1, if node is at i"<<
            endl<<"c) keep a seperate table telling children of a node"<<
            endl<<"d) use another array parallel to the array with tree"<<endl;
            break;    // ans=a
        case 7:
        cout<<"In a full binary tree if number of internal nodes is I, then number of leaves L are?"<<
            endl<<"a) L=2*l"<<
            endl<<"b) L= l + 1 "<<
            endl<<"c) L= l - 1"<<
            endl<<"d) L=2*l - 1"<<endl;    //ans=b;
            break;
        case 8:
        cout<<"Which of the following is not an advantage of trees?"<<
            endl<<"a) Hierarchical structure"<<
            endl<<"b) Faster search"<<
            endl<<"c) Router Algorithms"<<
            endl<<"d) Undo/Redo operations in a notepad"<<endl;  //ans=d
            break;
        case 9:
        cout<<"The maximum number of nodes in a tree for which post-order and pre-order traversals may be equal is ______"<<
            endl<<"a) 3"<<
            endl<<"b) 1"<<
            endl<<"c) 2"<<
            endl<<"d) any number"<<endl; 
            break;     // ans=b
        case 10:
        cout<<"Which of the following traversing algorithm is not used to traverse in a tree?"<<
            endl<<"a) Post order"<<
            endl<<"b) Pre Order"<<
            endl<<"c) Inorder"<<
            endl<<"d) Randomised"<<endl;   // ans=d
            break;
        case 11:
        cout<<"Which of the following tree traversals work if the null left pointer pointing to the predecessor and null right pointer pointing to the successor in a binary tree?"<<
            endl<<"a) Inorder, Postorder, Preorder"<<
            endl<<"b) Inorder"<<
            endl<<"c) Postorder"<<
            endl<<"d) Preorder"<<endl;   // ans=a
            break;
        case 12:
        cout<<"A binary search tree contains values 7, 8, 13, 26, 35, 40, 70, 75. Which one of the following is a valid post-order sequence of the tree provided the pre-order sequence as 35, 13, 7, 8, 26, 70, 40 and 75?"<<
            endl<<"a) 7, 8, 26, 13, 75, 40, 70, 35"<<
            endl<<"b) 26, 13, 7, 8, 70, 75, 40, 35"<<
            endl<<"c) 7, 8, 13, 26, 35, 40, 70, 75"<<
            endl<<"d) 8, 7, 26, 13, 40, 75, 70, 35"<<endl;
            break;   // ans=d
        case 13:
        cout<<"Level order traversal of a tree is formed with the help of"<<
            endl<<"a) BFS"<<
            endl<<"b) DFS"<<
            endl<<"c) Dijkstra's Algorithm"<<
            endl<<"d) Prime's algorithm"<<endl;  // ans=a
            break;
        case 14:
       cout<<"In a full binary tree if number of internal nodes is I, then number of nodes N are?"<<
            endl<<"a) N= 2*l "<<
            endl<<"b) N= l + 1"<<
            endl<<"c) N= l - 1"<<
            endl<<"d) N= 2*l + 1"<<endl;    // ans=d
            break;
        case 15:
        cout<<"What is the possible number of binary trees that can be created with 3 nodes, giving the sequence N, M, L when traversed in post-order?"<<
            endl<<"a) 15"<<
            endl<<"b) 3"<<
            endl<<"c) 5"<<
            endl<<"d) 8"<<endl;
            break;    // ans=c
        case 16:
        cout<<"Identify the reason which doesn't play a key role to use threaded binary trees?"<<
            endl<<"a) The storage required by stack and queue is more"<<
            endl<<"b) The pointers in most of nodes of a binary tree are NULL"<<
            endl<<"c) It is Difficult to find a successor node"<<
            endl<<"d) They occupy less size"<<endl;   //ans=d
            break;
        case 17:
        cout<<"What is the maximum height of an AVL tree with p nodes?"<<
            endl<<"a) p"<<
            endl<<"b) log(p)"<<
            endl<<"c) log(p) / 2"<<
            endl<<"d) p/2"<<endl;
            break;    //ans=b
        case 18:
        cout<<"What maximum difference in heights between the leafs of a AVL tree is possible?"<<
            endl<<"a) log(n) where n is the number of nodes"<<
            endl<<"b) n where n is the number of nodes"<<
            endl<<"c) 0 or 1"<<
            endl<<"d) almost 1"<<endl;
            break;   // ans = a
        case 19:
        cout<<"A full binary tree can be generated using ______"<<
            endl<<"a) Postorder and preorder"<<
            endl<<"b) Preorder"<<
            endl<<"c) Postorder"<<
            endl<<"d) Inorder"<<endl;
            break;     // ans =a
        case 20:
       cout<<"What must be the ideal size of array if the height of tree is ‘s’"<<
            endl<<"a) 2^s - 1"<<
            endl<<"b) s - 1"<<
            endl<<"c) s"<<
            endl<<"d) 2s"<<endl;  // ans=a
            break;
        case 21:
        cout<<"The post-order traversal of a binary tree is O P Q R S T. Then possible pre-order traversal will be ________"<<
            endl<<"a) T Q R S O P"<<
            endl<<"b) T O Q R P S"<<
            endl<<"c) T Q O P S R"<<
            endl<<"d) T Q O S P R"<<endl;   
            break;               // ans=c
        case 22:
        cout<<"While evaluating a postfix expression, when an operator is encountered, what is the correct operation to be performed?"<<
            endl<<"a) push it directly on to the stack"<<
            endl<<"b) pop 2 operands, evaluate them and push the result on to the stack"<<
            endl<<"c) pop the entire stack"<<
            endl<<"d) ignore the operator"<<endl;
            break;    // ans = b
        case 23:
        cout<<"What is a threaded binary tree traversal?"<<
            endl<<"a) a binary tree traversal using stacks"<<
            endl<<"b) a binary tree traversal using queues"<<
            endl<<"c) a binary tree traversal using stacks and queues."<<
            endl<<"d) a binary tree traversal without using stacks and queues"<<endl;
            break;    // ans=d
        case 24:
        cout<<"What will be the height of a balanced full binary tree with 8 leaves?"<<
            endl<<"a) 8"<<
            endl<<"b) 5"<<
            endl<<"c) 6"<<
            endl<<"d) 4"<<endl;   // ans=d
            break;
        case 25:
        cout<<"A binary tree is balanced if the difference between left and right subtree of every node is not more than ____"<<
            endl<<"a) 1"<<
            endl<<"b) 3"<<
            endl<<"c) 2"<<
            endl<<"d) 0"<<endl;  //ans=a
            break;
        case 26:
        cout<<"What is the number of moves required to solve Tower of Hanoi problem for k disks?"<<
            endl<<"a) 2k - 1"<<
            endl<<"b) 2k + 1"<<
            endl<<"c) 2^k + 1"<<
            endl<<"d) 2^k - 1"<<endl;  // ans d
            break;
        case 27:
        cout<<"The balance factor of a node in a binary tree is defined as _____"<<
            endl<<"a) addition of heights of left and right subtrees"<<
            endl<<"b) height of right subtree minus height of left subtree"<<
            endl<<"c) height of left subtree minus height of right subtree"<<
            endl<<"d) height of right subtree minus one"<<endl;   // ans=c
            break;
        case 28:
        cout<<"Which of the following tree data structures is not a balanced binary tree?"<<
            endl<<"a) AVL Tree"<<
            endl<<"b) Red-Black Tree"<<
            endl<<"c) Splay Tree"<<
            endl<<"d) B - Trees"<<endl;   // ans=d
            break;
        case 29:
        cout<<"What is/are the disadvantages of implementing tree using normal arrays?"<<
            endl<<"a) difficulty in knowing children nodes of a node"<<
            endl<<"b) difficult in finding the parent of a node"<<
            endl<<"c) have to know the maximum number of nodes possible before creation of trees"<<
            endl<<"d) difficult to implement."<<endl;  // ans c
            break;
        case 30:
        cout<<"The optimal data structure used to solve Tower of Hanoi is _________"<<
            endl<<"a) Tree"<<
            endl<<"b) Heap"<<
            endl<<"c) Priority Queue"<<
            endl<<"d) Stack"<<endl;   // ans d
            break;
        default:
        break;
    }
   // cout<<current->data<<endl;
}


// go to prev element
struct Node* previousQuestion(struct Node* h)
{
    if(current->prev!=NULL){
    current=current->prev;
    }
    else
    {
        cout<<"This is the first question."<<endl;
    }
    
    displayCurrentNode(h);
    
    return h;
}

// go to next element
struct Node* nextQuestion(struct Node* h)
{
    if(current->next!=NULL){
    current=current->next;
    
    displayCurrentNode(h);
    }
    else
    {
        cout<<"There is no next question since this is the last question. "<<endl;
    }
    
    return h;
}

// answer the question
bool answerQuestion(struct Node* h,char AnsArr[])
{
    char correctAns[30]={'c','d','d','b','b','a','b','d','b','d','a','d','a','d','c','d','b','a','d','a','c','b','d','d','a','d','c','b','c','d'};
    int currIndex=(current->data)-1;
    if(AnsArr[currIndex]!='\0')
    {
    cout<<"You have already answered this question. You cannot answer it again."<<endl;
    return false;
    }
    else
    {
    cout<<"Type the option of your answer.(a/b/c/d)"<<endl;
    char userAns;
    cin>>userAns;
    AnsArr[currIndex]=userAns;
    if(correctAns[currIndex]==userAns)
    return true;
    else
    return false;
    }
}

int main()
{
    cout<<endl<<"                                                                            DSA Quiz"<<endl<<endl;
    cout<<endl<<"READ THE INSTRUCTIONS CAREFULLY: "<<endl<<"You won't be allowed to answer any question more than once. "<<endl;
    cout<<"Each question carries 1 mark."<<endl;
    cout<<"There is no negative marking."<<endl;
    cout<<"You can navigate between the questions as per requirement."<<endl;
    cout<<"There is no time limit for attending the quiz."<<endl;
    cout<<"You will have to submit the quiz in order to know your marks."<<endl;
    cout<<endl<<"                                                                          All the best."<<endl<<endl;
    int easy,hard,finalMarks=0;
    char AnsArr[30];
    std::fill(std::begin(AnsArr), std::end(AnsArr), '\0');
    cout<<"Enter the number of EASY questions: (less than 16) "<<endl;
    cin>>easy;
    cout<<"Enter the number of HARD questions: (less than 16)"<<endl;
    cin>>hard;
    int tot=easy+hard;
    if(tot==0)
    cout<<endl<<"No questions to display..."<<endl<<"Quiz ended!!"<<endl;
    else
    {
    cout<<endl<<"Preparing quiz with total "<<easy+hard<<" questions..."<<endl<<endl;
    struct Node* head= NULL;
    srand(time(0));
    while(easy--)
    {
        int easyQuestion=((rand())%15)+1;
        head=insert(head,easyQuestion);
    }
    while(hard--)
    {
        int hardQuestion=((rand())%15)+16;
        head=insert(head,hardQuestion);
    }


    // cout<<"Your list of questions is: "<<endl;
    // display(head);
    //cout<<endl<<"Your current question is: "<<endl;

        displayCurrentNode(head);
    int check;
    do{
        cout<<endl<<"Enter 1 to go to next question. "<<endl;
        cout<<"Enter 2 to go to previous question. "<<endl;
        cout<<"Enter 3 to answer this question."<<endl;
        cout<<"Enter 4 to submit the quiz."<<endl;
        cout<<"Enter 5 to quit the quiz."<<endl;
        cin>>check;
        switch (check)
        {
        case 1:
            head=nextQuestion(head);
            break;
        case 2:
            head=previousQuestion(head);
            break;
        case 3:
            if(answerQuestion(head,AnsArr)==true)
            finalMarks=finalMarks+1;
            break;
        case 4:
            cout<<endl<<"Your quiz is submitted."<<endl<<endl;
            cout<<"Your Score is: "<<finalMarks<<"/"<<tot<<endl;
        case 5:
        return 0;
        break;
        default:
            cout<<"Invalid expression!!"<<endl;
            break;
        }
    }
    while(check!=5);
    }
    return 0;
}