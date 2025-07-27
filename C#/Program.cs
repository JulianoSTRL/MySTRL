using System;
class Program
{
    static void Main()
    {
        Console.WriteLine("Hello, World!");
        string first = "Maria";
        string sec = "João";

        int num1 = 5, num2 = 10, num3 = 15, res;
        res = num1 + num2 + num3;

        float add1 = 3.5f, add2 = 7.8f, add3 = 5.3f, res1;
        res1 = add1 * add2 - add3;

        // Using the "$" sign, it will print any variable you write, be it string, int, char, float;

        Console.WriteLine($"\nMy friends are {first} and {sec}\n");

        // if u do not add space bar in the end of the quote and add a variable outside of it using the "+" sign;
        // The program is going to read it all together, like = "My friends areMariaandJoao";
        // You have to format the text so it looks cleaner and logical;

        Console.WriteLine("\nMy friends are " + first + " and " + sec);

        //Some tests using float, int, math operations, just learning;

        Console.WriteLine($"Print {res}");
        Console.WriteLine($"Print {res1}");

        //String Reuse and Replacement:
        // If you declare new variable, being it: string x = ($"the info you want");
        // This new string can pull all the info from another string which has been already written;
        // Example below;

        string friends = $"\nMy friends are {first} and {sec}";

        Console.WriteLine(friends);

        // If you use .Replace for your new declared variable, it will change the old value with the new value;
        // If it has multiple declarations of the same variable ({first}, {first}, {first}), it will replace the value for all the declarations of the same variable;
        // But the new value will be valid ONLY for the time it has been changed on the new call;
        // When you ask for the variable w/o any changes, it will call the old value; 

        Console.WriteLine(friends.Replace("Maria", "Carlos"));

        Console.WriteLine(friends);

        // If you replace the string value with a new value being replace by rewriting it, it will change completely;
        // Example:

        friends = friends.Replace("Maria", "Carlos");

        // Now the old value of "friends" will be forever changed to the new value, it being {first}, which was "Maria", is now "Carlos", because it has been replaced;
        // If you print the varible 'friends' now, it will be the new value without the need to use replace over and over;
        // Be careful because it changes the value of the entire variable, for all the times you use or call it from now on;

        //tests
        Console.WriteLine(friends);
        Console.WriteLine(friends.Contains("Carlos"));
        Console.WriteLine(friends.StartsWith("Mari"));
        Console.WriteLine(friends.StartsWith("\n"));
        Console.WriteLine(friends.EndsWith("ão"));

        //end
    }
}