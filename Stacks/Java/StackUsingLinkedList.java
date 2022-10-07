import java.util.LinkedList;

public class StackusingLL {
    private int ptr=-1;
    private LinkedList LL;

    public StackusingLL(){
        LL = new LinkedList();
    }

    public boolean isEmpty(){
        return ptr == -1;
    }

    public void push(Object e){
        LL.addFirst(e);
        ptr++;
    }

    public Object pop()throws IllegalArgumentException{
        if(isEmpty()){
            throw new IllegalArgumentException("STACK IS EMPTY");
        }
        ptr--;
        return LL.remove(0);
    }

    public Object peek(){
        return LL.get(0);
    }

    public int size(){
        return LL.size();
    }

    public void display(){
        int n=ptr+1;
        System.out.print("BOTTOM ");
        System.out.print("[");
        while(n-- > 1){
            System.out.print(LL.get(n)+", ");
        }
        System.out.print(LL.get(0)+"]");
        System.out.print(" TOP");
        System.out.println();
    }
}
