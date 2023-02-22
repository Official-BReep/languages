public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World"); //Gebe Hello World aus
        /*
        Block Kommentar
        */
        String mystring = "John";
        System.out.println(mystring);

        System.out.println("Hallo " + mystring);

        System.out.println(4 + 5);

        byte myByte = 100;
        System.out.println(myByte);

        //Boolean
        boolean isJavaFun = true;
        System.out.println(isJavaFun);

        //char
        char myChar = 'B';  //only single Quotes
        System.out.println(myChar);

        //auto casting
        int myInt = 9;
        double myDouble = myInt;

        System.out.println("Int: " + myInt);
        System.out.println("Double: " + myDouble);

        //auto casting switch
        myDouble = 9.78d;
        myInt = (int)myDouble; //manual casting into int
        System.out.println(myDouble);
        System.out.println(myInt);

        //stringlength
        String txt ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        System.out.println("The length of the string is " + txt.length());
        System.out.println(txt.toLowerCase());
        System.out.println(txt.toUpperCase());
        System.out.println(txt.indexOf("BCDE"));

        //wenn man versucht einen String mit einer Zahl zu verbinden dann ist das ergebnis ein String
    }
}
