class Program
{
    static void Main()
    {
        int z = int.Parse(Console.ReadLine());
        string l = "";

        while (z != 0)
        {
            
            if (z % 2 == 0)
            {
                l += "0";
            }
            else
            {
                l += "1";
            }
            z = z / 2;
        }

        Console.WriteLine();
        for(int i = l.Length - 1; i >= 0; i--) 
            Console.Write(l[i]);
    }
}