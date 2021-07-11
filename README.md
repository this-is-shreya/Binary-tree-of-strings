# Making a binary tree of the given input of strings  

The strings will be taken as input from the user and added as root node, then as subsequent left and right nodes of the tree.
The user has the choice to display all the nodes or only the left nodes or right nodes of the tree.

# Challenges faced:
1. Inserting the nodes into the tree was difficult as they are not integers whose position in the tree can be determined using the usual algorithm:
    if(root->info >val) 
      insert(root->left,val);
    else
     insert(root->right,val);

# Working

Once the program is run, it shows the four options:

![11 c](https://user-images.githubusercontent.com/62089952/125193039-1a42e580-e268-11eb-8a09-807e7ae375bc.jpg)




The tree must have a root node, a left node and right node to the root. After that it is up to the user, to add any number of nodes.
                           
## 1. INSERT
To insert the root node, simply enter 1, then the value of the node.
Then insert the root->left and root->right, to do that, enter 1, then press y, and enter the respective values.

![3 c](https://user-images.githubusercontent.com/62089952/125193293-53c82080-e269-11eb-9f6e-fe6c4299c1be.jpg)


To create a tree like above, the following is to be done:
![2 c](https://user-images.githubusercontent.com/62089952/125193174-be2c9100-e268-11eb-8708-f8b5db01e41a.jpg)

<i>Note that the first question is always answered with 'y' as every node will be below root node</i>
## 2. PRINT
This option will print all the nodes of the tree. It will be of the form: (root->data) -> (root->left->data) --- (root->data) -> (root->right->data)


  ![3 c](https://user-images.githubusercontent.com/62089952/125193293-53c82080-e269-11eb-9f6e-fe6c4299c1be.jpg)

For a tree like the one above, the output will be:
                          ![4 c](https://user-images.githubusercontent.com/62089952/125193356-9b4eac80-e269-11eb-89b5-3e47931045d7.jpg)


## 3. PRINT LEFT NODES
It will print all the left-most nodes of the tree.
                          ![5 c](https://user-images.githubusercontent.com/62089952/125193401-e5379280-e269-11eb-86ab-c938a305ca92.jpg)


## 4. PRINT RIGHT NODES
It will print all the right-most nodes of the tree.
                          ![6 c](https://user-images.githubusercontent.com/62089952/125193406-ee286400-e269-11eb-9365-dc242f5008b4.jpg)

## 5. Lastly, upon entering 99, it will exit out of the loop.
 ![7 c](https://user-images.githubusercontent.com/62089952/125193445-06987e80-e26a-11eb-8eb0-c5d042384430.jpg)
 
 # What I learnt
 
 I learnt how to combine the concept of binary tree with string functions and arrays, which thereby helped in successful implementation of a binary tree using strings.
