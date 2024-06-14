public class Test03
{
    public static void Main(string[] args)
    {
        int x = 4, j = 0;
        switch (x)
        {
            case 1:
                j++;
                break;
            case 2:
                j++;
                break;
            case 3:
                j++;
                break;
            case 4:
                j++;
                break;
            case 5:
                j++;
                break;
            default:
                j++;
                break;
        }
        Console.WriteLine(j);
        Console.ReadKey();
    }
}
