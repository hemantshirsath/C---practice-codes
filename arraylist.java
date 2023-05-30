import  java.util.ArrayList;
class arraylist{
    public static void main(String[] args) {
        ArrayList<Integer> a=new ArrayList(5);
        a.add(1);
        a.add(2);
        a.add(3);
        a.add(4);

        a.add(5);
        a.remove(1);
        for(int i=0;i<a.size();i++)
        {
        System.out.println(a.get(i));
        }
    }
}