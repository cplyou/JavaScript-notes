function LinkedList(){
	let Node=function(element){
		this.element=element;
		this.next=null;
	};
	let lenght=0;
	let head=null;

	this.append=function(element){
		let node=new Node(element),current;
		if(head===null){
			head=node;
		}else{
			current=head;
			while(current.next){
				current=current.next;
			}
			current.next=node;
		}
		lenght++;
	};

	this.removeAt=function(position){
	    if(position>-1&&position<lenght){
		    let current=head,previous,index=0;
		    if(position===0){
			    head=current.next;
		    }else{
			    while(index++<position){
				   previous=current;
				   current=current.next;
			    }
			previous.next=current.next;
		    }
		    lenght--;
		    return current.element;
	        }else{
		return null;
        } 
    };

    this.insert=function(position,element){
    	if(position>=0&&position<=lenght){
    		let node=new Node(element),current=head,previous,index=0;
    		if(position===0){
    			node.next=current;
    			head=node;
    		}else{
    			while(index++<position){
    				previous=current;
    				current=current.next;
    			}
    			node.next=current;
    			previous.next=node;
    		}
    		lenght++;
    		return true;
    	}else{
    		return false;
    	}
    };

    this.toString=function(){
    	let current=head,string='';
    	while (current){
    		string+=current.element+(current.next?'n':'');
    		current=current.next;
    	}
    	return string;
    };

    this.indexOf=function(element){
    	let current=head,index=-1;
    	while(current){
    		if(element===current.element){
    			return index;
    		}
    		index++;
    		current=current.next;
    	}
    	return -1;
    };

    this.remove=function(element){
    	let index=this.indexOf(element);
    	return this.removeAt(index);
    };

    this.isEmpty=function(){
    	return lenght===0;
    };

    this.size=function(){
    	return lenght;
    };

    this.getHead=function(){
    	return head;
    };

}

let list=new LinkedList();
list.append(15);
list.append(13);
list.append(10);
console.log(list.size());
console.log(list.indexOf(11));
console.log(list.toString());


