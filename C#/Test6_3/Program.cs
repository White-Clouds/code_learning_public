using System.Collections;

namespace Test6_3
{
    class Test04
    {
        static void Main(string[] args)
        {
            Hashtable hash = new Hashtable();
            hash.Add(3, "王五");
            hash.Add(2, "李四");
            hash.Add(1, "张三");

            ArrayList keys = new ArrayList(hash.Keys);
            keys.Sort();

            foreach (object key in keys)
            {
                Console.Write(key + ":" + hash[key] + "\n");
            }
        }
    }
}
