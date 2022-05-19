class NewNode:
    def __init__(self, value_of_Data_part):
        self.data_part =value_of_Data_part
        self.next_part = None

class linked_list:
    def __init__(self):
        self.head_point = None
    # Insert at the beginning
    def create_node_at_beginning(self, value_of_Data_part):
        CreateNewNode = NewNode(value_of_Data_part)
        if self.head_point==None:
            CreateNewNode.next_part=None
            self.head_point=CreateNewNode
        else:
            CreateNewNode.next_part=self.head_point
            self.head_point=CreateNewNode

    # Insert after a node
    def create_node_after_Given_Number(self,value_of_Data_part,afterNode):
        CreateNewNode = NewNode(value_of_Data_part)
        if self.head_point==None:
            CreateNewNode.next_part=None
            self.head_point=CreateNewNode
        else:
            count1=1
            ptr=self.head_point
            while ptr.next_part!=None:
                ptr=ptr.next_part
                count1+=1

            if(count1 < afterNode):
                print("Insertion not possibile because there are only nodes available in list: ", count1)
            else:
                count2=1
                temp=self.head_point
                while count2 != afterNode:
                    temp=temp.next_part
                    count2+=1
                CreateNewNode.next_part =temp.next_part
                temp.next_part = CreateNewNode


    # Insert at the end
    def  create_node_at_End(self, value_of_Data_part):
        CreateNewNode = NewNode(value_of_Data_part)
        if self.head_point==None:
            CreateNewNode.next_part=None
            self.head_point=CreateNewNode
        else:
            temp=self.head_point
            while temp.next_part != None:
                temp = temp.next_part
            temp.next_part = CreateNewNode
            CreateNewNode.next_part=None

    def delete_node_at_beginning(self):
        if self.head_point==None:
            print("Empty")
        elif self.head_point.next_part==None:
            self.head_point=None
        else:
            temp=self.head_point
            self.head_point=self.head_point.next_part
            temp=None

    def delete_Given_number_node(self, GivenNode):
        if self.head_point==None:
            print("Empty")
        elif self.head_point.next_part==None:
            self.head_point=None
        else:
            count1=1
            temp_pointer1=self.head_point
            while temp_pointer1.next_part!=None:
                temp_pointer1=temp_pointer1.next_part
                count1+=1

            if(count1 < GivenNode):
                print("Deletion not possible because there are only nodes available in list: ", count1)
            else:
                count2=1
                temp_pointer1=self.head_point
                while count2!=GivenNode:
                    temp_pointer2=temp_pointer1
                    temp_pointer1=temp_pointer1.next_part
                    count2+=1
                temp_pointer2.next_part=temp_pointer1.next_part
                temp_pointer1=None

    def  delete_node_at_End(self):
        if self.head_point==None:
            print("Empty")
        elif self.head_point.next_part!=None:
            temp_pointer1=self.head_point
            while temp_pointer1.next_part!=None:
                temp_pointer2=temp_pointer1
                temp_pointer1=temp_pointer1.next_part
            temp_pointer2.next_part=None
            temp_pointer1=None
        else:
            self.head_point=None

    def display(self):
        if self.head_point==None:
            print("empty")
        else:
            ptr= self.head_point
            while (ptr):
                print(str(ptr.data_part) + " ", end="")
                ptr = ptr.next_part
            print(" ")

if __name__ == '__main__':

    ob = linked_list()
    print("Inserted Element At Beginning: ")
    ob.create_node_at_beginning(4)
    ob.display()
    ob.create_node_at_beginning(3)
    ob.display()
    ob.create_node_at_beginning(2)
    ob.display()
    ob.create_node_at_beginning(1)
    ob.display()
    print(" ")

    print("Inserted Element After GivenNode: ")
    ob.create_node_after_Given_Number(10,3)
    ob.display()
    ob.create_node_after_Given_Number(5,2)
    ob.display()
    ob.create_node_after_Given_Number(11,1)
    ob.display()
    ob.create_node_after_Given_Number(20,5)
    ob.display()
    print(" ")

    print("Inserted Element At End: ")
    ob.create_node_at_End(21)
    ob.display()
    ob.create_node_at_End(7)
    ob.display()
    ob.create_node_at_End(8)
    ob.display()
    ob.create_node_at_End(50)
    ob.display()
    print(" ")

    print("Delete Node At Begin: ")
    ob.delete_node_at_beginning()
    ob.display()
    ob.delete_node_at_beginning()
    ob.display()
    ob.delete_node_at_beginning()
    ob.display()
    print(" ")

    print("delete  GivenNode:  ")
    ob.delete_Given_number_node(3)
    ob.display()
    ob.delete_Given_number_node(4)
    ob.display()
    ob.delete_Given_number_node(2)
    ob.display()
    print(" ")

    print("delete Node At End:  ")
    ob.delete_node_at_End()
    ob.display()
    ob.delete_node_at_End()
    ob.display()
    print(" ")

    print("Inserted Element After GivenNode: ")
    ob.create_node_after_Given_Number(10,15)
    ob.display()
    print(" ")

    print("Present Elements in the list: ")
    ob.display()
