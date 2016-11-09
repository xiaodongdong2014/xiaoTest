void InorderBst(Node *root){
	if(root!=NULL){
		InorderBst(root->left);
		cout<<root->data;	
		InorderBst(root->right);
	}
}

void InorderBstUnrec(Node *root){
	stack<Node *> s;
	Node *p=root;
	while(p!=NULL || !s.empty()){
		while(p!=NULL){
			s.push(p);
			p=p->left;
		}
		if(!s.empty()){
			p=s.top();
			s.pop();
			cout<<p->data;
			p=p->right;
		}

	}
}

void PreorderBst(Node * root){
	if(root!=NULL){
		cout<<root->data<<endl;
		PreorderBst(root->left);
		PreorderBst(root->right);
	}	
}

void PreorderBstUnrec(Node *root){
	stack<Node *> s;
	Node * p=root;
	while(p!=NULL || !s.empty()){
		while(p!=NULL){
			cout<<p->data<<endl;
			s.push(p);
			p=p->left;
		}
		if(!s.empty()){
			p=s.top();
			s.pop();
			p=p->right;
		}		
	}
}

void PostorderBst(Node *root){
	if(root!=NULL){
		PostorderBst(root->left);
		PostorderBst(root->right);
		cout<<root->data<<endl;
	}
}

/**
对于任一结点P，将其入栈，然后沿其左子树一直往下搜索，直到搜索到没有左孩子的结点，此时该结点出现在栈顶，但是此时不能将其出栈并访问，因此其右孩子还为被访问。所以接下来按照相同的规则对其右子树进行相同的处理，当访问完其右孩子时，该结点又出现在栈顶，此时可以将其出栈并访问。这样就保证了正确的访问顺序。可以看出，在这个过程中，每个结点都两次出现在栈顶，只有在第二次出现在栈顶时，才能访问它。因此需要多设置一个变量标识该结点是否是第一次出现在栈顶
**/

typedef struct PostNode{
	Node * node;
	bool tag;
}PostNode;

void PostorderBstUnrec(Node * root){
	stack<PostNode *> s;
	Node *p=root;
	while(p!=NULL || s.empty()){
		while(p!=NULL){
			PostNode* pnode=(PostNode *)malloc(sizeof(PostNode));
			pnode->node=p;
			pnode->tag=true;
			s.push(pnode);
			p=p->left;
		}		
		if(!s.empty()){
			PostNode* tmp=s.top();
			if(tmp->tag==true){
				tmp->tag=false;
				p=tmp->node->right;
			}
			else{
				cout<<tmp->node->data<<endl;
				s.pop();
				p=NULL;
			}
		}	
	}	
}



