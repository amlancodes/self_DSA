package src;

public class LinkedList{
    private Node head;
    private Node tail;
    int size;
  public LinkedList(){
    this.size=0;
  }
    public void insertFirst(int addval){
              Node node = new Node(addval);
              node.next=head;
              head = node;
              if(tail.next==null){
                  tail=head;
              }
              size+=1;
          }
          public void display(){
               Node temp = head;
               while (temp != null) {
                  System.out.println(temp.val);
                  temp = temp.next;
                  
               }
  
          }
  
    class Node {
       int val;
       Node next;
          public Node(int val){
                  this .val=val;
       }
          public Node (int val,Node next){
                  this.val=val;
                  this.next=next;
       }
    }
    public static void main(String[] args) {
  
    }
  }