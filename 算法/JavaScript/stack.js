function Stack(){
	let items=[];
	this.push=function(element){
		items.push(element);
	};
	this.pop=function(){
		return items.pop();
	};
	this.peek=function(){
		return items[items.length-1];
	};
	this.isEmpty=function(){
		return items==0;
	};
	this.clear=function(){
		items=[];
	};
	this.size=function(){
		return items.length;
	};
	this.print=function(){
		console.log(items.toString());
	};
}
let stack=new Stack();
stack.push(1);
stack.push(2);
stack.push(3);
stack.push(4);
console.log(stack.isEmpty());
console.log(stack.peek());
console.log(stack.size());
stack.pop();
stack.print();
