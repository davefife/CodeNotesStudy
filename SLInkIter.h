template<class Datatype>
Class SListIterator
{
public:
	SListNode<Datatype>* m_node;
	SLinkedList<Datatype>* m_list;

	SListIterator(SLinkedList<Datatype>* p_list =0, SListNode<Datatype>* p_node =0)
	{
		m_list=p_list;
		m_node=p_node;
		
	}
	
	void Start ()
	{
		if(m_list !=0)
		{
			m_node=m_list->m_head;
		}
	}
	
	void Forth ()
	{
		if( m_node !=0){
			m_node = m_node->m_next;
			
		}
		
	}
	
	Datatype& Item ()
	{
		return m_node->m_data;
	}
	
	bool Valid() //checks to see if pointing to non 0 node
	{
		return (m_node != 0);
	}
	
	SListIterator<Datatype> getIterator()
	{
		return SListIterator<Datatype>( this, m_head);
	}
	
	void Insert( SListIterator<Datatype>& p_iterator, Datatype p_data)
	{
			//if it not do noth
		    if(p_iterator.m_list != this)
			{
				return;
			}
			if(p_iterator.m_node != 0)
			{
			    // if the iterator is valid. then insert node
				p_iterator.m_node->InsertAfter (p_data);
				//if it is tail update tail to new node
				if(p_iterator.m_node ==m_tail)
				{
					m_tail = p_iterator.m_node->m_next;
				}
				m_count++;
			}
			else
			{
			    //if it is invalid append data
				Append( p_data);
			}
			
	}
	
	void Remove( SListIterator<Datatype>& p_iterator)
	{
	    SListNode<Datatype>* node = m_head;
		// if the iterator doesn't belong to this list. do nothing.
		if(p_iterator.m_list != this){
			return;
		
		}
		// if node is invalid, do nothing.
		if(p_iterator.m_node ==0){
			
			return;
		}
		if(p_iterator.m_node == m_head)
		{
			// move the iterator forward and delet th head
			p_iterator.Forth();
			RemoveHead();
		}
		else
		{
			//scan forward through the list until ou find
			// the node prior to the node you want to remove
			while( node->m_next!= p_ierator.m_node)
				node=node->m_next;
			//move the iterator forward.
			p_iterator.Forth();
			//if the node you are deleting is the tail.
			//update the tail node.
			if( node->m_next == m_tail)
			{
				m_tail = node;
			}
			//delete the node.
			delete node-> m_next;
			//re-link th list
			node->m_next = p_iteraor.m_node;
		}
		m_count--;

};
