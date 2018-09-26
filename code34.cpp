//https://practice.geeksforgeeks.org/problems/check-for-bst/1/?ref=self
// static keyword for keeping assignment same among multiple invocations of same function
//NaN just for reference
//https://stackoverflow.com/questions/16691207/c-c-nan-constant-literal
//https://stackoverflow.com/questions/25555015/how-to-store-some-kind-of-null-in-c-double-or-int-variable
//https://stackoverflow.com/questions/572547/what-does-static-mean-in-c
//space optimisation can be done

int ar[100];
void inorder( Node* root );
int flag = 0;
int num = 0;
bool isBST(Node* root) {
    num = flag = 0;
    if ( root == NULL || ( root -> left == NULL && root -> right == NULL ) )
        return 1;
    inorder ( root );
    flag = 1;
    for ( int i = 0; i < num - 1; i++ )
        if ( ar[i] > ar[i + 1] )
            flag = 0;
    return flag;
}

void inorder( Node* root ) {

    if ( root == NULL )
        return;

    if ( root -> left == NULL && root -> right == NULL )
    {
        ar[num++] = root -> data;
        return;
    }

    inorder ( root -> left );
    ar[num++] = root -> data;
    inorder ( root -> right );
}
