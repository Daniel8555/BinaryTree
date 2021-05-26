#include <iostream>
namespace ariel{

template<typename T> class BinaryTree
    {
        private:
        struct Node
        {


            T value;
            Node* leftChild;
            Node* rightChild;
            Node(T value, Node *left, Node *right ):    
                 value(value), leftChild(left), rightChild(right){};
            ~Node(){}

        };
        Node* root;

        public:
        BinaryTree() : root(nullptr){}
        ~BinaryTree(){};

        BinaryTree<T> &add_root(T value)
        {
            return *this;
        }
         BinaryTree<T> &add_left(T parent, T nodeAdd)
         {
             return *this;
         }
            BinaryTree<T> &add_right(T parent, T nodeAdd)
         {
             return *this;
         }
            friend std::ostream &operator<<(std::ostream &os, BinaryTree<T> &tree)
         {
            return os;
         }
    
    
class inOrderIt
{
    private:
    Node* node;
    
    public:

	inOrderIt(Node* node = nullptr): node(node) 
    {
	}
    inOrderIt(): node(nullptr) 
    {
	}
	T& operator*() const 
    {
	return node->value;
	}
    T* operator->() const 
    {	
    return &(node->value);
	}
	inOrderIt& operator++() 
    {
			return *this;
	}
    const inOrderIt operator++(int) 
    {
	return *this;
	}

    bool operator==(const inOrderIt& rhs) const {
			return 0;
		}

	bool operator!=(const inOrderIt& rhs) const {
        return 0;
		}
};


class preOrderIt
{
    private:
    Node* node;
    public:

	preOrderIt(Node* node = nullptr): node(node) 
    {
	}
    	preOrderIt(): node(nullptr) 
    {
	}
	T& operator*() const 
    {
	return node->value;
	}
    T* operator->() const 
    {	
    return &(node->value);
	}
	preOrderIt& operator++() 
    {
			return *this;
	}
    const preOrderIt operator++(int) 
    {
	return *this;
	}

    bool operator==(const preOrderIt& rhs) const {
			return 0;
		}

	bool operator!=(const preOrderIt& rhs) const {
        return 0;
		}
};



class postOrderIt
{
    private:
    Node* node;
    
    public:
    postOrderIt(): node(nullptr) 
    {
	}
	postOrderIt(Node* node = nullptr): node(node) 
    {
	}
	T& operator*() const 
    {
	return node->value;
	}
    T* operator->() const 
    {	
    return &(node->value);
	}
	postOrderIt& operator++() 
    {
			return *this;
	}
    const postOrderIt operator++(int) 
    {
	return *this;
	}

    bool operator==(const postOrderIt& rhs) const
     {
			return 0;
	}

	bool operator!=(const postOrderIt& rhs) const
     {
        return 0;
		}
};



      inOrderIt begin()
        {
               return root;
        }
        inOrderIt end()
        {
            return nullptr;
        }
        preOrderIt end_preorder()
        {
            return nullptr;
        }
        preOrderIt begin_preorder()
        {
       
          return root;
        }
        inOrderIt end_inorder()
        {
            return nullptr;
        }
        inOrderIt begin_inorder()
        {
            return nullptr;
        }
        postOrderIt end_postorder()
        {
          return postOrderIt(root);
        }
        postOrderIt begin_postorder()
        {
            return nullptr;
        }
    




};
}
