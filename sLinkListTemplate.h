template<class Datatype>
class SLinkedList
{
public:
	SListNode<Datatype>* m_head;
	SListNode<Datatype>* m_tail;
	int m_count;
	
	//constructor
	SLinkedList()
    {
		m_head = 0;
		m_tail = 0;
		m_count = 0;
	}
	
	//destructor
	~SLinkedList(){
		//temporary Node pointers
		SListNode<Datatype>* itr = m_head;
		SListNode<Datatype>* next;
		while(itr != 0){
			//save pointer to next node
			next = itr -> next;
			//delete current node
			delete itr;
			//make the next node current node
			itr = next;
		}
	}
	//append function
	void Append(Datatype p_data)
	{
		if(m_head==0)
		{
			//create new head node
			m_head = m_tail = new SListNode<datatype>;
			m_head->m_data = p_data;
		}
		else
		{
			//insert a new node after the tail and reset the tail.
			m_tail->InsertAfter(p_data);
			m_tail->m_tail = m_tail->m_next;
			
		}
		m_count++;
	}
	void Prepend( Datatype p_data)
	{
		//create new node
		newnode->m_data = p_data;
		newnode->m_next = m_head;
		//set the head node and tail node if neded.
		m_head = newnode;
		if(m_tail==0)
			m_tail = m_head;
		m_count++;
	}
	void RemoveHead()
	{
		SListNode<Datatype>* node=0;
		if(m_head != 0)
		{
			//make node point to next node
			node=m_head->m_next;
			//then delete head and make a pointer
			//point to node.
			delete m_head;
			m_head = node;
			//if the head is null, then you've just deleted only node
			//in the list. set tail to 0.
			if(m_head==0)
				m_tail=0;
			m_count--;
		}
	}
	void RemoveTail()
	{
		SListNode<DataType>* node = m_head;
		//if list isn't empty remove a node.
		if(m_head != 0)
			{
				//if the head is eqal to tail then
				//the list has 1 node. and you are removing it.
				if(m_head == m_tail)
				{
					//delete node and set both params to 0
					delete m_head;
					m_head = m_tail =0;
				}
				else
				{
						//skip ahead util you find the node
						//right before tail node
						while(node-> m_next != m_tail){
							node = node->m_next;
							
						}
						//make the tail point to the node before the
						//current tail and delete the old tail
						m_tail = node;
						delete node->m_next;
						node->m_next=0;
				
				}
				m_count--;
			}
	}
	
}
